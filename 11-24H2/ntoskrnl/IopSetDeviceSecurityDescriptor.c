/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x140A524DC
 * Callers:
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140A5243C (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ObLogSecurityDescriptor @ 0x140836B60 (ObLogSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // r13
  volatile signed __int64 *v11; // rbx
  int v12; // edi
  unsigned int v13; // edx
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  P = 0LL;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = a5;
  while ( 1 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    P = (PVOID)v11;
    if ( !v11 )
      break;
    v12 = RtlpSetSecurityObject(0LL, *a2, a3, (__int64 *)&P, 0, a4, v9, 0LL);
    if ( v12 < 0 || (v12 = ObLogSecurityDescriptor((__int16 *)P, &v15, 1u), ExFreePoolWithTag(P, 0), v12 < 0) )
    {
      v13 = 1;
LABEL_8:
      ObDereferenceSecurityDescriptor((__int64)v11, v13);
      return (unsigned int)v12;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = v15;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite(&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v13 = 2;
      goto LABEL_8;
    }
    ExReleaseResourceLite(&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ObDereferenceSecurityDescriptor((__int64)v11, 1u);
    ObDereferenceSecurityDescriptor(v15, 1u);
  }
  return (unsigned int)-1073741609;
}
