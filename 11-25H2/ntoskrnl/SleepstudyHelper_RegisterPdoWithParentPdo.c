/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140AC4AD0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x14047CB90 (SleepstudyHelperDestroyBlocker.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405D8688 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A19740 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A19C50 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A1A000 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentPdo(
        __int64 a1,
        unsigned __int64 a2,
        struct _DEVICE_OBJECT *a3,
        _QWORD *a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 *v5; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 *v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h] BYREF
  PKSPIN_LOCK v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    v11 = a2;
    v7 = SleepstudyHelperCreateBlockerFromDevice(a1, &v11, a3, (__int64 *)&v10);
    v5 = v10;
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = SleepstudyHelperBuildBlocker(v10, &v12);
      if ( v8 >= 0 )
      {
        *a4 = v12;
        goto LABEL_14;
      }
      v4 = v12;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
LABEL_14:
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && v8 == -1073741637 )
  {
    v8 = 0;
    *a4 = &SleepstudyHelperUnsupportedHandle;
  }
  return (unsigned int)v8;
}
