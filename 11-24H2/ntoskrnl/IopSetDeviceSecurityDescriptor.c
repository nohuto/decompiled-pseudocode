/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x140A5AC1C
 * Callers:
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140A5AB7C (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     ObLogSecurityDescriptor @ 0x140838F50 (ObLogSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // r13
  volatile signed __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  unsigned int v16; // edx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  P = 0LL;
  v24 = 0LL;
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
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
    P = (PVOID)v11;
    if ( !v11 )
      break;
    v15 = RtlpSetSecurityObject(0LL, *a2, a3, (__int64 *)&P, 0, a4, v9, 0LL);
    if ( v15 < 0 || (v15 = ObLogSecurityDescriptor((__int16 *)P, &v24, 1u), ExFreePoolWithTag(P, 0), v15 < 0) )
    {
      v16 = 1;
LABEL_8:
      ObDereferenceSecurityDescriptor((__int64)v11, v16);
      return (unsigned int)v15;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = v24;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite(&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v18, v19, v20);
      v16 = 2;
      goto LABEL_8;
    }
    ExReleaseResourceLite(&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v21, v22, v23);
    ObDereferenceSecurityDescriptor((__int64)v11, 1u);
    ObDereferenceSecurityDescriptor(v24, 1u);
  }
  return (unsigned int)-1073741609;
}
