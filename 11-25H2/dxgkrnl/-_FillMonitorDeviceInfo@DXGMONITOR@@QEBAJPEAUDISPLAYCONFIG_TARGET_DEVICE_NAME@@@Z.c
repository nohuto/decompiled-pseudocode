/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403B24AC
 * Callers:
 *     _lambda_f44fa2b0187a36f67bd7075047dd61ad_::operator() @ 0x1401BF5A4 (_lambda_f44fa2b0187a36f67bd7075047dd61ad_--operator().c)
 *     ?MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403BF6CC (-MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // esi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2882;
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v4 )
    return 3223126017LL;
  v8[0] = 0x800000LL;
  v8[1] = (char *)a2 + 36;
  memset((char *)a2 + 36, 0, 0x80uLL);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 104LL))(v4, v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(7LL, v5);
    WdLogGlobalForLineNumber = 2919;
  }
  *((_DWORD *)a2 + 5) = *((_DWORD *)a2 + 5) & 0xFFFFFFFE | (v6 >= 0);
  *((_DWORD *)a2 + 5) = (~(*(unsigned int (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v4 + 112LL))(
                            v4,
                            (char *)a2 + 28,
                            (char *)a2 + 30) >> 29) & 4 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  return 0LL;
}
