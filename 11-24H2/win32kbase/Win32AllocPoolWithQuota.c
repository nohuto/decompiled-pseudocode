/*
 * XREFs of Win32AllocPoolWithQuota @ 0x14004AC90
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x14004ACF8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 */

__int64 __fastcall Win32AllocPoolWithQuota(__int64 a1, unsigned int a2)
{
  __int64 UserSessionState; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  v7 = a2;
  v8 = 256LL;
  v6[0] = &v8;
  v6[1] = &v7;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___)(
           UserSessionState + 72288,
           a1,
           a2,
           v6);
}
