/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x140930D80
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x140811550 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14092F22C (DrvDbGetObjectList.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x140813FC4 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     _PnpCtxRegOpenKey @ 0x1408C9B94 (_PnpCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140931608 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140931CBC (_RegRtlCreateTreeTransacted.c)
 *     _PnpCtxRegCreateKey @ 0x140A4E614 (_PnpCtxRegCreateKey.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 *a1, __int64 a2, int a3, HANDLE *a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int DatabaseNode; // ebx
  void *RegistrarSecurityDescriptor; // rsi
  int v11; // eax
  HANDLE *v12; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  int Key; // eax

  v4 = a3;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  DatabaseNode = 0;
  RegistrarSecurityDescriptor = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  v11 = *(_DWORD *)(a2 + 64);
  if ( (v11 & 4) != 0 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 3221226599LL;
  }
  if ( (v11 & 2) != 0 )
  {
    v12 = (HANDLE *)(a2 + 104 + 8 * v4);
    if ( *v12 )
    {
LABEL_4:
      *a4 = *v12;
      goto LABEL_5;
    }
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode >= 0 )
    {
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 == 1 )
        {
          RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor();
          if ( !RegistrarSecurityDescriptor )
            goto LABEL_32;
        }
        Key = PnpCtxRegCreateKey(
                *a1,
                *(_QWORD *)(a2 + 96),
                qword_1400026C0[v4],
                0,
                0x2000000,
                (__int64)RegistrarSecurityDescriptor,
                a2 + 104 + 8 * v4,
                0LL);
      }
      else
      {
        Key = PnpCtxRegOpenKey(*a1, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, (__int64)v12);
      }
      DatabaseNode = Key;
      if ( Key >= 0 )
        goto LABEL_4;
    }
LABEL_5:
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( RegistrarSecurityDescriptor )
      ExFreePoolWithTag(RegistrarSecurityDescriptor, 0);
    goto LABEL_7;
  }
  DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
  if ( DatabaseNode < 0 )
    goto LABEL_5;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 || (RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor()) != 0LL )
    {
      if ( *a1 && (v14 = *(_QWORD *)(*a1 + 224)) != 0 )
        v15 = *(_QWORD *)(v14 + 8);
      else
        v15 = 0LL;
      DatabaseNode = RegRtlCreateTreeTransacted(
                       *(HANDLE *)(a2 + 96),
                       (NTSTRSAFE_PCWSTR)qword_1400026C0[v4],
                       0,
                       0x2000000u,
                       (__int64)RegistrarSecurityDescriptor,
                       0,
                       a4,
                       0LL,
                       v15);
      goto LABEL_5;
    }
LABEL_32:
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 3221225701LL;
  }
  DatabaseNode = PnpCtxRegOpenKey(*a1, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, (__int64)a4);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_7:
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return 3221226349LL;
  else
    return (unsigned int)DatabaseNode;
}
