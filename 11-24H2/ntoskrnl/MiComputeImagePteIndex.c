/*
 * XREFs of MiComputeImagePteIndex @ 0x140350C54
 * Callers:
 *     MiReferenceInPageFile @ 0x140350A90 (MiReferenceInPageFile.c)
 * Callees:
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 */

__int64 __fastcall MiComputeImagePteIndex(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 SharedProtos; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  if ( qword_140E2DCC0 && (v3 & 0x10) == 0 )
    v3 &= ~qword_140E2DCC0;
  v4 = v3 >> 16;
  v5 = *(_QWORD *)v4;
  if ( (*(_DWORD *)(v4 + 32) & 0x20000) != 0 && (*(_DWORD *)(v5 + 56) & 0x8000000) != 0 )
  {
    SharedProtos = MiGetSharedProtos(*(_QWORD *)v4, a2, v4);
    v7 = (__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)(v5 + 136)) >> 3;
    v6 = *(_QWORD *)(SharedProtos + 72);
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 136);
    LODWORD(v7) = 0;
  }
  return (unsigned int)v7 + (unsigned int)((v2 - v6) >> 3);
}
