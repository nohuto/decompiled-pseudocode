/*
 * XREFs of ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180013944
 * Callers:
 *     _lambda_931ff4dcdbf02296ac50d8c7315cbe71_::operator() @ 0x1800118DC (_lambda_931ff4dcdbf02296ac50d8c7315cbe71_--operator().c)
 *     _lambda_d5146fe69570c6dcc5cf92f3d06ab487_::operator() @ 0x180011ABC (_lambda_d5146fe69570c6dcc5cf92f3d06ab487_--operator().c)
 * Callees:
 *     IsCreateStorageItemFromPath_FullTrustCallerPresent @ 0x180003148 (IsCreateStorageItemFromPath_FullTrustCallerPresent.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rdi
  unsigned int v5; // ebx
  PCWSTR StringRawBuffer; // rax
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbp
  __int64 v12; // rcx
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)(a1 + 80);
  if ( !*(_QWORD *)(a1 + 80) )
  {
    if ( !IsCreateStorageItemFromPath_FullTrustCallerPresent() )
    {
      v5 = -2147467263;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)0x80004001LL);
      return v5;
    }
    v18 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 72), 0LL);
    v8 = CreateStorageItemFromPath_FullTrustCaller(
           StringRawBuffer,
           0LL,
           &GUID_fa3f6186_4214_428c_a64c_14c9ac7315ea,
           &v18);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x134,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v8);
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
      if ( v18 )
      {
        v18 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v9)[2])(v9);
      }
      return v5;
    }
    v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    v11 = **v18;
    v12 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v11(v10, &GUID_86664478_8029_46fe_a789_1c2f3e2ffb5c, v4);
    v5 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x136,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v13);
      v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
      if ( v18 )
      {
        v18 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v14)[2])(v14);
      }
      return v5;
    }
    v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
    }
  }
  v16 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( *v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v4 + 8LL))(*v4);
  *a2 = *v4;
  return 0LL;
}
