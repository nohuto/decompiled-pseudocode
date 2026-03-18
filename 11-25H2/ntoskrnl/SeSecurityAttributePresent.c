/*
 * XREFs of SeSecurityAttributePresent @ 0x1402940F0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140291ED8 (SepVerifyDesktopAppxPackageName.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14083D388 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408BE7AC (EtwpQueryTokenPackageInfo.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409260EC (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     PsQueryProcessAttributes @ 0x1409BE6C0 (PsQueryProcessAttributes.c)
 *     PsQueryProcessAttributesByToken @ 0x1409CCE30 (PsQueryProcessAttributesByToken.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14029409C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402944B0 (ExIsFastResourceHeldExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140294520 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepEqualUnicodeString @ 0x14035FA50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14035FC14 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // r15
  char v4; // bp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  __int16 v7; // r8
  __int64 v8; // r14
  __int64 *i; // rbx
  __int64 *v10; // rdi
  __int64 *j; // r14
  unsigned __int8 v12; // bl
  const UNICODE_STRING *v14; // rcx
  void *OwnerEntryForLegacyShim; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v18; // rdx

  v2 = a2;
  v4 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = *(_QWORD *)(a1 + 48);
    v7 = *(_WORD *)(v6 + 26);
    if ( (v7 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v6, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v18 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v18->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (v18->MiscFlags & 0x400) == 0 && !v18->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v6, (ULONG_PTR)OwnerEntryForLegacyShim)
        || (unsigned __int8)ExIsFastResourceHeldExclusive(v6) )
      {
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
      }
    }
    else
    {
      LOBYTE(a2) = 1;
      ExpAcquireResourceSharedLite(*(_QWORD *)(a1 + 48), a2);
    }
    v4 = 1;
  }
  v8 = *(_QWORD *)(a1 + 776);
  for ( i = *(__int64 **)(v8 + 8); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(v8 + 8) )
    {
      v10 = (__int64 *)(v8 + 32);
      for ( j = *(__int64 **)(v8 + 32); j != v10; j = (__int64 *)*j )
      {
        i = j - 2;
        if ( (j[5] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(i + 4, v2) )
          goto LABEL_18;
      }
      goto LABEL_10;
    }
    v14 = (const UNICODE_STRING *)(i + 4);
    if ( KeGetCurrentIrql() >= 2u
       ? AuthzBasepEqualUnicodeStringCaseSensitive(v14, v2)
       : RtlEqualUnicodeString(v14, v2, 1u) )
    {
      break;
    }
  }
LABEL_18:
  if ( !i )
  {
LABEL_10:
    v12 = 0;
    goto LABEL_11;
  }
  v12 = 1;
LABEL_11:
  if ( v4 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return v12;
}
