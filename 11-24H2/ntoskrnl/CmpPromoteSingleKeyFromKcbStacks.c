/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140908EB4 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140909054 (CmpStartKeyNodeStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140909474 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x14090A4AC (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
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
  ULONG_PTR v14; // r14
  __int64 v15; // rdx
  int started; // ebx
  __int64 v17; // rbx
  _OWORD *v18; // r15
  __int64 v19; // rdi
  _OWORD *v20; // rsi
  __int64 v21; // rax
  ULONG_PTR v22; // rdx
  ULONG_PTR v23; // rcx
  _DWORD *v24; // r8
  __int64 CellFlat; // rax
  __int64 EntryAtLayerHeight; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int16 v31; // [rsp+22h] [rbp-A7h]
  __int64 KcbAtLayerHeight; // [rsp+28h] [rbp-A1h]
  _BYTE v34[8]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v35[4]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v36; // [rsp+88h] [rbp-41h]
  _BYTE v37[8]; // [rsp+90h] [rbp-39h] BYREF
  char v38; // [rsp+98h] [rbp-31h] BYREF

  memset_0(v34, 0, 0x50uLL);
  v5 = v35;
  do
  {
    CmpKeyNodeStackEntryInitialize(v5);
    v5 = (_OWORD *)(v6 + 32);
  }
  while ( v7 != 1 );
  memset_0(v37, 0, 0x50uLL);
  v8 = &v38;
  do
  {
    CmpKeyNodeStackEntryInitialize(v8);
    v8 = (char *)(v9 + 32);
  }
  while ( v10 != 1 );
  v11 = *(_WORD *)(a1 + 2);
  v31 = v11;
  v12 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  v13 = KcbAtLayerHeight;
  v14 = CmpGetKcbAtLayerHeight(a2);
  started = CmpStartKeyNodeStack(v34, v15);
  if ( started >= 0 )
  {
    v17 = *(__int16 *)(a1 + 2);
    if ( (v17 & 0x8000u) == 0LL )
    {
      v18 = &v35[2 * v17];
      v19 = 32LL * (__int16)(v17 - 2);
      do
      {
        if ( (unsigned __int16)v17 < 2u )
          v20 = v18;
        else
          v20 = (_OWORD *)(v19 + v36);
        v21 = CmpGetKcbAtLayerHeight(a1);
        v22 = *(unsigned int *)(v21 + 40);
        if ( (_DWORD)v22 != -1 )
        {
          v23 = *(_QWORD *)(v21 + 32);
          v24 = (_DWORD *)v20 + 6;
          *(_QWORD *)v20 = v23;
          *((_DWORD *)v20 + 2) = v22;
          if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v23, v22, v24);
          else
            CellFlat = HvpGetCellPaged(v23, v22, v24);
          *((_QWORD *)v20 + 2) = CellFlat;
        }
        v19 -= 32LL;
        v18 -= 2;
        LOWORD(v17) = v17 - 1;
      }
      while ( (v17 & 0x8000u) == 0LL );
      v11 = v31;
      v12 = 0;
      v13 = KcbAtLayerHeight;
    }
    started = CmpStartKeyNodeStackFromKcbStack(v37, a2, 0LL);
    if ( started >= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v34, v11);
      v28 = CmpKeyNodeStackGetEntryAtLayerHeight(v37, v27);
      if ( *(_DWORD *)(v14 + 40) == -1 )
      {
        started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v34, v37);
        if ( started < 0 )
          goto LABEL_28;
        v12 = 1;
        *(_DWORD *)(v14 + 40) = *(_DWORD *)(v28 + 8);
      }
      if ( a3 )
      {
        started = CmpFullPromoteSingleKeyFromKeyNodeStacks(v34, v37);
        if ( started < 0 )
          goto LABEL_26;
        v12 = 1;
      }
      started = 0;
LABEL_26:
      if ( v12 )
      {
        ++*(_QWORD *)(v14 + 304);
        CmpRebuildKcbCacheFromNode(v14, *(_QWORD *)(v28 + 16), 0LL, 0);
        ++*(_QWORD *)(v13 + 304);
        CmpRebuildKcbCacheFromNode(v13, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
      }
    }
  }
LABEL_28:
  CmpCleanupKeyNodeStack(v37);
  CmpCleanupKeyNodeStack(v34);
  return (unsigned int)started;
}
