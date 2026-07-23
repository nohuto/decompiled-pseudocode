/*
 * XREFs of CmGetSystemDriverList @ 0x140C64DD4
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1406A7EB0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1406A9D70 (ZwQueryDirectoryObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140C47B58 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140C49210 (CmpFreeDriverList.c)
 *     CmpFindDrivers @ 0x140C4D668 (CmpFindDrivers.c)
 *     CmpSortDriverList @ 0x140C4EA7C (CmpSortDriverList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C6534C (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140C654EC (CmpCloseSystemDriverHiveContext.c)
 */

__int64 __fastcall CmGetSystemDriverList(__int64 a1)
{
  char v1; // r13
  UNICODE_STRING *Pool; // rsi
  __int64 Pool2; // r14
  char v4; // r15
  BOOLEAN v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  BOOLEAN RestartScan; // al
  NTSTATUS v11; // eax
  const UNICODE_STRING *i; // rdi
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  PVOID *v15; // rax
  PVOID *j; // rbx
  __int64 v17; // rax
  wchar_t *Buffer; // rcx
  unsigned int v19; // ebx
  __int64 *v20; // rax
  int k; // edx
  __int64 v22; // rdi
  NTSTATUS v23; // eax
  unsigned int v24; // ecx
  PVOID **v25; // rdi
  PVOID *v26; // rbx
  UNICODE_STRING *v27; // rcx
  UNICODE_STRING *v28; // rbx
  unsigned int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  int v32; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+50h] [rbp-B8h]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  __int64 v35[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  UNICODE_STRING v38; // [rsp+88h] [rbp-80h] BYREF
  ULONG v39; // [rsp+98h] [rbp-70h] BYREF
  ULONG v40; // [rsp+9Ch] [rbp-6Ch] BYREF
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v46; // [rsp+100h] [rbp-8h]
  _BYTE v47[48]; // [rsp+108h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+138h] [rbp+30h]
  unsigned int v49; // [rsp+140h] [rbp+38h]
  _BYTE v50[32]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+178h] [rbp+70h]
  unsigned int v53; // [rsp+180h] [rbp+78h]
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp+80h] BYREF

  v43 = a1;
  v46 = 0LL;
  v45 = 0LL;
  v40 = 0;
  DestinationString = 0LL;
  v39 = 0;
  v1 = 0;
  memset(&ObjectAttributes, 0, 44);
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v47, 0, 0x40uLL);
  v49 = -1;
  memset_0(v50, 0, 0x40uLL);
  v53 = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  Pool = 0LL;
  Pool2 = 0LL;
  v38.Buffer = (wchar_t *)&v38;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)&v38.Length = &v38;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v45);
  v35[1] = (__int64)v35;
  v35[0] = (__int64)v35;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v9 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString), v6 = 0x80000000LL, (int)(v9 + 0x80000000) < 0)
      || v9 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        Pool = (UNICODE_STRING *)CmpAllocatePool(0x100uLL, 0x400uLL, 0x20204D43u);
        if ( Pool )
        {
          for ( RestartScan = 1; ; RestartScan = 0 )
          {
            v11 = ZwQueryDirectoryObject(DirectoryHandle, Pool, 0x400u, 1u, RestartScan, &v40, &v39);
            if ( v11 == -2147483622 )
              break;
            if ( v11 < 0 )
              goto LABEL_44;
            for ( i = Pool; i->Length; i += 2 )
            {
              if ( !RtlEqualUnicodeString(i, &CmpSystemFileName, 1u) )
              {
                v13 = (_DWORD *)CmpAllocatePool(0x100uLL, 0x40uLL, 0x20204D43u);
                v14 = v13;
                if ( !v13 )
                  goto LABEL_44;
                memset_0(v13, 0, 0x40uLL);
                v14[14] = -1;
                if ( (int)CmpOpenSystemDriverHiveContext(i) >= 0 )
                {
                  v15 = p_P;
                  if ( *p_P != &P )
                    goto LABEL_31;
                  *((_QWORD *)v14 + 1) = p_P;
                  *(_QWORD *)v14 = &P;
                  *v15 = v14;
                  p_P = (PVOID *)v14;
                }
                else
                {
                  ExFreePoolWithTag(v14, 0);
                }
              }
            }
          }
          v5 = CmpAcquireShutdownRundown();
          if ( v5 )
          {
            CmpAttachToRegistryProcess(&ApcState);
            v1 = 1;
            CmpLockRegistryExclusive();
            v4 = 1;
            if ( (int)CmpAcquireSystemDriverHiveContext((__int64)v47) >= 0
              && (!v51 || (int)CmpAcquireSystemDriverHiveContext((__int64)v50) >= 0) )
            {
              for ( j = (PVOID *)P; j != &P; j = (PVOID *)*j )
              {
                if ( (int)CmpAcquireSystemDriverHiveContext((__int64)j) >= 0 )
                {
                  v17 = CmpAllocatePool(0x100uLL, 0x30uLL, 0x20204D43u);
                  if ( !v17 )
                    goto LABEL_44;
                  *(_OWORD *)(v17 + 16) = *((_OWORD *)j + 1);
                  *(_QWORD *)(v17 + 32) = j[6];
                  *(_DWORD *)(v17 + 40) = *((_DWORD *)j + 14);
                  Buffer = v38.Buffer;
                  if ( *(UNICODE_STRING **)v38.Buffer != &v38 )
LABEL_31:
                    __fastfail(3u);
                  *(_QWORD *)(v17 + 8) = v38.Buffer;
                  *(_QWORD *)v17 = &v38;
                  *(_QWORD *)Buffer = v17;
                  v38.Buffer = (wchar_t *)v17;
                }
              }
              v19 = 0;
              if ( CmpFindDrivers(
                     BugCheckParameter3,
                     v49,
                     v52,
                     v53,
                     &v38,
                     Context,
                     (__int64)ReturnLength,
                     v32,
                     v35,
                     v33,
                     v43,
                     v34)
                && CmpSortDriverList(BugCheckParameter3, v49, (__int64 **)v35) )
              {
                CmpUnlockRegistry();
                v20 = (__int64 *)v35[0];
                v4 = 0;
                for ( k = 0; v20 != v35; ++k )
                  v20 = (__int64 *)*v20;
                Pool2 = ExAllocatePool2(0x40uLL, 8LL * (unsigned int)(k + 1), 0x32384D43uLL);
                if ( !Pool2 )
                  KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                v22 = v35[0];
                while ( (__int64 *)v22 != v35 )
                {
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v22 + 32);
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v23 = ZwOpenKey((PHANDLE)(Pool2 + 8LL * v19), 0x2001Fu, &ObjectAttributes);
                  v22 = *(_QWORD *)v22;
                  v24 = v19 + 1;
                  if ( v23 < 0 )
                    v24 = v19;
                  v19 = v24;
                }
                *(_QWORD *)(Pool2 + 8LL * v19) = 0LL;
              }
            }
          }
        }
      }
    }
  }
LABEL_44:
  if ( (__int64 *)v35[0] != v35 )
    CmpFreeDriverList(BugCheckParameter3, v35);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v1 )
    CmpDetachFromRegistryProcess((__int64)&ApcState, v6, v7, v8);
  if ( v5 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v47);
  if ( v51 )
    CmpCloseSystemDriverHiveContext(v50);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  v25 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v26 = *v25;
      CmpCloseSystemDriverHiveContext(v25);
      ExFreePoolWithTag(v25, 0);
      v25 = (PVOID **)v26;
    }
    while ( v26 != &P );
  }
  v27 = *(UNICODE_STRING **)&v38.Length;
  if ( *(UNICODE_STRING **)&v38.Length != &v38 )
  {
    do
    {
      v28 = *(UNICODE_STRING **)&v27->Length;
      ExFreePoolWithTag(v27, 0);
      v27 = v28;
    }
    while ( v28 != &v38 );
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v45);
  return Pool2;
}
