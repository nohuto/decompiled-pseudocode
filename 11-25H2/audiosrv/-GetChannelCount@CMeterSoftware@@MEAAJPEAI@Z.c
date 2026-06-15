/*
 * XREFs of ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x1800FA9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180082FE8 (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMeterSoftware::GetChannelCount(CMeterSoftware *this, unsigned int *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int ChannelCountFromDeviceFormat; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  if ( v4 )
  {
    v7 = 0LL;
    (**v4)(v4, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v7);
    if ( v7 )
      ChannelCountFromDeviceFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 32LL))(
                                       *((_QWORD *)this + 4),
                                       a2);
    else
      ChannelCountFromDeviceFormat = -2147467262;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  }
  else
  {
    ChannelCountFromDeviceFormat = CMeterControlBase::GetChannelCountFromDeviceFormat(this, a2);
  }
  if ( ChannelCountFromDeviceFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelCount", 824, ChannelCountFromDeviceFormat);
  return (unsigned int)ChannelCountFromDeviceFormat;
}
