/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x1408CD1D0
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiDmGetObjectConstraintList @ 0x1408D1930 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140968418 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiDmGetObjectListCallback @ 0x1408CD3A0 (PiDmGetObjectListCallback.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        volatile signed __int64 *a2,
        __int64 (__fastcall *a3)(_QWORD, _QWORD, _QWORD),
        __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  unsigned int v8; // r15d
  __int64 *v9; // r14
  __int64 v10; // rbp
  char *v11; // rdi
  __int64 Pool2; // rax
  _QWORD *v13; // rdx
  volatile signed __int32 *v14; // rcx
  unsigned __int64 *v15; // rbp
  __int64 *v16; // rdi
  __int64 v17; // rcx
  int ObjectListCallback; // eax
  PVOID *v19; // rdi
  char *v21; // rax
  int i; // ecx
  char v23[72]; // [rsp+20h] [rbp-48h] BYREF
  char v24; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v6 = 0LL;
  v23[0] = 0;
  v8 = 0;
  v24 = 0;
  v9 = 0LL;
  v10 = 5LL * a1;
  v11 = (char *)a2 + PiDmListDefs[v10 + 1];
  PiDmObjectAcquireSharedLock(a2);
  if ( *((_DWORD *)v11 + 4) )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v9 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      v13 = *(_QWORD **)v11;
      while ( v13 != (_QWORD *)v11 )
      {
        if ( (unsigned int)v6 >= *((_DWORD *)v11 + 4) )
        {
          v24 = 1;
          break;
        }
        v14 = (volatile signed __int32 *)((char *)v13 - PiDmListDefs[v10 + 3]);
        *(_QWORD *)(Pool2 + 8 * v6) = v14;
        _InterlockedIncrement(v14 + 2);
        v13 = (_QWORD *)*v13;
        v6 = (unsigned int)(v6 + 1);
      }
      if ( (unsigned int)v6 < *((_DWORD *)v11 + 4) )
        v24 = 1;
    }
    else
    {
      v8 = -1073741670;
    }
    v15 = (unsigned __int64 *)a2;
    PiDmObjectReleaseLock((ULONG_PTR)a2);
    if ( !v24 )
      goto LABEL_11;
  }
  else
  {
    if ( *(char **)v11 == v11 )
    {
      PiDmObjectReleaseLock((ULONG_PTR)a2);
      return v8;
    }
    v15 = (unsigned __int64 *)a2;
    PiDmObjectReleaseLock((ULONG_PTR)a2);
  }
  KsepCacheLock(v15);
  v21 = *(char **)v11;
  for ( i = 0; v21 != v11; ++i )
    v21 = *(char **)v21;
  *((_DWORD *)v11 + 4) = i;
  PiDmObjectReleaseLock((ULONG_PTR)v15);
LABEL_11:
  if ( (_DWORD)v6 )
  {
    v16 = v9;
    do
    {
      v17 = *v16;
      if ( a3 == PiDmGetObjectListCallback )
        ObjectListCallback = PiDmGetObjectListCallback(v17, a4, v23);
      else
        ObjectListCallback = guard_dispatch_icall_no_overrides(v17);
      v8 = ObjectListCallback;
      if ( ObjectListCallback < 0 )
        break;
      if ( v23[0] )
        break;
      ++v4;
      ++v16;
    }
    while ( v4 < (unsigned int)v6 );
  }
  if ( v9 )
  {
    if ( (_DWORD)v6 )
    {
      v19 = (PVOID *)v9;
      do
      {
        PiDmObjectRelease(*v19++);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(v9, 0x5A706E50u);
  }
  return v8;
}
