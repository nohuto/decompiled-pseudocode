/*
 * XREFs of ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x180039CAC
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180038AE8 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F00 (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void HampSrvTraceHostRegisterProcessStart(void)
{
  EVENT_DESCRIPTOR v0; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+48h] [rbp-30h] BYREF
  void *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&v0.Level = 260;
    v1.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&v0.Id = 184549376;
    v0.Keyword = 64LL;
    v1.Size = *(unsigned __int16 *)off_1800E82B8;
    v1.Reserved = 2;
    v2 = &unk_1800D482C;
    v3 = 24;
    v4 = 1;
    EventWriteTransfer(RegHandle, &v0, 0LL, 0LL, 2u, &v1);
  }
}
