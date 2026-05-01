/*
 * XREFs of ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x180056104
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180055B40 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085FA4 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpTelemetrySetTimer(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)a1 + 3528) & 1) == 0 )
  {
    v3 = a3 - *((_DWORD *)a1 + 142);
    v4 = a2 - v3;
    if ( v3 > a2 )
      v4 = 0LL;
    v5 = -10000 * v4;
    TpSetTimer(*((_QWORD *)a1 + 70), &v5, a2, 300000LL);
  }
}
