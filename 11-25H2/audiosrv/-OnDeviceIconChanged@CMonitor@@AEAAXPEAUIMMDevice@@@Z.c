/*
 * XREFs of ?OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180115194
 * Callers:
 *     ?OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180112DA0 (-OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18002CF84 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitor::OnDeviceIconChanged(CMonitor *this, struct IMMDevice *a2)
{
  int v4; // eax
  LPCRITICAL_SECTION v5[2]; // [rsp+30h] [rbp-30h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp-10h]
  __int64 v8; // [rsp+70h] [rbp+10h] BYREF

  *(_OWORD *)pvar = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      this,
      *((_DWORD *)this + 18));
  }
  if ( (unsigned int)(*((_DWORD *)this + 18) - 2) <= 2 )
  {
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v8);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
                 v8,
                 &PKEY_DeviceClass_IconPath,
                 pvar),
          v4 < 0)
      || LOWORD(pvar[0]) == 31
      && (v4 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**((_QWORD **)this + 21) + 56LL))(
                 *((_QWORD *)this + 21),
                 pvar[1],
                 0LL),
          v4 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Du,
          (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
          v4);
      }
    }
    PropVariantClear(pvar);
  }
  ATL::CCritSecLock::~CCritSecLock(v5);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
}
