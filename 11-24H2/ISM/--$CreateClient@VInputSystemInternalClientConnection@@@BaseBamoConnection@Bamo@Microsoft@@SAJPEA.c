/*
 * XREFs of ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18007F66C
 * Callers:
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18007F5E4 (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 * Callees:
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x18000C4EC (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008DCD0 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??0InputSystemInternalClientConnection@@IEAA@XZ @ 0x18012DBDC (--0InputSystemInternalClientConnection@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<InputSystemInternalClientConnection>(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        InputSystemInternalClientConnection **a4)
{
  InputSystemInternalClientConnection *v7; // rax
  InputSystemInternalClientConnection *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  InputSystemInternalClientConnection *v14; // [rsp+60h] [rbp+18h] BYREF
  InputSystemInternalClientConnection *v15; // [rsp+68h] [rbp+20h]

  v14 = 0LL;
  *a4 = 0LL;
  v15 = (InputSystemInternalClientConnection *)operator new(0x118uLL);
  v7 = InputSystemInternalClientConnection::InputSystemInternalClientConnection(v15);
  v8 = v7;
  v14 = v7;
  if ( v7 )
  {
    *(_OWORD *)v12 = *a2;
    v10 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsClient(
            (__int64)v7,
            a1,
            (__int128 *)v12,
            (__int64)L"System\\InputSystemInternalConversation");
    v9 = v10;
    if ( v10 >= 0 )
    {
      v14 = 0LL;
      *a4 = v8;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB74,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v10,
        v12[0]);
    }
    wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v14);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB72,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x8007000ELL,
      v12[0]);
  }
  return v9;
}
