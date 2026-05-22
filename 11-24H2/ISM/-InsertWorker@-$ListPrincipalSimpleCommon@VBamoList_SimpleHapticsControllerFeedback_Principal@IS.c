/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801858B8
 * Callers:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@QEAAJAEBUSimpleHapticsControllerFeedback@@@Z @ 0x180184C5C (-Add@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_Au.c)
 * Callees:
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x1800252B8 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@?$vector@USimpleHapticsControllerFeedback@@V?$allocator@USimpleHapticsControllerFeedback@@@std@@@std@@AEAAPEAUSimpleHapticsControllerFeedback@@QEAU2@AEBU2@@Z @ 0x1800AC224 (--$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@-$vector@USimpleHapticsControllerFe.c)
 *     ?BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801850A0 (-BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,SimpleHapticsControllerFeedback,SimpleHapticsControllerFeedback const &>::InsertWorker(
        __int64 a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        const struct SimpleHapticsControllerFeedback *a4)
{
  __int64 *v8; // rcx
  _QWORD *v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  const char *v14; // r9
  int v15; // eax
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (__int64 *)(a1 + 56);
  v9 = (_QWORD *)v8[1];
  v10 = *v8;
  v11 = ((__int64)v9 - *v8) >> 3;
  if ( a3 > v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)v11);
  v12 = (_QWORD *)(v10 + 8LL * a3);
  if ( v9 == (_QWORD *)v8[2] )
  {
    try
    {
      std::vector<SimpleHapticsControllerFeedback>::_Emplace_reallocate<SimpleHapticsControllerFeedback const &>(
        (__int64)v8,
        (_BYTE *)(v10 + 8LL * a3),
        a4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x153,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v14);
    }
  }
  else
  {
    v13 = *(_QWORD *)a4;
    if ( v12 == v9 )
    {
      *v9 = v13;
      v8[1] += 8LL;
    }
    else
    {
      *v9 = *(v9 - 1);
      v8[1] += 8LL;
      memmove_0(v12 + 1, v12, (char *)(v9 - 1) - (char *)v12);
      *v12 = v13;
    }
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(a2) )
  {
    v15 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal::BroadcastRemoteInsert(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
            a3,
            a4);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v15,
        v17);
  }
  return 0LL;
}
