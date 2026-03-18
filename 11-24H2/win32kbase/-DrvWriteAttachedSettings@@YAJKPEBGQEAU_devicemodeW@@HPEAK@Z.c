/*
 * XREFs of ?DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z @ 0x140012E78
 * Callers:
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x140122F94 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 */

NTSTATUS __fastcall DrvWriteAttachedSettings(
        int a1,
        const unsigned __int16 *a2,
        struct _devicemodeW *const a3,
        int a4,
        unsigned int *a5)
{
  unsigned int *v5; // r14
  NTSTATUS v6; // ebx
  int v10; // edi
  int ValueData; // [rsp+50h] [rbp+8h] BYREF

  ValueData = a1;
  v5 = a5;
  v6 = 0;
  v10 = 11;
  *a5 = 0;
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
    return 0;
  if ( a4 )
  {
    ValueData = 0;
    return RtlWriteRegistryValue(0x40000000u, a2, L"Attach.ToDesktop", 4u, &ValueData, 4u);
  }
  else if ( a3 )
  {
    if ( (a3->dmFields & 0x20) != 0 )
    {
      ValueData = 1;
      v6 = RtlWriteRegistryValue(0x40000000u, a2, L"Attach.ToDesktop", 4u, &ValueData, 4u);
    }
    else
    {
      v10 = 9;
    }
    *v5 = v10;
    return v6;
  }
  else
  {
    return -1073741823;
  }
}
