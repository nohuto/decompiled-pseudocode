/*
 * XREFs of ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18011CE74
 * Callers:
 *     ?OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011AAF0 (-OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18000A918 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::OnDeviceDescriptionChanged(CMonitor *this, struct IMMDevice *a2)
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
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Au,
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
                 &PKEY_Device_FriendlyName,
                 pvar),
          v4 < 0)
      || LOWORD(pvar[0]) == 31
      && (v4 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**((_QWORD **)this + 21) + 40LL))(
                 *((_QWORD *)this + 21),
                 pvar[1],
                 0LL),
          v4 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Bu,
          (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
          v4);
      }
    }
    PropVariantClear(pvar);
  }
  ATL::CCritSecLock::~CCritSecLock(v5);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
}
