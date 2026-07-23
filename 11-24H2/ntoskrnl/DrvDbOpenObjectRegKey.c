/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x140927630
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14082237C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbOpenDriverFileRegKey @ 0x140822DEC (DrvDbOpenDriverFileRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x140824140 (DrvDbCreateDatabaseNode.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140924CFC (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140924D44 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140924EA0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1409256C0 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140925AF4 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14092603C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1409261E4 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbDispatchDriverPackage @ 0x140926230 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1409275E4 (DrvDbOpenDriverPackageRegKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14082452C (DrvDbGetRegistrarSecurityDescriptor.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140927E0C (DrvDbUnloadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     RtlDuplicateUnicodeString @ 0x1409287C0 (RtlDuplicateUnicodeString.c)
 *     DrvDbFindDatabaseNode @ 0x140928D98 (DrvDbFindDatabaseNode.c)
 *     _PnpCtxRegCreateKey @ 0x140A49664 (_PnpCtxRegCreateKey.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbOpenObjectRegKey(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8,
        __int64 *a9)
{
  __int64 v10; // r14
  bool v11; // zf
  __int64 *v13; // r13
  int DatabaseNode; // ebx
  const WCHAR *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 *v18; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *RegistrarSecurityDescriptor; // r15
  int v21; // eax
  __int64 v22; // r12
  HANDLE *v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  HANDLE v27; // r15
  struct _KTHREAD *v28; // rax
  int v29; // eax
  HANDLE v30; // rsi
  struct _KTHREAD *v31; // rax
  __int64 v32; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  wchar_t *v36; // r15
  wchar_t *v37; // rax
  wchar_t *Buffer; // rdi
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  int Key; // eax
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  __int64 v46; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING StringIn; // [rsp+68h] [rbp-21h] BYREF
  UNICODE_STRING StringOut; // [rsp+78h] [rbp-11h] BYREF

  v10 = 0LL;
  v11 = *(_WORD *)a4 == 64;
  v13 = a1;
  Handle = 0LL;
  v46 = 0LL;
  DatabaseNode = 0;
  *(_DWORD *)(&StringIn.MaximumLength + 1) = 0;
  StringOut = 0LL;
  if ( !v11
    || (v36 = (wchar_t *)(a4 + 2), (v37 = wcschr((const wchar_t *)(a4 + 2), 0x3Au)) == 0LL)
    || (StringIn.Buffer = v36,
        StringIn.Length = 2 * (v37 - v36),
        StringIn.MaximumLength = StringIn.Length,
        v15 = v37 + 1,
        v37 == (wchar_t *)-2LL) )
  {
    v15 = (const WCHAR *)a4;
    StringIn.Buffer = 0LL;
    *(_DWORD *)&StringIn.Length = 0;
  }
  if ( !v15 )
  {
    DatabaseNode = -1073741811;
    goto LABEL_35;
  }
  if ( v15 == (const WCHAR *)a4 )
  {
    v16 = v13[6];
    v46 = v16;
  }
  else
  {
    DatabaseNode = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut);
    if ( DatabaseNode < 0 )
      goto LABEL_35;
    Buffer = StringOut.Buffer;
    DatabaseNode = DrvDbFindDatabaseNode(v13, StringOut.Buffer, &v46);
    if ( Buffer )
      ExFreePool(Buffer);
    if ( DatabaseNode == -1073741772 )
    {
      DatabaseNode = -1073741766;
      goto LABEL_35;
    }
    if ( DatabaseNode < 0 )
      goto LABEL_35;
    v16 = v46;
  }
  if ( !v16 )
  {
    v46 = a2;
    v16 = a2;
    if ( !a2 )
    {
      v17 = v13[2];
      v18 = v13 + 2;
      *(_QWORD *)&StringIn.Length = v13 + 2;
      if ( (__int64 *)v17 == v13 + 2 )
      {
LABEL_32:
        if ( DatabaseNode < 0 )
          goto LABEL_35;
        goto LABEL_33;
      }
      while ( 1 )
      {
        Handle = 0LL;
        CurrentThread = KeGetCurrentThread();
        DatabaseNode = 0;
        v46 = v17;
        RegistrarSecurityDescriptor = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 152), 1u);
        v21 = *(_DWORD *)(v17 + 64);
        if ( (v21 & 4) != 0 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v17 + 152));
          KeLeaveCriticalRegionThread();
          goto LABEL_52;
        }
        if ( (v21 & 2) != 0 )
        {
          v22 = a3 + 13LL;
          v11 = *(_QWORD *)(v17 + 8 * v22) == 0LL;
          v23 = (HANDLE *)(v17 + 8 * v22);
          if ( !v11 )
          {
            v13 = a1;
            goto LABEL_13;
          }
          DatabaseNode = DrvDbLoadDatabaseNode(a1, v17);
          if ( DatabaseNode >= 0 )
          {
            if ( a3 )
            {
              if ( a3 == 1 )
              {
                RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor();
                if ( !RegistrarSecurityDescriptor )
                {
                  ExReleaseResourceLite(*(PERESOURCE *)(v17 + 152));
                  KeLeaveCriticalRegionThread();
                  v13 = a1;
                  DatabaseNode = -1073741595;
                  goto LABEL_35;
                }
              }
              v13 = a1;
              Key = PnpCtxRegCreateKey(
                      *a1,
                      *(_QWORD *)(v17 + 96),
                      qword_140002240[a3],
                      0,
                      0x2000000,
                      (__int64)RegistrarSecurityDescriptor,
                      (__int64)v23,
                      0LL);
            }
            else
            {
              v13 = a1;
              Key = PnpCtxRegOpenKey(*a1, *(_QWORD *)(v17 + 96), 0LL, 0, 0x2000000u, (__int64)v23);
            }
            DatabaseNode = Key;
            if ( Key >= 0 )
LABEL_13:
              Handle = *v23;
            v18 = v13 + 2;
            goto LABEL_15;
          }
          v13 = a1;
          v18 = *(__int64 **)&StringIn.Length;
        }
        else
        {
          DatabaseNode = DrvDbLoadDatabaseNode(v13, v17);
          if ( DatabaseNode >= 0 )
          {
            if ( !a3 )
            {
              if ( *v13 && (v42 = *(_QWORD *)(*v13 + 224)) != 0 )
                v43 = *(_QWORD *)(v42 + 8);
              else
                v43 = 0LL;
              DatabaseNode = RegRtlOpenKeyTransacted(*(_QWORD *)(v17 + 96), 0LL, 0, 0x2000000u, &Handle, v43);
              ExReleaseResourceLite(*(PERESOURCE *)(v17 + 152));
              KeLeaveCriticalRegionThread();
              goto LABEL_17;
            }
            if ( a3 == 1 )
            {
              RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor();
              if ( !RegistrarSecurityDescriptor )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v17 + 152));
                KeLeaveCriticalRegionThread();
                DatabaseNode = -1073741595;
                goto LABEL_35;
              }
            }
            if ( *v13 && (v34 = *(_QWORD *)(*v13 + 224)) != 0 )
              v35 = *(_QWORD *)(v34 + 8);
            else
              v35 = 0LL;
            DatabaseNode = RegRtlCreateTreeTransacted(
                             *(HANDLE *)(v17 + 96),
                             (NTSTRSAFE_PCWSTR)qword_140002240[a3],
                             0,
                             0x2000000u,
                             (__int64)RegistrarSecurityDescriptor,
                             0,
                             &Handle,
                             0LL,
                             v35);
          }
        }
LABEL_15:
        ExReleaseResourceLite(*(PERESOURCE *)(v17 + 152));
        KeLeaveCriticalRegionThread();
        if ( RegistrarSecurityDescriptor )
          ExFreePoolWithTag(RegistrarSecurityDescriptor, 0);
LABEL_17:
        if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
        {
          DatabaseNode = -1073740947;
          goto LABEL_35;
        }
        if ( DatabaseNode != -1073740697 )
        {
          if ( DatabaseNode < 0 )
            goto LABEL_35;
          if ( *v13 && (v24 = *(_QWORD *)(*v13 + 224)) != 0 )
            v25 = *(_QWORD *)(v24 + 8);
          else
            v25 = 0LL;
          v26 = RegRtlOpenKeyTransacted((__int64)Handle, v15, 0, a5, a7, v25);
          v27 = Handle;
          DatabaseNode = v26;
          v28 = KeGetCurrentThread();
          --v28->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 152), 1u);
          if ( (*(_DWORD *)(v17 + 64) & 2) == 0 && ZwClose(v27) >= 0 )
            DrvDbUnloadDatabaseNode(v13, v17);
          ExReleaseResourceLite(*(PERESOURCE *)(v17 + 152));
          KeLeaveCriticalRegionThread();
          Handle = 0LL;
          if ( DatabaseNode != -1073741772 )
          {
            v16 = v46;
            goto LABEL_32;
          }
          goto LABEL_26;
        }
LABEL_52:
        DatabaseNode = -1073741772;
LABEL_26:
        v17 = *(_QWORD *)v17;
        if ( (__int64 *)v17 == v18 )
        {
          if ( !a6 )
            goto LABEL_35;
          v16 = v13[5];
          v46 = v16;
          v29 = DrvDbAcquireDatabaseNodeBaseKey(v13, v16, a3, &Handle);
          DatabaseNode = v29;
          if ( v29 < 0 )
          {
            if ( v29 == -1073740697 )
              DatabaseNode = -1073741662;
            goto LABEL_35;
          }
          DatabaseNode = PnpCtxRegCreateTree(*v13, Handle, v15, 0LL, a5, 0LL, a7, 0LL);
          if ( DatabaseNode < 0 )
            goto LABEL_35;
LABEL_33:
          if ( a9 )
            *a9 = v16;
          goto LABEL_35;
        }
      }
    }
  }
  v39 = DrvDbAcquireDatabaseNodeBaseKey(v13, v16, a3, &Handle);
  DatabaseNode = v39;
  if ( v39 < 0 )
  {
    if ( v39 == -1073740697 )
      DatabaseNode = -1073741772;
  }
  else
  {
    v40 = *v13;
    if ( a6 )
    {
      DatabaseNode = PnpCtxRegCreateTree(v40, Handle, v15, 0LL, a5, 0LL, a7, a8);
      if ( DatabaseNode < 0 )
        goto LABEL_35;
      goto LABEL_33;
    }
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 224);
      if ( v41 )
        v10 = *(_QWORD *)(v41 + 8);
    }
    DatabaseNode = RegRtlOpenKeyTransacted((__int64)Handle, v15, 0, a5, a7, v10);
    if ( DatabaseNode >= 0 )
    {
      if ( a8 )
        *a8 = 2;
      goto LABEL_33;
    }
  }
LABEL_35:
  v30 = Handle;
  if ( Handle )
  {
    v31 = KeGetCurrentThread();
    v32 = v46;
    --v31->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v32 + 152), 1u);
    if ( (*(_DWORD *)(v32 + 64) & 2) == 0 && ZwClose(v30) >= 0 )
      DrvDbUnloadDatabaseNode(v13, v32);
    ExReleaseResourceLite(*(PERESOURCE *)(v32 + 152));
    KeLeaveCriticalRegionThread();
  }
  return (unsigned int)DatabaseNode;
}
