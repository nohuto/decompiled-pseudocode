/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x1408CD070
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B1AD4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     PiDmGetObjectConstraintList @ 0x1409C4900 (PiDmGetObjectConstraintList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PiDmGetObjectListCallback @ 0x1408CD240 (PiDmGetObjectListCallback.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned int v12; // eax
  __int64 Pool2; // rax
  _QWORD *v14; // rdx
  volatile signed __int32 *v15; // rcx
  unsigned __int64 *v16; // rbp
  __int64 *v17; // rdi
  __int64 v18; // rcx
  int ObjectListCallback; // eax
  PVOID *v20; // rdi
  _QWORD *v22; // rax
  int v23; // ecx
  char v24[72]; // [rsp+20h] [rbp-48h] BYREF
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
  v12 = *(_DWORD *)(v11 + 16);
  if ( v12 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 8LL * v12, 0x5A706E50u);
    v9 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      v14 = *(_QWORD **)v11;
      while ( v14 != (_QWORD *)v11 )
      {
        if ( (unsigned int)v6 >= *(_DWORD *)(v11 + 16) )
        {
          v25 = 1;
          break;
        }
        v15 = (volatile signed __int32 *)((char *)v14 - PiDmListDefs[v10 + 3]);
        *(_QWORD *)(Pool2 + 8 * v6) = v15;
        _InterlockedIncrement(v15 + 2);
        v14 = (_QWORD *)*v14;
        v6 = (unsigned int)(v6 + 1);
      }
      if ( (unsigned int)v6 < *(_DWORD *)(v11 + 16) )
        v25 = 1;
    }
    else
    {
      v8 = -1073741670;
    }
    v16 = (unsigned __int64 *)a2;
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
    v16 = (unsigned __int64 *)a2;
    PiDmObjectReleaseLock(a2);
  }
  KsepCacheLock(v16);
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
  PiDmObjectReleaseLock((ULONG_PTR)v16);
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
        ObjectListCallback = guard_dispatch_icall_no_overrides(v18, a4);
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
