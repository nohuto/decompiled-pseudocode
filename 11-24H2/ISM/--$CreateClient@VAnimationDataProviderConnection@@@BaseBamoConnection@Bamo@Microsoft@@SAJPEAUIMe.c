/*
 * XREFs of ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18000C400
 * Callers:
 *     ?RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ @ 0x18000EF38 (-RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ.c)
 * Callees:
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x18000C4EC (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008DCD0 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180090258 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<AnimationDataProviderConnection>(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v13; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+20h]

  v13 = 0LL;
  *a4 = 0LL;
  v7 = operator new(0x100uLL);
  v14 = v7;
  memset_0(v7, 0, 0x100uLL);
  *v7 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v7 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v7);
  v7[1] = &BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`vftable';
  *v7 = &AnimationDataProviderConnection::`vftable';
  v13 = v7;
  *(_OWORD *)v11 = *a2;
  v8 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsClient(
         v7,
         a1,
         v11,
         L"System\\CompositionEngineDataProvider");
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a4 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB74,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v8,
      v11[0]);
    wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v13);
    return v9;
  }
}
