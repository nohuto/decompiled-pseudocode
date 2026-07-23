/*
 * XREFs of MiGetPagesRemainingInResidentPage @ 0x140685444
 * Callers:
 *     MiAddPhysicalPagesToCrashDump @ 0x140678474 (MiAddPhysicalPagesToCrashDump.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x140685390 (MiGetBaseResidentPageForBugCheck.c)
 */

unsigned __int64 __fastcall MiGetPagesRemainingInResidentPage(__int64 a1, _DWORD *a2, int *a3)
{
  int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  int PfnPageSizeIndexUnsynchronized; // eax
  int v11; // edx
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  v15 = 0;
  v6 = 3;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( (KiBugCheckActive & 3) == 0 )
  {
    PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(a1, &v14, &v15);
    v11 = v15;
    goto LABEL_6;
  }
  v8 = MiGetBaseResidentPageForBugCheck(a1);
  v9 = v8;
  if ( v8 )
  {
    v14 = *(_BYTE *)(v8 + 34) & 7;
    PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndex(v8);
    v11 = (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 32)) >> 6;
LABEL_6:
    v6 = PfnPageSizeIndexUnsynchronized;
    goto LABEL_7;
  }
  v14 = *(_BYTE *)(a1 + 34) & 7;
  v11 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
LABEL_7:
  *a3 = v11;
  v12 = MiPageSizes[v6];
  *a2 = v14;
  return v12 + (v7 & ~(v12 - 1)) - v7;
}
