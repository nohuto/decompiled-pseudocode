/*
 * XREFs of ?GetItemAt@?$ListPrincipalDetails@USimpleHapticsControllerFeedback@@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_SimpleHapticsControllerFeedback_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUSimpleHapticsControllerFeedback@@I@Z @ 0x1800C9574
 * Callers:
 *     ?PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@IIAEBUtagINPUT_HAPTIC_SETTINGS@@@Z @ 0x1800C9B14 (-PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINP.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ @ 0x180023654 (-VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalDetails<SimpleHapticsControllerFeedback,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,0,1,0>::GetItemAt(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rax
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[4];
  v4 = 0LL;
  v5 = a2;
  v6 = *(_QWORD *)(v2 + 32);
  if ( *(int *)(v6 + 8) > 0 )
    v4 = *(Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
  Microsoft::Bamo::BaseBamoConnection::VerifyLockHeldIfOffThread(v4);
  v8 = a1[7];
  if ( v5 >= (a1[8] - v8) >> 3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5C,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v7);
  return v8 + 8 * v5;
}
