/*
 * XREFs of MiImageUnused @ 0x140469604
 * Callers:
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

int __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  KIRQL v7; // dl
  unsigned int v8; // ecx

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)a3 = -1LL;
  v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( *(_QWORD *)(v6 + 32) )
  {
    if ( a2 )
      v7 = 17;
    else
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v6 = *(unsigned int *)(a1 + 88);
    if ( (_DWORD)v6 != -1 )
    {
      *(_QWORD *)a3 = v6;
      v8 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a3 + 8) = (unsigned __int16)v8;
      *(_DWORD *)(a3 + 16) = (v8 >> 20) & 3;
      LODWORD(v6) = *(_DWORD *)(a1 + 56);
      if ( (v6 & 0x20000000) != 0 )
      {
        LODWORD(v6) = v6 & 0xDFFFFFFF;
        *(_DWORD *)(a1 + 56) = v6;
        *(_BYTE *)(a3 + 13) = BYTE2(v8) & 1;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x400000u;
    if ( v7 != 17 )
      LODWORD(v6) = MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v7);
  }
  return v6;
}
