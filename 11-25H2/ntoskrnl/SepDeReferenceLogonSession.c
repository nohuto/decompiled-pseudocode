/*
 * XREFs of SepDeReferenceLogonSession @ 0x1409A78B8
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x140449F64 (SepDeReferenceLogonSessionDirect.c)
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepDeleteSessionLowboxEntries @ 0x140480324 (SepDeleteSessionLowboxEntries.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405D8BC8 (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     SepDeleteLogonSessionSidValues @ 0x140783D8C (SepDeleteLogonSessionSidValues.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1407843B0 (SepInformFileSystemsOfDeletedLogon.c)
 *     ObDereferenceDeviceMap @ 0x14097F5CC (ObDereferenceDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     ObDestroyHandleRevocationBlock @ 0x140A62690 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteCachedHandlesTable @ 0x140A627A8 (SepDeleteCachedHandlesTable.c)
 *     SepDeleteLogonSessionClaims @ 0x140A628D4 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformLsaOfDeletedLogon @ 0x140AA6124 (SepInformLsaOfDeletedLogon.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceLogonSession(__int64 a1, void *a2)
{
  unsigned __int64 v4; // r8
  __int64 *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbx
  __int64 i; // rdi
  __int64 v9; // rax
  struct _KTHREAD *v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  void *v13; // rcx
  volatile signed __int64 *v14; // rbx
  void *v15; // rcx

  v4 = (unsigned __int64)(unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (__int64 *)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v4 & 3));
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(void **)(i + 160) == a2 && *(_DWORD *)a1 == *(_DWORD *)(i + 8) && *(_DWORD *)(a1 + 4) == *(_DWORD *)(i + 12) )
      break;
    v5 = (__int64 *)i;
  }
  v9 = _InterlockedDecrement64((volatile signed __int64 *)(i + 24));
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v9 )
      __fastfail(0xEu);
    *v5 = *(_QWORD *)i;
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(i + 48) + 48LL), 1u);
        v11 = *(_QWORD *)(i + 48);
        v12 = *(_DWORD *)(v11 + 200);
        ExReleaseResourceLite(*(PERESOURCE *)(v11 + 48));
        KeLeaveCriticalRegion();
        if ( (v12 & 0x8000000) != 0 && (*(_DWORD *)(i + 16) || *(_DWORD *)(i + 20)) )
          SepDeReferenceLogonSession(i + 16, *(_QWORD *)(i + 160));
      }
    }
    if ( (*(_DWORD *)(i + 32) & 4) != 0 && (*(_DWORD *)(i + 16) || *(_DWORD *)(i + 20)) )
      SepDeReferenceLogonSession(i + 16, *(_QWORD *)(i + 160));
    v13 = *(void **)(i + 48);
    if ( v13 )
    {
      ObfDereferenceObject(v13);
      *(_QWORD *)(i + 48) = 0LL;
    }
    v14 = *(volatile signed __int64 **)(i + 40);
    if ( v14 )
    {
      *(_QWORD *)(i + 40) = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObDereferenceDeviceMap(v14, 1u);
    }
    if ( (*(_DWORD *)(i + 32) & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon((_QWORD *)a1, a2);
    v15 = *(void **)(i + 64);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 128);
    SepDeleteCachedHandlesTable(i + 88);
    SepInformLsaOfDeletedLogon(a1, *(_QWORD *)(i + 160), i);
    SepDeleteSessionLowboxEntries();
  }
}
