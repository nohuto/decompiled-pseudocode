/*
 * XREFs of CiTaskLocate @ 0x14000FA90
 * Callers:
 *     CiLookupTask @ 0x14000E9F0 (CiLookupTask.c)
 *     CiTaskAllocate @ 0x140010C2C (CiTaskAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiTaskLocate(wchar_t *Str1, _QWORD *a2)
{
  struct _DEVICE_OBJECT *i; // rbx

  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    if ( !_wcsicmp(Str1, (const wchar_t *)i->NextDevice) )
    {
      *a2 = (char *)i - 8;
      return 0LL;
    }
  }
  return 3221226752LL;
}
