/*
 * XREFs of ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180078878
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18006BFE0 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D4FF0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D7720 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D8660 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D8FB0 (-OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::GetDeviceInfo(RIMDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  __int64 i; // r9
  __int64 v4; // rax

  for ( i = 0LL; (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this + i + 78);
    if ( v4 && (!*(_QWORD *)(v4 + 16) || *(_DWORD *)(v4 + 40) == a2) )
    {
      *a3 = *(struct DeviceInfo **)(v4 + 32);
      return 0LL;
    }
  }
  return 2147943568LL;
}
