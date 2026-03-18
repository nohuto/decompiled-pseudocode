/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentHandle @ 0x140767A70
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x14047C6C0 (SleepstudyHelperDestroyBlocker.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405E45D8 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A24A50 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A24F30 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A252E0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperGetBlockerGuid @ 0x140A60140 (SleepstudyHelperGetBlockerGuid.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentHandle(__int64 a1, __int64 a2, __int64 a3, KSPIN_LOCK **a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 v5; // rdi
  int BlockerGuid; // ebx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v13[3]; // [rsp+28h] [rbp-30h] BYREF
  KSPIN_LOCK *v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  v13[0] = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    BlockerGuid = SleepstudyHelperGetBlockerGuid(a2, v13);
    if ( BlockerGuid < 0 )
      goto LABEL_15;
    v10 = SleepstudyHelperCreateBlockerFromDevice(a1, v13, a3, &v12);
    v5 = v12;
    BlockerGuid = v10;
    if ( v10 >= 0 )
    {
      BlockerGuid = SleepstudyHelperBuildBlocker(v12, &v14);
      if ( BlockerGuid >= 0 )
      {
        *a4 = v14;
        goto LABEL_15;
      }
      v4 = v14;
    }
  }
  else
  {
    BlockerGuid = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
LABEL_15:
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && BlockerGuid == -1073741637 )
  {
    BlockerGuid = 0;
    *a4 = (KSPIN_LOCK *)&SleepstudyHelperUnsupportedHandle;
  }
  return (unsigned int)BlockerGuid;
}
