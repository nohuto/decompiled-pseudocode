/*
 * XREFs of ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1401E3CB8
 * Callers:
 *     _lambda_94dd59a04c39bb1513797c78502b3509_::_lambda_invoker_cdecl_ @ 0x1401E3C90 (_lambda_94dd59a04c39bb1513797c78502b3509_--_lambda_invoker_cdecl_.c)
 *     rimDoSetInputModeWorkItem @ 0x1401E3D74 (rimDoSetInputModeWorkItem.c)
 * Callees:
 *     RIMIsWakeCapableDevice @ 0x1400690A8 (RIMIsWakeCapableDevice.c)
 *     RIMSetDeviceInputMode @ 0x14017D314 (RIMSetDeviceInputMode.c)
 */

void __fastcall RIMSetInputManagerInputMode(__int64 a1, unsigned int a2)
{
  __int64 i; // rbx
  unsigned int v4; // edi

  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    v4 = a2;
    if ( (*(_DWORD *)(i + 172) & 4) != 0 && a2 == 2 && !(unsigned int)RIMIsWakeCapableDevice(i) )
      v4 = 1;
    RIMSetDeviceInputMode((struct RIMDEV *)i, v4);
  }
}
