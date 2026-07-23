/*
 * XREFs of MiInitializeMdlPfn @ 0x1403954E8
 * Callers:
 *     MiInitializeMdlSinglePage @ 0x140393930 (MiInitializeMdlSinglePage.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     MiInitializeAwePfn @ 0x1404F3848 (MiInitializeAwePfn.c)
 */

__int64 __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  int v4; // eax
  int v5; // ecx
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h]
  int v8; // [rsp+38h] [rbp+10h]

  if ( (a2 & 0x100) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) != 5 )
    {
      v8 = *(_DWORD *)(a1 + 32);
      BYTE2(v8) = BYTE2(v8) & 0xF8 | 5;
      *(_DWORD *)(a1 + 32) = v8;
    }
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    v4 = *(_DWORD *)(a1 + 32);
    LOWORD(v4) = 2;
    *(_DWORD *)(a1 + 32) = v4;
    if ( a2 < 0 )
    {
      MiInitializeAwePfn();
    }
    else
    {
      MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
      if ( (a2 & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 8) = 0LL;
        MiAbortCombineScan(a1);
        MiSetPfnIdentity(a1, 3u);
        if ( (a2 & 0x20000) == 0 )
          _InterlockedIncrement64(&qword_140E2DD28);
        *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), 1LL);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
      }
      v7 = *(_DWORD *)(a1 + 32);
      BYTE2(v7) = BYTE2(v7) & 0xF8 | 6;
      *(_DWORD *)(a1 + 32) = v7;
    }
  }
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  v5 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = 0;
  result = *(unsigned int *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = v5 & 0xF8000000 ^ (result ^ v5 & 0xF8000000) & 0xE7FFFFFF;
  return result;
}
