/*
 * XREFs of CmpLightWeightCommitAddKeyUoW @ 0x140A1499C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A14BD8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x140A14C30 (CmpLightWeightSwapParentSubKeyList.c)
 *     CmLockHiveSecurityShared @ 0x140BBB96C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpLightWeightCommitAddKeyUoW(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r13
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // r14
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v11; // rsi
  __int64 v12; // r15
  ULONG_PTR v13; // rdx
  __int64 CellPaged; // rax
  __int64 v15; // r8
  int v16; // eax
  unsigned __int16 v17; // cx
  unsigned int v18; // eax
  __int64 result; // rax
  unsigned int v20; // [rsp+80h] [rbp+48h] BYREF
  _QWORD *v21; // [rsp+88h] [rbp+50h]
  unsigned int v22; // [rsp+90h] [rbp+58h] BYREF
  int v23; // [rsp+94h] [rbp+5Ch]
  unsigned int v24; // [rsp+98h] [rbp+60h] BYREF
  int v25; // [rsp+9Ch] [rbp+64h]

  v21 = a2;
  v3 = a2;
  v25 = 0;
  v24 = -1;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD **)(a1 + 104);
  v22 = -1;
  v23 = 0;
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(unsigned int *)(v4 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, &v24);
  else
    CellFlat = HvpGetCellPaged(v6, v7, &v24);
  v20 = 0;
  v9 = CellFlat;
  BugCheckParameter4 = *(unsigned int *)(CellFlat + 44);
  *(_DWORD *)(CellFlat + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  v11 = *(_QWORD *)(a1 + 48);
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(v11 + 88) = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 32);
    CmLockHiveSecurityShared(v12);
    if ( !CmpFindSecurityCellCacheIndex(v12, BugCheckParameter4, &v20) )
    {
      *(_QWORD *)(v11 + 88) = 0LL;
      KeBugCheckEx(0x51u, 4uLL, 1uLL, v11, BugCheckParameter4);
    }
    *(_QWORD *)(v11 + 88) = *(_QWORD *)(*(_QWORD *)(v12 + 1888) + 16LL * v20 + 8);
    CmUnlockHiveSecurity(v12);
    v3 = v21;
  }
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  v13 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v6, v13, &v22);
  else
    CellPaged = HvpGetCellPaged(v6, v13, &v22);
  v15 = CellPaged;
  *(_QWORD *)(CellPaged + 4) = *v3;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = *v3;
  ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 304LL);
  v16 = *(_DWORD *)(CellPaged + 52);
  v17 = 2 * *(_WORD *)(v9 + 72);
  if ( (*(_BYTE *)(v9 + 2) & 0x20) == 0 )
    v17 = *(_WORD *)(v9 + 72);
  if ( (unsigned __int16)v16 < (unsigned int)v17 )
  {
    *(_WORD *)(v15 + 52) = v17;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = v17;
  }
  v18 = *(unsigned __int16 *)(v9 + 74);
  if ( *(_DWORD *)(v15 + 56) < v18 )
    *(_DWORD *)(v15 + 56) = v18;
  if ( *v5 == 1 )
    CmpLightWeightSwapParentSubKeyList(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), v5);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, (__int64)&v22);
  else
    HvpReleaseCellPaged(v6, &v22);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, (__int64)&v24);
  else
    HvpReleaseCellPaged(v6, &v24);
  CmpLightWeightCleanupModifyKeyDataUoW(v6);
  result = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(result + 240) = 0LL;
  return result;
}
