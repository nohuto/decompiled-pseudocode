/*
 * XREFs of ?Replace@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013FF14
 * Callers:
 *     ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18013E1DC (-OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x1800252B8 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800252DC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180025454 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?BroadcastRemoteReplace@BamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013CC20 (-BroadcastRemoteReplace@BamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Micr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,DisplayOcclusionRect,DisplayOcclusionRect const &>::Replace(
        __int64 a1,
        unsigned int a2,
        const struct DisplayOcclusionRect *a3)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rdi
  struct Microsoft::Bamo::BaseBamoConnection *v7; // rdi
  const char *v8; // r9
  _OWORD *v9; // rdx
  int v10; // eax
  Microsoft::BamoImpl::BamoImplObject *v12[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-B8h]
  __int128 v14; // [rsp+40h] [rbp-A8h]
  __int128 v15; // [rsp+50h] [rbp-98h]
  __int128 v16; // [rsp+60h] [rbp-88h]
  __int128 v17; // [rsp+70h] [rbp-78h]
  __int128 v18; // [rsp+80h] [rbp-68h]
  __int128 v19; // [rsp+90h] [rbp-58h]
  __int128 v20; // [rsp+A0h] [rbp-48h]
  __int128 v21; // [rsp+B0h] [rbp-38h]
  __int128 v22; // [rsp+C0h] [rbp-28h]
  __int128 v23; // [rsp+D0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(int *)(v6 + 8) <= 0 )
    v7 = 0LL;
  else
    v7 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
  Microsoft::Bamo::Lock::Lock(v12, v7);
  if ( v4 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) >> 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x114,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v8);
  v13 = *(_OWORD *)a3;
  v14 = *((_OWORD *)a3 + 1);
  v15 = *((_OWORD *)a3 + 2);
  v16 = *((_OWORD *)a3 + 3);
  v17 = *((_OWORD *)a3 + 4);
  v18 = *((_OWORD *)a3 + 5);
  v19 = *((_OWORD *)a3 + 6);
  v20 = *((_OWORD *)a3 + 7);
  v21 = *((_OWORD *)a3 + 8);
  v22 = *((_OWORD *)a3 + 9);
  v23 = *((_OWORD *)a3 + 10);
  v9 = (_OWORD *)(*(_QWORD *)(a1 + 56) + 176 * v4);
  *v9 = v13;
  v9[1] = v14;
  v9[2] = v15;
  v9[3] = v16;
  v9[4] = v17;
  v9[5] = v18;
  v9[6] = v19;
  v9 += 8;
  *(v9 - 1) = v20;
  *v9 = v21;
  v9[1] = v22;
  v9[2] = v23;
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v7) )
  {
    v10 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal::BroadcastRemoteReplace(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
            v4,
            a3);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v10,
        (int)v12[0]);
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v12);
  return 0LL;
}
