/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140AC9510
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1404778D0 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A18A40 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A192D0 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentPdo(
        __int64 a1,
        unsigned __int64 a2,
        struct _DEVICE_OBJECT *a3,
        PKSPIN_LOCK *a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 *v5; // rdi
  int v7; // eax
  int v8; // ebx
  PKSPIN_LOCK v9; // rax
  __int64 *v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h] BYREF
  PKSPIN_LOCK v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    v12 = a2;
    v7 = SleepstudyHelperCreateBlockerFromDevice(a1, &v12, a3, (__int64 *)&v11);
    v5 = v11;
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = SleepstudyHelperBuildBlocker((int *)v11, &v13);
      if ( v8 >= 0 )
      {
        v9 = v13;
LABEL_16:
        *a4 = v9;
        return (unsigned int)v8;
      }
      v4 = v13;
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
  if ( v8 == -1073741637 )
  {
    v9 = (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle;
    v8 = 0;
    goto LABEL_16;
  }
  return (unsigned int)v8;
}
