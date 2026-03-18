/*
 * XREFs of CmGetSystemDriverList @ 0x140C62C58
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1406A6F10 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1406A8DD0 (ZwQueryDirectoryObject.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140C45A08 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140C470C0 (CmpFreeDriverList.c)
 *     CmpFindDrivers @ 0x140C4B4CC (CmpFindDrivers.c)
 *     CmpSortDriverList @ 0x140C4C8E0 (CmpSortDriverList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C631D0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140C63370 (CmpCloseSystemDriverHiveContext.c)
 */

ULONG_PTR __fastcall CmGetSystemDriverList(__int64 a1)
{
  char v1; // r13
  UNICODE_STRING *Pool; // rsi
  ULONG_PTR Pool2; // r14
  char v4; // r15
  BOOLEAN v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  int DirectoryObject; // eax
  const UNICODE_STRING *i; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  PVOID *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PVOID *j; // rbx
  __int64 v18; // rax
  wchar_t *Buffer; // rcx
  unsigned int v20; // ebx
  __int64 *v21; // rax
  int k; // edx
  __int64 v23; // rdi
  NTSTATUS v24; // eax
  unsigned int v25; // ecx
  PVOID **v26; // rdi
  PVOID *v27; // rbx
  UNICODE_STRING *v28; // rcx
  UNICODE_STRING *v29; // rbx
  int v31; // [rsp+40h] [rbp-C8h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  __int64 v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  UNICODE_STRING v37; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v43; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v44; // [rsp+100h] [rbp-8h]
  _BYTE v45[48]; // [rsp+108h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+138h] [rbp+30h]
  unsigned int v47; // [rsp+140h] [rbp+38h]
  _BYTE v48[32]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v49; // [rsp+168h] [rbp+60h]
  __int64 v50; // [rsp+178h] [rbp+70h]
  unsigned int v51; // [rsp+180h] [rbp+78h]
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp+80h] BYREF

  v41 = a1;
  v44 = 0LL;
  v43 = 0LL;
  DestinationString = 0LL;
  v38 = 0LL;
  v1 = 0;
  memset(&ObjectAttributes, 0, 44);
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v45, 0, 0x40uLL);
  v47 = -1;
  memset_0(v48, 0, 0x40uLL);
  v51 = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  Pool = 0LL;
  Pool2 = 0LL;
  v37.Buffer = (wchar_t *)&v37;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)&v37.Length = &v37;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v43);
  v34[1] = (__int64)v34;
  v34[0] = (__int64)v34;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v8 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString), (int)(v8 + 0x80000000) < 0)
      || v8 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        Pool = (UNICODE_STRING *)CmpAllocatePool(0x100uLL);
        if ( Pool )
        {
          while ( 1 )
          {
            DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool);
            if ( DirectoryObject == -2147483622 )
              break;
            if ( DirectoryObject < 0 )
              goto LABEL_43;
            for ( i = Pool; i->Length; i += 2 )
            {
              if ( !RtlEqualUnicodeString(i, &CmpSystemFileName, 1u) )
              {
                v11 = (_DWORD *)CmpAllocatePool(0x100uLL);
                v12 = v11;
                if ( !v11 )
                  goto LABEL_43;
                memset_0(v11, 0, 0x40uLL);
                v12[14] = -1;
                if ( (int)CmpOpenSystemDriverHiveContext(i) >= 0 )
                {
                  v13 = p_P;
                  if ( *p_P != &P )
                    goto LABEL_30;
                  *((_QWORD *)v12 + 1) = p_P;
                  *(_QWORD *)v12 = &P;
                  *v13 = v12;
                  p_P = (PVOID *)v12;
                }
                else
                {
                  ExFreePoolWithTag(v12, 0);
                }
              }
            }
          }
          v5 = CmpAcquireShutdownRundown();
          if ( v5 )
          {
            CmpAttachToRegistryProcess(&ApcState);
            v1 = 1;
            CmpLockRegistryExclusive(v15, v14, v16);
            v4 = 1;
            if ( (int)CmpAcquireSystemDriverHiveContext((__int64)v45) >= 0
              && (!v49 || (int)CmpAcquireSystemDriverHiveContext((__int64)v48) >= 0) )
            {
              for ( j = (PVOID *)P; j != &P; j = (PVOID *)*j )
              {
                if ( (int)CmpAcquireSystemDriverHiveContext((__int64)j) >= 0 )
                {
                  v18 = CmpAllocatePool(0x100uLL);
                  if ( !v18 )
                    goto LABEL_43;
                  *(_OWORD *)(v18 + 16) = *((_OWORD *)j + 1);
                  *(_QWORD *)(v18 + 32) = j[6];
                  *(_DWORD *)(v18 + 40) = *((_DWORD *)j + 14);
                  Buffer = v37.Buffer;
                  if ( *(UNICODE_STRING **)v37.Buffer != &v37 )
LABEL_30:
                    __fastfail(3u);
                  *(_QWORD *)(v18 + 8) = v37.Buffer;
                  *(_QWORD *)v18 = &v37;
                  *(_QWORD *)Buffer = v18;
                  v37.Buffer = (wchar_t *)v18;
                }
              }
              v20 = 0;
              if ( CmpFindDrivers(
                     BugCheckParameter3,
                     v47,
                     v50,
                     v51,
                     &v37,
                     (unsigned int)&v38 + 4,
                     (__int64)&v38,
                     v31,
                     v34,
                     v32,
                     v41,
                     v33)
                && CmpSortDriverList(BugCheckParameter3, v47, (__int64 **)v34) )
              {
                CmpUnlockRegistry();
                v21 = (__int64 *)v34[0];
                v4 = 0;
                for ( k = 0; v21 != v34; ++k )
                  v21 = (__int64 *)*v21;
                Pool2 = ExAllocatePool2(0x40uLL, 8LL * (unsigned int)(k + 1), 0x32384D43uLL);
                if ( !Pool2 )
                  KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                v23 = v34[0];
                while ( (__int64 *)v23 != v34 )
                {
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v23 + 32);
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v24 = ZwOpenKey((PHANDLE)(Pool2 + 8LL * v20), 0x2001Fu, &ObjectAttributes);
                  v23 = *(_QWORD *)v23;
                  v25 = v20 + 1;
                  if ( v24 < 0 )
                    v25 = v20;
                  v20 = v25;
                }
                *(_QWORD *)(Pool2 + 8LL * v20) = 0LL;
              }
            }
          }
        }
      }
    }
  }
LABEL_43:
  if ( (__int64 *)v34[0] != v34 )
    CmpFreeDriverList(BugCheckParameter3, v34, v6, v7);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v1 )
    CmpDetachFromRegistryProcess((__int64)&ApcState);
  if ( v5 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v45);
  if ( v49 )
    CmpCloseSystemDriverHiveContext(v48);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  v26 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v27 = *v26;
      CmpCloseSystemDriverHiveContext(v26);
      ExFreePoolWithTag(v26, 0);
      v26 = (PVOID **)v27;
    }
    while ( v27 != &P );
  }
  v28 = *(UNICODE_STRING **)&v37.Length;
  if ( *(UNICODE_STRING **)&v37.Length != &v37 )
  {
    do
    {
      v29 = *(UNICODE_STRING **)&v28->Length;
      ExFreePoolWithTag(v28, 0);
      v28 = v29;
    }
    while ( v29 != &v37 );
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v43);
  return Pool2;
}
