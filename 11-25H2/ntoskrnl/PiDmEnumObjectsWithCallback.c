/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x1408CCFCC
 * Callers:
 *     PiDmListInit @ 0x14071AEA0 (PiDmListInit.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x1409501B0 (PiDmGetObjectList.c)
 *     PpDevCfgInit @ 0x140C13F04 (PpDevCfgInit.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403E0D80 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiDmGetObjectListCallback @ 0x1408CD3A0 (PiDmGetObjectListCallback.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiDqEnumQueryObjectsCallback @ 0x1408D0520 (PiDqEnumQueryObjectsCallback.c)
 *     PiDmObjectManagerReleaseLock @ 0x140968CC0 (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140968CF0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140968D50 (PiDmObjectManagerAcquireSharedLock.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        unsigned int a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD),
        __int64 a3)
{
  ULONG_PTR v3; // rdi
  int v7; // esi
  __int64 ObjectManagerForObjectType; // r15
  const wchar_t *v9; // rax
  ULONG_PTR *v10; // rax
  int v11; // ebx
  int ObjectListCallback; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v14; // rax
  _BYTE v16[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v20; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-51h] BYREF
  const wchar_t *v22; // [rsp+70h] [rbp-49h]
  int v23; // [rsp+78h] [rbp-41h]
  unsigned int v24; // [rsp+7Ch] [rbp-3Dh]

  v3 = 0LL;
  v20 = 0LL;
  v7 = 0;
  memset_0(v21, 0, 0x68uLL);
  RestartKey[0] = 0LL;
  P = &v20;
  DeleteCount = 0;
  v16[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  v24 = a1;
  v23 = 0;
  v9 = L"\\\\?\\";
  if ( a1 != 3 )
    v9 = &word_140AD8570;
  v22 = v9;
  PiDmObjectManagerAcquireSharedLock(ObjectManagerForObjectType);
  v10 = (ULONG_PTR *)RtlEnumerateGenericTableLikeADirectory(
                       (PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104),
                       0LL,
                       0LL,
                       0,
                       RestartKey,
                       &DeleteCount,
                       &P);
  if ( v10 )
  {
    v3 = *v10;
    _InterlockedIncrement((volatile signed __int32 *)(*v10 + 8));
  }
  PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
  while ( v3 )
  {
    PiDmObjectAcquireSharedLock((volatile signed __int64 *)v3);
    v11 = *(_DWORD *)(v3 + 32);
    PiDmObjectReleaseLock(v3);
    if ( (v11 & 1) != 0 )
    {
      if ( a2 == PiDmGetObjectListCallback )
      {
        ObjectListCallback = PiDmGetObjectListCallback(v3, a3, v16);
      }
      else if ( a2 == PiDqEnumQueryObjectsCallback )
      {
        ObjectListCallback = PiDqEnumQueryObjectsCallback(v3, a3, v16);
      }
      else
      {
        ObjectListCallback = guard_dispatch_icall_no_overrides(v3);
      }
      v7 = ObjectListCallback;
    }
    if ( v7 < 0 || v16[0] )
    {
      PiDmObjectRelease((PVOID)v3);
      return (unsigned int)v7;
    }
    P = (PVOID)v3;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)ObjectManagerForObjectType, 1u);
    v14 = (ULONG_PTR *)RtlEnumerateGenericTableLikeADirectory(
                         (PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104),
                         0LL,
                         0LL,
                         1u,
                         RestartKey,
                         &DeleteCount,
                         &P);
    if ( v14 )
    {
      v3 = *v14;
      _InterlockedIncrement((volatile signed __int32 *)(*v14 + 8));
    }
    else
    {
      v3 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PiDmObjectRelease(P);
  }
  return (unsigned int)v7;
}
