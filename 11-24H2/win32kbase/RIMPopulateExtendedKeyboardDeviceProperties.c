/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1401E8AB8
 * Callers:
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1400A7A48 (RIMRegOpenDeviceInstanceKey.c)
 *     ?PopulateKeyboardProperties@@YAXPEAURIMDEV@@PEAX@Z @ 0x14012CF1C (-PopulateKeyboardProperties@@YAXPEAURIMDEV@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(struct RIMDEV *a1, int a2, int a3)
{
  void *v4; // rax
  void *v5; // rdi

  if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 291);
  v4 = RIMRegOpenDeviceInstanceKey((int)a1, a2, a3);
  v5 = v4;
  if ( v4 )
  {
    PopulateKeyboardProperties(a1, v4);
    LODWORD(v4) = ZwClose(v5);
  }
  return (int)v4;
}
