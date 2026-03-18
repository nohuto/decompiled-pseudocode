/*
 * XREFs of SleepstudyHelper_RegisterComponentEx @ 0x140093984
 * Callers:
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x14008039C (HUBFDO_RegisterSleepstudyBlockerReason.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044EF0 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterComponentEx(void *a1, __int128 *a2, __int128 *a3, __int64 a4, _QWORD *a5)
{
  __int128 v9; // xmm1
  __int64 result; // rax
  __int128 v11; // xmm1
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_14006FDA0 )
    {
      v9 = *a2;
      v12 = *a3;
      v13 = v9;
      return qword_14006FDA0(a1, &v13, &v12, a4, a5);
    }
    else
    {
      return 3221225659LL;
    }
  }
  else if ( a1 == &SleepstudyHelperUnsupportedHandle
         || (!qword_14006FDA0
           ? (result = 3221225659LL)
           : (v11 = *a2, v13 = *a3, v12 = v11, result = qword_14006FDA0(a1, &v12, &v13, a4, a5)),
             (_DWORD)result == -1073741637) )
  {
    *a5 = &SleepstudyHelperUnsupportedHandle;
    return 0LL;
  }
  return result;
}
