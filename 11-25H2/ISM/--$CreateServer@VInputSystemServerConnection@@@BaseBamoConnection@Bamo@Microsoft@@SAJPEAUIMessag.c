/*
 * XREFs of ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180097538
 * Callers:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000D33C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 * Callees:
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x18000C8C0 (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008D560 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0BamoConnection@ISMBamos_AutoBamos@@QEAA@XZ @ 0x18009762C (--0BamoConnection@ISMBamos_AutoBamos@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<InputSystemServerConnection>(
        size_t a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Microsoft::Bamo::BaseBamoConnection *v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  v9 = operator new(0x100uLL);
  a5 = v9;
  memset_0(v9, 0, 0x100uLL);
  ISMBamos_AutoBamos::BamoConnection::BamoConnection((ISMBamos_AutoBamos::BamoConnection *)v9);
  *v9 = &InputSystemServerConnection::`vftable';
  v9[31] = 0LL;
  v15 = (Microsoft::Bamo::BaseBamoConnection *)v9;
  v13 = *a3;
  v10 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
          (__int64)v9,
          a1,
          a2,
          &v13,
          (const wchar_t *)L"System\\InputSystemConversation");
  v11 = v10;
  if ( v10 >= 0 )
  {
    v15 = 0LL;
    *v8 = v9;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB45,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10);
  }
  wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v15);
  return v11;
}
