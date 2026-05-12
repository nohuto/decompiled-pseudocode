/*
 * XREFs of StorWaitForSingleObject @ 0x140055970
 * Callers:
 *     RaUnitWaitForRemoveLock @ 0x14003E098 (RaUnitWaitForRemoveLock.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 */

__int64 __fastcall StorWaitForSingleObject(void *a1)
{
  unsigned int v1; // ebx

  v1 = KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  if ( v1 == 258
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_fe6d764451ce35c6dcc82ee897ab329f_Traceguids);
  }
  return v1;
}
