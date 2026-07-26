/*
 * XREFs of PktMonAttachProvider @ 0x1400EC440
 * Callers:
 *     <none>
 * Callees:
 *     Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline @ 0x14009F534 (Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PktMonAttachProvider(HANDLE NmrBindingHandle, PVOID ClientBindingContext, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  PVOID ProviderBindingContext; // [rsp+58h] [rbp+20h] BYREF

  ProviderBindingContext = 0LL;
  if ( (unsigned int)Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline()
    && (v6 = *(_QWORD *)(a3 + 32)) != 0
    && *(_WORD *)(v6 + 4) != 1
    || *((_QWORD *)&xmmword_1401278D0 + 1) )
  {
    v7 = -1073741127;
    goto LABEL_5;
  }
  if ( RunRefCacheAware )
  {
    ExReInitializeRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    RunRefCacheAware = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x72644D50u);
    if ( !RunRefCacheAware )
    {
      v7 = -1073741801;
      goto LABEL_5;
    }
  }
  v7 = NmrClientAttachProvider(
         NmrBindingHandle,
         ClientBindingContext,
         &PktMonClientDispatch,
         &ProviderBindingContext,
         (const void **)&xmmword_1401278D0 + 1);
  if ( !v7 )
  {
    KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
    *(_QWORD *)&xmmword_1401278D0 = ProviderBindingContext;
    ((void (*)(void))qword_1401278B8)();
    KeReleaseMutex(&PktMonCompMutex, 0);
    return v7;
  }
LABEL_5:
  if ( RunRefCacheAware )
  {
    ExFreeCacheAwareRundownProtection(RunRefCacheAware);
    RunRefCacheAware = 0LL;
  }
  return v7;
}
