/*
 * XREFs of RIMPopulateExtendedMouseDeviceProperties @ 0x1401E8B38
 * Callers:
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1400A7A48 (RIMRegOpenDeviceInstanceKey.c)
 *     RIMRegOpenLocalMachineKey @ 0x14011E804 (RIMRegOpenLocalMachineKey.c)
 *     ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x14012CF98 (-PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMPopulateExtendedMouseDeviceProperties(struct RIMDEV *a1, int a2, int a3)
{
  void *v4; // rdi
  void *v5; // rax
  void *v6; // rbx

  if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 332);
  v4 = RIMRegOpenDeviceInstanceKey((int)a1, a2, a3);
  v5 = (void *)RIMRegOpenLocalMachineKey(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  v6 = v5;
  if ( v4 || v5 )
  {
    PopulateMouseProperties(a1, v4, v5);
    if ( v4 )
      ZwClose(v4);
    if ( v6 )
      ZwClose(v6);
  }
}
