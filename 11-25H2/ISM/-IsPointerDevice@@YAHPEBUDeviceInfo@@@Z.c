/*
 * XREFs of ?IsPointerDevice@@YAHPEBUDeviceInfo@@@Z @ 0x18012EA48
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801790B0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180192CB0 (-Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPointerDevice(const struct DeviceInfo *a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return (*((_BYTE *)a1 + 4) & 0x3B) != 0;
  return result;
}
