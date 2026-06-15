/*
 * XREFs of ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18011D224
 * Callers:
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011ADF0 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18000A918 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x18011C89C (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18011D984 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011DCE0 (-Stop@CMonitor@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::OnPauseOnBatteryChanged(CMonitor *this, struct IMMDevice *a2)
{
  int v4; // eax
  bool v5; // al
  LPCRITICAL_SECTION v6[2]; // [rsp+30h] [rbp-30h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  unsigned __int8 v9; // [rsp+80h] [rbp+20h] BYREF
  __int64 v10; // [rsp+90h] [rbp+30h] BYREF

  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v10 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      this,
      *((_DWORD *)this + 18));
  }
  if ( (unsigned int)(*((_DWORD *)this + 18) - 2) <= 2 )
  {
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v10);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
                 v10,
                 &PKEY_MonitorPauseOnBattery,
                 pvar),
          v4 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
          v4);
      }
    }
    else if ( LOWORD(pvar[0]) == 11 )
    {
      v5 = LOWORD(pvar[1]) == 0xFFFF;
      *((_BYTE *)this + 77) = v5;
      if ( v5 )
      {
        v9 = 0;
        if ( CMonitor::GetPowerStatus(this, &v9) && *((_DWORD *)this + 18) == 3 && (v9 & 0xFD) == 0 )
          CMonitor::Stop(this);
      }
      else if ( *((_DWORD *)this + 18) == 4 )
      {
        CMonitor::Start(this);
      }
    }
    PropVariantClear(pvar);
  }
  ATL::CCritSecLock::~CCritSecLock(v6);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
}
