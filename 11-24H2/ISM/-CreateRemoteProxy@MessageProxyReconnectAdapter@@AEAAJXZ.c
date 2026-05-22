/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180054190
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180053FF0 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rsi
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v9; // ebx
  PCWSTR StringRawBuffer; // rax
  int v11; // r15d
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, char *); // rdi
  int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // rcx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v20; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, char *); // [rsp+68h] [rbp+38h] BYREF

  v20 = 0;
  v21 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v20);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v2,
      v18);
    v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v4)[2])(v4);
    }
    return v3;
  }
  v6 = *((_QWORD *)this + 7);
  v7 = *(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v6 + 40LL);
  v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v8)[2])(v8);
  }
  v9 = v20;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
  v11 = v7(v6, StringRawBuffer, v9, &v21);
  if ( v11 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, char *)))(**((_QWORD **)this + 6) + 24LL))(
      *((_QWORD *)this + 6),
      v21);
    v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
    v14 = **v21;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
    v15 = v14(v13, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, (char *)this + 64);
    v3 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x119,
        (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v15,
        v18);
      v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v16)[2])(v16);
      }
      return v3;
    }
    v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), unsigned __int64))(*v21)[7])(
            v21,
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v3 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11A,
        (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v17,
        v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      return v3;
    }
  }
  v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v12)[2])(v12);
  }
  return (unsigned int)v11;
}
