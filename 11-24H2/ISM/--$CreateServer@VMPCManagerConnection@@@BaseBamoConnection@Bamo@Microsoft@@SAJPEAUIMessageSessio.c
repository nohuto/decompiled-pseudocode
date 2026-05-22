/*
 * XREFs of ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18000D810
 * Callers:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x18000DC1C (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 * Callees:
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x18000D01C (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008DCD0 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008DEC0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0BamoConnection@MPCManagerBamo_AutoBamos@@QEAA@XZ @ 0x180090214 (--0BamoConnection@MPCManagerBamo_AutoBamos@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(
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
  int v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  v9 = operator new(0x108uLL);
  a5 = v9;
  memset_0(v9, 0, 0x108uLL);
  MPCManagerBamo_AutoBamos::BamoConnection::BamoConnection((MPCManagerBamo_AutoBamos::BamoConnection *)v9);
  *v9 = &MPCManagerConnection::`vftable';
  v9[31] = 0LL;
  v9[32] = 0LL;
  v16 = v9;
  v14 = *a3;
  v10 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
          (__int64)v9,
          a1,
          a2,
          &v14,
          (const wchar_t *)L"System\\MPCManagerConversation");
  v11 = v10;
  if ( v10 >= 0 )
  {
    v16 = 0LL;
    *v8 = v9;
    wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB45,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v13);
    Microsoft::Bamo::BaseBamoConnection::Release((Microsoft::Bamo::BaseBamoConnection *)v9);
    return v11;
  }
}
