/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x1408CF680
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B41E4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiDmGetObjectConstraintList @ 0x1409D4AD0 (PiDmGetObjectConstraintList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     PiDmGetObjectListCallback @ 0x1408CF850 (PiDmGetObjectListCallback.c)
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408D0A7C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408D12E4 (PiDmObjectReleaseLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(_QWORD, _QWORD, _QWORD),
        __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  unsigned int v8; // r15d
  __int64 *v9; // r14
  __int64 v10; // rbp
  ULONG_PTR v11; // rdi
  __int64 Pool2; // rax
  _QWORD *v13; // rdx
  volatile signed __int32 *v14; // rcx
  unsigned __int64 *v15; // rbp
  __int64 v16; // r9
  __int64 *v17; // rdi
  __int64 v18; // rcx
  int ObjectListCallback; // eax
  PVOID *v20; // rdi
  _QWORD *v22; // rax
  int v23; // ecx
  _BYTE v24[72]; // [rsp+20h] [rbp-48h] BYREF
  char v25; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v6 = 0LL;
  v24[0] = 0;
  v8 = 0;
  v25 = 0;
  v9 = 0LL;
  v10 = 5LL * a1;
  v11 = a2 + PiDmListDefs[v10 + 1];
  PiDmObjectAcquireSharedLock(a2);
  if ( *(_DWORD *)(v11 + 16) )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v9 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      v13 = *(_QWORD **)v11;
      while ( v13 != (_QWORD *)v11 )
      {
        if ( (unsigned int)v6 >= *(_DWORD *)(v11 + 16) )
        {
          v25 = 1;
          break;
        }
        v14 = (volatile signed __int32 *)((char *)v13 - PiDmListDefs[v10 + 3]);
        *(_QWORD *)(Pool2 + 8 * v6) = v14;
        _InterlockedIncrement(v14 + 2);
        v13 = (_QWORD *)*v13;
        v6 = (unsigned int)(v6 + 1);
      }
      if ( (unsigned int)v6 < *(_DWORD *)(v11 + 16) )
        v25 = 1;
    }
    else
    {
      v8 = -1073741670;
    }
    v15 = (unsigned __int64 *)a2;
    PiDmObjectReleaseLock(a2);
    if ( !v25 )
      goto LABEL_11;
  }
  else
  {
    if ( *(_QWORD *)v11 == v11 )
    {
      PiDmObjectReleaseLock(a2);
      return v8;
    }
    v15 = (unsigned __int64 *)a2;
    PiDmObjectReleaseLock(a2);
  }
  KsepCacheLock(v15);
  v22 = *(_QWORD **)v11;
  v23 = 0;
  if ( *(_QWORD *)v11 != v11 )
  {
    do
    {
      v22 = (_QWORD *)*v22;
      ++v23;
    }
    while ( v22 != (_QWORD *)v11 );
  }
  *(_DWORD *)(v11 + 16) = v23;
  PiDmObjectReleaseLock((ULONG_PTR)v15);
LABEL_11:
  if ( (_DWORD)v6 )
  {
    v17 = v9;
    do
    {
      v18 = *v17;
      if ( a3 == PiDmGetObjectListCallback )
        ObjectListCallback = PiDmGetObjectListCallback(v18, a4, v24);
      else
        ObjectListCallback = guard_dispatch_icall_no_overrides(v18, a4, v24, v16);
      v8 = ObjectListCallback;
      if ( ObjectListCallback < 0 )
        break;
      if ( v24[0] )
        break;
      ++v4;
      ++v17;
    }
    while ( v4 < (unsigned int)v6 );
  }
  if ( v9 )
  {
    if ( (_DWORD)v6 )
    {
      v20 = (PVOID *)v9;
      do
      {
        PiDmObjectRelease(*v20++);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(v9, 0x5A706E50u);
  }
  return v8;
}
