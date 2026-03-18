/*
 * XREFs of SleepstudyHelper_RegisterComponentEx @ 0x140ACB790
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1403E4390 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperDestroyBlocker @ 0x14047C6C0 (SleepstudyHelperDestroyBlocker.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405E45D8 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A24F30 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A252E0 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterComponentEx(__int64 a1, __int128 *a2, __int128 *a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r14
  KSPIN_LOCK *v6; // rsi
  __int64 *v7; // rdi
  __int128 v8; // xmm1
  int v9; // eax
  int v10; // ebx
  __int64 *v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF
  PKSPIN_LOCK v15; // [rsp+80h] [rbp+20h] BYREF

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  if ( a1 && a4 && a5 )
  {
    v8 = *a3;
    v14 = *a2;
    v13 = v8;
    v9 = SleepstudyHelperCreateBlockerFromGuid(a1, &v14, &v13, a4, 0, (__int64 *)&v12);
    v7 = v12;
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = SleepstudyHelperBuildBlocker(v12, &v15);
      if ( v10 >= 0 )
      {
        *v5 = v15;
        goto LABEL_13;
      }
      v6 = v15;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v7 )
    SleepstudyHelperDestroyBlockerBuilder(v7);
  if ( v6 )
    SleepstudyHelperDestroyBlocker(v6);
LABEL_13:
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && v10 == -1073741637 )
  {
    v10 = 0;
    *v5 = &SleepstudyHelperUnsupportedHandle;
  }
  return (unsigned int)v10;
}
