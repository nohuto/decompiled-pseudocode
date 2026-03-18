/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x140973184
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpPromoteSubtree @ 0x14097360C (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140885FAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x140889590 (CmpGetKcbAtLayerHeight.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409737C4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140974020 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x1409741C0 (CmpStartKeyNodeStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14097470C (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140975744 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x140975960 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r9
  char *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // di
  char v12; // r12
  ULONG_PTR v13; // r15
  __int16 v14; // dx
  ULONG_PTR v15; // r14
  __int64 v16; // rdx
  int started; // ebx
  __int64 v18; // rbx
  _OWORD *v19; // r15
  __int64 v20; // rdi
  _OWORD *v21; // rsi
  __int64 v22; // rax
  ULONG_PTR v23; // rdx
  ULONG_PTR v24; // rcx
  _DWORD *v25; // r8
  __int64 CellFlat; // rax
  __int64 EntryAtLayerHeight; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdi
  unsigned __int16 v32; // [rsp+22h] [rbp-A7h]
  __int64 KcbAtLayerHeight; // [rsp+28h] [rbp-A1h]
  _BYTE v35[8]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v36[4]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v37; // [rsp+88h] [rbp-41h]
  _BYTE v38[8]; // [rsp+90h] [rbp-39h] BYREF
  char v39; // [rsp+98h] [rbp-31h] BYREF

  memset_0(v35, 0, 0x50uLL);
  v5 = v36;
  do
  {
    CmpKeyNodeStackEntryInitialize(v5);
    v5 = (_OWORD *)(v6 + 32);
  }
  while ( v7 != 1 );
  memset_0(v38, 0, 0x50uLL);
  v8 = &v39;
  do
  {
    CmpKeyNodeStackEntryInitialize(v8);
    v8 = (char *)(v9 + 32);
  }
  while ( v10 != 1 );
  v11 = *(_WORD *)(a1 + 2);
  v32 = v11;
  v12 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v11);
  v13 = KcbAtLayerHeight;
  v15 = CmpGetKcbAtLayerHeight(a2, v14);
  started = CmpStartKeyNodeStack(v35, v16);
  if ( started >= 0 )
  {
    v18 = *(__int16 *)(a1 + 2);
    if ( (v18 & 0x8000u) == 0LL )
    {
      v19 = &v36[2 * v18];
      v20 = 32LL * (__int16)(v18 - 2);
      do
      {
        if ( (unsigned __int16)v18 < 2u )
          v21 = v19;
        else
          v21 = (_OWORD *)(v20 + v37);
        v22 = CmpGetKcbAtLayerHeight(a1, v18);
        v23 = *(unsigned int *)(v22 + 40);
        if ( (_DWORD)v23 != -1 )
        {
          v24 = *(_QWORD *)(v22 + 32);
          v25 = (_DWORD *)v21 + 6;
          *(_QWORD *)v21 = v24;
          *((_DWORD *)v21 + 2) = v23;
          if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v24, v23, v25);
          else
            CellFlat = HvpGetCellPaged(v24, v23, v25);
          *((_QWORD *)v21 + 2) = CellFlat;
        }
        v20 -= 32LL;
        v19 -= 2;
        LOWORD(v18) = v18 - 1;
      }
      while ( (v18 & 0x8000u) == 0LL );
      v11 = v32;
      v12 = 0;
      v13 = KcbAtLayerHeight;
    }
    started = CmpStartKeyNodeStackFromKcbStack(v38, a2, 0LL);
    if ( started >= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v35, v11);
      v29 = CmpKeyNodeStackGetEntryAtLayerHeight(v38, v28);
      if ( *(_DWORD *)(v15 + 40) == -1 )
      {
        started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v35, v38);
        if ( started < 0 )
          goto LABEL_28;
        v12 = 1;
        *(_DWORD *)(v15 + 40) = *(_DWORD *)(v29 + 8);
      }
      if ( a3 )
      {
        started = CmpFullPromoteSingleKeyFromKeyNodeStacks(v35, v38);
        if ( started < 0 )
          goto LABEL_26;
        v12 = 1;
      }
      started = 0;
LABEL_26:
      if ( v12 )
      {
        ++*(_QWORD *)(v15 + 304);
        CmpRebuildKcbCacheFromNode(v15, *(_QWORD *)(v29 + 16), 0LL, 0);
        ++*(_QWORD *)(v13 + 304);
        CmpRebuildKcbCacheFromNode(v13, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
      }
    }
  }
LABEL_28:
  CmpCleanupKeyNodeStack(v38);
  CmpCleanupKeyNodeStack(v35);
  return (unsigned int)started;
}
