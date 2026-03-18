/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x1403440B0
 * Callers:
 *     SepMatchPackage @ 0x140344430 (SepMatchPackage.c)
 *     SepNormalAccessCheck @ 0x140344500 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14036292C (SepNormalAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x140363250 (SepMaximumAccessCheck.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireFastResourceShared @ 0x1403411F0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403436B0 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140343DB0 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403442B0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SepCanTokenMatchAllPackageSid(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // bl
  bool v4; // si
  ULONG_PTR *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _WORD *v7; // rbx
  __int16 v8; // cx
  void *OwnerEntryForLegacyShim; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v12; // rdx
  _QWORD v13[4]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp-28h]

  v13[0] = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v3 = 0;
  v13[3] = L"WIN://NOALLAPPPKG";
  v4 = 1;
  v13[1] = *(_QWORD *)(a1 + 776);
  v16 = 0LL;
  v13[2] = 2359330LL;
  v5 = (ULONG_PTR *)(a1 + 48);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (_WORD *)*v5;
    v8 = *(_WORD *)(*v5 + 26);
    if ( (v8 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, *v5, 0LL, 0LL);
    if ( (v8 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v12 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v12->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (v12->MiscFlags & 0x400) == 0 && !v12->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
      if ( !ExAcquireFastResourceShared(v7, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
        || ExIsFastResourceHeldExclusive((ULONG_PTR)v7) )
      {
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
      }
    }
    else
    {
      ExpAcquireResourceSharedLite(*v5, 1, a3);
    }
    v3 = 1;
  }
  if ( (int)AuthzBasepQuerySecurityAttributeAndValues(v13) >= 0 )
    v4 = *(_QWORD *)v15 == 0LL;
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)*v5);
    KeLeaveCriticalRegionThread();
  }
  return v4;
}
