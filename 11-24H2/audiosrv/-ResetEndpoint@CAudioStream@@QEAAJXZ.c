/*
 * XREFs of ?ResetEndpoint@CAudioStream@@QEAAJXZ @ 0x1800727C4
 * Callers:
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x18010DA90 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::ResetEndpoint(CAudioStream *this)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v11; // [rsp+30h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 73) )
  {
    v1 = (__int64 *)((char *)this + 8);
    v2 = *v1;
    v11 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 120))(v1, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v3);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      return v4;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 200LL))(v11);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x159,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v6);
LABEL_8:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
      return v4;
    }
  }
  else
  {
    v11 = 0LL;
    v7 = *((_QWORD *)this + 7);
    v8 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 64LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v11);
    v8(v7, &v11);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 200LL))(v11);
    v4 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_8;
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  return 0LL;
}
