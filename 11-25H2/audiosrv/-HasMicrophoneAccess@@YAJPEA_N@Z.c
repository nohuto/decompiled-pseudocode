/*
 * XREFs of ?HasMicrophoneAccess@@YAJPEA_N@Z @ 0x1801114DC
 * Callers:
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180110028 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x1800C5FF8 (--$-0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z.c)
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x18010FD54 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ?GetClientPid@@YAKXZ @ 0x180110E84 (-GetClientPid@@YAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HasMicrophoneAccess(bool *a1)
{
  const unsigned __int16 (*v2)[51]; // rdx
  HSTRING *v3; // rax
  int ActivationFactory; // eax
  int v5; // ebx
  DWORD ClientPid; // r15d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING, _QWORD, _QWORD, int *); // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  _BYTE v12[4]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch] BYREF
  int v14[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  *a1 = 0;
  wil::CoInitializeEx(v12);
  v15 = 0LL;
  v3 = Windows::Internal::StringReference::StringReference(&string, v2);
  ActivationFactory = RoGetActivationFactory(*v3, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &v15);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_3:
    wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v15);
    if ( v12[0] )
      CoUninitialize();
    return (unsigned int)v5;
  }
  ClientPid = GetClientPid();
  *(_QWORD *)v14 = 0LL;
  v8 = v15;
  v9 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, _QWORD, int *))(*(_QWORD *)v15 + 64LL);
  *(_QWORD *)v14 = 0LL;
  v10 = -1LL;
  do
    ++v10;
  while ( c_szCapabilityMicrophone[v10] );
  if ( v10 > 0xFFFFFFFF )
  {
    LODWORD(v10) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(c_szCapabilityMicrophone, v10, &hstringHeader, &string);
  v5 = v9(v8, string, ClientPid, 0LL, v14);
  if ( v5 < 0 )
  {
    v11 = 105LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)v5);
    wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)v14);
    goto LABEL_3;
  }
  v13 = 3;
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v14 + 152LL))(*(_QWORD *)v14, &v13);
  if ( v5 < 0 )
  {
    v11 = 108LL;
    goto LABEL_12;
  }
  *a1 = v13 == 3;
  wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)v14);
  wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v15);
  if ( v12[0] )
    CoUninitialize();
  return 0LL;
}
