/*
 * XREFs of ?GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z @ 0x14027D294
 * Callers:
 *     ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14027D874 (-_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_T.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140056BA4 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x14027D634 (-_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

char __fastcall DxgMonitor::MonitorUsageState::GetAppOverride(DxgMonitor::MonitorUsageState *this, GUID *Guid)
{
  unsigned __int64 *p_p_GuidString; // rdx
  unsigned __int64 *v4; // rcx
  __int64 v6; // rcx
  bool v7; // zf
  unsigned __int64 p_GuidString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING *v9; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF

  GuidString = 0LL;
  if ( RtlStringFromGUID(Guid, &GuidString) < 0 )
  {
    p_GuidString = (unsigned __int64)&GuidString;
    p_p_GuidString = &p_GuidString;
    v4 = (unsigned __int64 *)&v9;
    v9 = (struct _UNICODE_STRING *)RtlFreeUnicodeString;
LABEL_3:
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(
      (__int64 (__fastcall **)(_QWORD))v4,
      p_p_GuidString);
    return 0;
  }
  v6 = *((_QWORD *)this + 1);
  v11 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, wchar_t *, __int64 *))(*(_QWORD *)v6 + 72LL))(
          v6,
          2LL,
          GuidString.Buffer,
          &v11)
    || (p_GuidString = 0LL, DxgMonitor::MonitorUsageState::_GetAppOverrideKey(this, &GuidString, &p_GuidString) < 0) )
  {
    v9 = &GuidString;
    p_p_GuidString = (unsigned __int64 *)&v9;
    v4 = &p_GuidString;
    p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
    goto LABEL_3;
  }
  p_p_GuidString = (unsigned __int64 *)&v9;
  v7 = p_GuidString == v11;
  v4 = &p_GuidString;
  v9 = &GuidString;
  p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
  if ( !v7 )
    goto LABEL_3;
  ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&p_GuidString, &v9);
  return 1;
}
