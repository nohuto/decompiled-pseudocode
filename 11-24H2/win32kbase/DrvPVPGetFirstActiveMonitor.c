/*
 * XREFs of DrvPVPGetFirstActiveMonitor @ 0x1401CB224
 * Callers:
 *     GetCertificateLengthAndMonitorPDO @ 0x1401C605C (GetCertificateLengthAndMonitorPDO.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140015CF0 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14008DC40 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14008FA68 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14011E230 (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvPVPGetFirstActiveMonitor(struct _UNICODE_STRING *a1, __int64 a2, PVOID *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v7; // rcx
  __int64 DxgkWin32kInterface; // rax
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+60h] [rbp-10h]

  v3 = 0;
  Object = 0LL;
  result = DrvGetDeviceFromNameAndValidateDevice(a1, 1LL, (struct tagGRAPHICS_DEVICE **)&Object);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    v12 = 0LL;
    EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
      (EnsureMonitorDevices *)v10,
      (struct tagGRAPHICS_DEVICE *)Object);
    for ( i = 0; i < v11; ++i )
    {
      v14 = 0;
      v13 = 0LL;
      EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v10, i, (struct tagVIDEO_MONITOR_DEVICE *)&v13);
      if ( (v13 & 1) != 0 )
      {
        Object = 0LL;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v7);
        if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, PVOID *))(DxgkWin32kInterface + 456))(
               (char *)&v13 + 8,
               DWORD1(v13),
               &Object,
               a3) >= 0 )
        {
          ObfReferenceObject(*a3);
          ObfDereferenceObject(Object);
          goto LABEL_9;
        }
      }
    }
    v3 = -1071774235;
LABEL_9:
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v10);
    return v3;
  }
  return result;
}
