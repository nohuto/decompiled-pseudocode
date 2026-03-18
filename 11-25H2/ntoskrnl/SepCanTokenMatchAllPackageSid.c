/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x1403678D0
 * Callers:
 *     SepNormalAccessCheck @ 0x140366DE0 (SepNormalAccessCheck.c)
 *     SepMatchPackage @ 0x140367B50 (SepMatchPackage.c)
 *     SepMaximumAccessCheck @ 0x140368FC0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14036A718 (SepNormalAccessCheckEx.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403679D0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall SepCanTokenMatchAllPackageSid(__int64 a1)
{
  char v1; // bl
  bool v2; // si
  PERESOURCE *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v6[4]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v7; // [rsp+40h] [rbp-48h]
  __int128 v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+60h] [rbp-28h]

  v6[0] = 0LL;
  v7 = 0LL;
  v1 = 0;
  v8 = 0LL;
  v2 = 1;
  v9 = 0LL;
  v6[3] = L"WIN://NOALLAPPPKG";
  v6[1] = *(_QWORD *)(a1 + 776);
  v6[2] = 2359330LL;
  v3 = (PERESOURCE *)(a1 + 48);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*v3, 1u);
    v1 = 1;
  }
  if ( (int)AuthzBasepQuerySecurityAttributeAndValues(v6) >= 0 )
    v2 = *(_QWORD *)v8 == 0LL;
  if ( v1 )
  {
    ExReleaseResourceLite(*v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v2;
}
