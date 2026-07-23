/*
 * XREFs of MiCoalesceActivePagesIntoFree @ 0x14068DDA4
 * Callers:
 *     MiFreeContiguousLargePageRun @ 0x1406833D4 (MiFreeContiguousLargePageRun.c)
 *     MiFreeCacheSlice @ 0x140693778 (MiFreeCacheSlice.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 */

__int64 __fastcall MiCoalesceActivePagesIntoFree(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r14
  __int64 v6; // rbp
  int PfnPageSizeIndex; // eax
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int8 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 i; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+90h] [rbp+8h]
  int v22; // [rsp+98h] [rbp+10h]
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v24 = 0;
  v4 = 1;
  v5 = MiPageSizes[a3];
  v6 = 48 * a2 - 0x220000000000LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v6);
  v8 = MiPageSizes[PfnPageSizeIndex];
  v20 = v8;
  v21 = MiLargePageShifts[PfnPageSizeIndex];
  MiPageToNode(a2);
  v12 = 0LL;
  v13 = v6;
  v14 = 17;
  v19 = v5 >> v21;
  v15 = v6;
  v22 = (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6;
  v16 = 48 * v8;
  while ( v12 < v19 )
  {
    if ( v13 == v6 )
    {
      v14 = MiLockPageInline(v13, v9, v10, v11);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      goto LABEL_10;
    }
    ++v12;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v13 + 32)) >> 6 != v22
      || (*(_DWORD *)(v13 + 32) & 0x40000000) != 0
      || (*(_QWORD *)(v13 + 40) & 0x20000000000LL) != 0 )
    {
LABEL_10:
      v4 = 0;
      goto LABEL_12;
    }
    v15 += v16;
    v13 = v15;
  }
  MiLargePagePromote(a2, a3, v10, 1, &v24);
LABEL_12:
  for ( i = v6 + 48 * ((v12 << v21) - v20); i != v6; i -= v16 )
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPage(i, v14);
  return v4;
}
