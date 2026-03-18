/*
 * XREFs of MiCoalesceActivePagesIntoFree @ 0x1406813E4
 * Callers:
 *     MiFreeContiguousLargePageRun @ 0x1406769C4 (MiFreeContiguousLargePageRun.c)
 *     MiFreeCacheSlice @ 0x140687248 (MiFreeCacheSlice.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiLargePagePromote @ 0x1404384BC (MiLargePagePromote.c)
 */

__int64 __fastcall MiCoalesceActivePagesIntoFree(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r14
  __int64 v6; // rbp
  int PfnPageSizeIndex; // eax
  __int64 v8; // r15
  __int64 v9; // r8
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned __int8 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 i; // rcx
  unsigned __int64 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  int v19; // [rsp+90h] [rbp+8h]
  int v20; // [rsp+98h] [rbp+10h]
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  v22 = 0;
  v4 = 1;
  v5 = MiPageSizes[a3];
  v6 = 48 * a2 - 0x220000000000LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v6);
  v8 = MiPageSizes[PfnPageSizeIndex];
  v18 = v8;
  v19 = MiLargePageShifts[PfnPageSizeIndex];
  MiPageToNode(a2);
  v10 = 0LL;
  v11 = v6;
  v12 = 17;
  v17 = v5 >> v19;
  v13 = v6;
  v20 = (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6;
  v14 = 48 * v8;
  while ( v10 < v17 )
  {
    if ( v11 == v6 )
    {
      v12 = MiLockPageInline(v11);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      goto LABEL_10;
    }
    ++v10;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v11 + 32)) >> 6 != v20
      || (*(_DWORD *)(v11 + 32) & 0x40000000) != 0
      || (*(_QWORD *)(v11 + 40) & 0x20000000000LL) != 0 )
    {
LABEL_10:
      v4 = 0;
      goto LABEL_12;
    }
    v13 += v14;
    v11 = v13;
  }
  MiLargePagePromote(a2, a3, v9, 1, &v22);
LABEL_12:
  for ( i = v6 + 48 * ((v10 << v19) - v18); i != v6; i -= v14 )
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPage(i, v12);
  return v4;
}
