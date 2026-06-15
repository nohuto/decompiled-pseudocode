/*
 * XREFs of ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800C9680
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x18000A684 (-InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::InitializeHardwareStreamControls(CAudioStream *this, struct IAudioDeviceGraph *a2)
{
  __int64 *v2; // r15
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 184);
  *((_DWORD *)this + 35) = 2;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 23);
  v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         v2);
  if ( v5 < 0 )
  {
    v6 = 691LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 24);
  v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, char *))a2)(
         a2,
         &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
         (char *)this + 192);
  if ( v5 < 0 )
  {
    v6 = 692LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 25);
  v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, char *))a2)(
         a2,
         &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c,
         (char *)this + 200);
  if ( v5 < 0 )
  {
    v6 = 693LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 32LL))(
         *((_QWORD *)this + 25),
         (char *)this + 100);
  if ( v5 < 0 )
  {
    v6 = 695LL;
    goto LABEL_3;
  }
  v8 = *v2;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 40LL))(v8, &v10);
  if ( v5 < 0 )
  {
    v6 = 698LL;
    goto LABEL_3;
  }
  v5 = CAudioStream::InitializeVolumeCoefficientCount(this, v10);
  if ( v5 < 0 )
  {
    v6 = 699LL;
    goto LABEL_3;
  }
  return 0LL;
}
