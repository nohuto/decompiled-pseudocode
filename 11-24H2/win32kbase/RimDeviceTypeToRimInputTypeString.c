/*
 * XREFs of RimDeviceTypeToRimInputTypeString @ 0x140114D9C
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x14005B744 (RIMStartDeviceSpecificRead.c)
 *     RIMDeliverConfigRequest @ 0x1400A90C8 (RIMDeliverConfigRequest.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1400B14B8 (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140114A14 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     rimInputApc @ 0x14017F8E0 (rimInputApc.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1401D8518 (RIMLogDeviceHealthTelemetry.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall RimDeviceTypeToRimInputTypeString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // ecx
  const wchar_t *result; // rax

  if ( !a2 )
    return L"RIM_INPUT_TYPE_MOUSE";
  v2 = a2 - 1;
  if ( !v2 )
    return L"RIM_INPUT_TYPE_KEYBOARD";
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return &word_14025E168;
    result = L"RIM_INPUT_TYPE_PTP_CONFIG";
    if ( (*(_DWORD *)(a1 + 168) & 0x1000) == 0 )
      return L"RIM_INPUT_TYPE_TCH_CONFIG";
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
      if ( v4 == 7 )
        return L"RIM_INPUT_TYPE_HID_PTP";
      if ( (unsigned int)(v4 - 5) <= 1 )
        return L"RIM_INPUT_TYPE_HID_PEN";
      if ( (unsigned int)(v4 - 1) <= 3 )
        return L"RIM_INPUT_TYPE_HID_TCH";
      return &word_14025E168;
    }
    result = &word_14025E168;
    if ( *(_DWORD *)(a1 + 48) != 3 )
      return L"RIM_INPUT_TYPE_HID_GEN";
  }
  return result;
}
