/*
 * XREFs of _lambda_4aaa46c46049f8f8ae12df03880025d1_::operator() @ 0x180112B68
 * Callers:
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAV?$unique_ptr@UVolumeControlData@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@Z @ 0x180112FB8 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAV-$unique_ptr@UVolumeContr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_4aaa46c46049f8f8ae12df03880025d1_::operator()(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  bool v7; // cl
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = **(__int64 ***)a1;
  v3 = *v2;
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v3 + 32))(v2, 0LL, &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v10 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
           v12,
           &PKEY_AudioDevice_DontPersistControls,
           pvar);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = LOWORD(pvar[0]) == 19 && LODWORD(pvar[1]);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 288LL) = v7;
      PropVariantClear(pvar);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B3,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v6);
      PropVariantClear(pvar);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  return v5;
}
