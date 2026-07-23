/*
 * XREFs of SeSecurityAttributePresent @ 0x140322DA0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403BAF3C (SepVerifyDesktopAppxPackageName.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1408E082C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributesByToken @ 0x1409A9790 (PsQueryProcessAttributesByToken.c)
 *     PsQueryProcessAttributes @ 0x1409C65D0 (PsQueryProcessAttributes.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140AA71D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x140322B90 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140323290 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  char v4; // bp
  struct _KTHREAD *CurrentThread; // rax
  _WORD *v6; // rbx
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  __int64 *i; // rbx
  __int64 *v10; // rdi
  __int64 *j; // r14
  unsigned __int8 v12; // bl
  const UNICODE_STRING *v14; // rcx
  void *OwnerEntryForLegacyShim; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v18; // rdx

  v4 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = *(_WORD **)(a1 + 48);
    v7 = (unsigned __int16)v6[13];
    if ( (v7 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v6, 0LL, 0LL);
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
      if ( !ExAcquireFastResourceShared(v6, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
        || ExIsFastResourceHeldExclusive((ULONG_PTR)v6) )
      {
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
      }
    }
    else
    {
      ExpAcquireResourceSharedLite(*(_QWORD *)(a1 + 48), 1, v7);
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
        if ( (j[5] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(i + 4, a2) )
          goto LABEL_18;
      }
      goto LABEL_10;
    }
    v14 = (const UNICODE_STRING *)(i + 4);
    if ( KeGetCurrentIrql() >= 2u
       ? AuthzBasepEqualUnicodeStringCaseSensitive(v14, a2)
       : RtlEqualUnicodeString(v14, a2, 1u) )
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
    KeLeaveCriticalRegionThread();
  }
  return v12;
}
