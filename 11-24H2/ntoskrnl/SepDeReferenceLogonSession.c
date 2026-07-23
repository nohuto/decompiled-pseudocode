/*
 * XREFs of SepDeReferenceLogonSession @ 0x140AD7224
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x14043F618 (SepDeReferenceLogonSessionDirect.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SepDeleteSessionLowboxEntries @ 0x14047C2A8 (SepDeleteSessionLowboxEntries.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406059EC (Feature_2045735225__private_IsEnabledDeviceUsageNoInline.c)
 *     SepDeleteLogonSessionSidValues @ 0x14079327C (SepDeleteLogonSessionSidValues.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x140793820 (SepInformFileSystemsOfDeletedLogon.c)
 *     ObDereferenceDeviceMap @ 0x14096DDE4 (ObDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x140A5D020 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteCachedHandlesTable @ 0x140A5D138 (SepDeleteCachedHandlesTable.c)
 *     SepDeleteLogonSessionClaims @ 0x140A5D264 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformLsaOfDeletedLogon @ 0x140AA6914 (SepInformLsaOfDeletedLogon.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceLogonSession(__int64 *a1, struct _LIST_ENTRY *a2)
{
  __int64 v4; // rbp
  __int64 *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbx
  __int64 i; // rdi
  __int64 v9; // rax
  struct _KTHREAD *v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  void *v16; // rcx
  volatile signed __int64 *v17; // rbx
  void *v18; // rcx

  v4 = (unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (__int64 *)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  v7 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v4 & 3));
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      ExReleaseResourceLite((PERESOURCE)&SepRmDbLock + (v4 & 3));
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(struct _LIST_ENTRY **)(i + 168) == a2
      && *(_DWORD *)a1 == *(_DWORD *)(i + 8)
      && *((_DWORD *)a1 + 1) == *(_DWORD *)(i + 12) )
    {
      break;
    }
    v5 = (__int64 *)i;
  }
  v9 = _InterlockedDecrement64((volatile signed __int64 *)(i + 32));
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    return;
  }
  if ( v9 )
    __fastfail(0xEu);
  *v5 = *(_QWORD *)i;
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_QWORD *)(i + 56) )
    {
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(i + 56) + 48LL), 1u);
      v11 = *(_QWORD *)(i + 56);
      v12 = *(_DWORD *)(v11 + 200);
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 48));
      KeLeaveCriticalRegion();
      if ( (v12 & 0x8000000) != 0 )
      {
        if ( !(unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() )
        {
          v13 = i + 16;
          if ( !*(_DWORD *)(i + 16) )
          {
            v14 = *(_DWORD *)(i + 20) == 0;
            goto LABEL_22;
          }
          goto LABEL_23;
        }
        v15 = *(_DWORD *)(i + 40);
        if ( (v15 & 2) != 0 )
        {
          if ( *(_DWORD *)(i + 16) || *(_DWORD *)(i + 20) )
            SepDeReferenceLogonSession(i + 16, *(_QWORD *)(i + 168));
          v13 = i + 24;
          if ( !*(_DWORD *)(i + 24) )
          {
            v14 = *(_DWORD *)(i + 28) == 0;
LABEL_22:
            if ( v14 )
              goto LABEL_25;
          }
LABEL_23:
          SepDeReferenceLogonSession(v13, *(_QWORD *)(i + 168));
          goto LABEL_25;
        }
        *(_DWORD *)(i + 40) = v15 & 0xFFFFFFFB;
      }
    }
  }
LABEL_25:
  if ( (*(_DWORD *)(i + 40) & 4) != 0 && (*(_DWORD *)(i + 16) || *(_DWORD *)(i + 20)) )
    SepDeReferenceLogonSession(i + 16, *(_QWORD *)(i + 168));
  v16 = *(void **)(i + 56);
  if ( v16 )
  {
    ObfDereferenceObject(v16);
    *(_QWORD *)(i + 56) = 0LL;
  }
  v17 = *(volatile signed __int64 **)(i + 48);
  if ( v17 )
  {
    *(_QWORD *)(i + 48) = 0LL;
    SepCleanupLUIDDeviceMapDirectory(a1, a2);
    ObDereferenceDeviceMap(v17, 1u);
  }
  if ( (*(_DWORD *)(i + 40) & 1) != 0 )
    SepInformFileSystemsOfDeletedLogon(a1, a2);
  v18 = *(void **)(i + 72);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  SepDeleteLogonSessionClaims(i);
  if ( SepTokenSidSharingEnabled )
    SepDeleteLogonSessionSidValues(i);
  ObDestroyHandleRevocationBlock((struct _EX_RUNDOWN_REF *)(i + 136));
  SepDeleteCachedHandlesTable(i + 96);
  SepInformLsaOfDeletedLogon(a1, *(void **)(i + 168), i);
  SepDeleteSessionLowboxEntries();
}
