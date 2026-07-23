/*
 * XREFs of PiDrvDbRegisterNode @ 0x140736338
 * Callers:
 *     PiDrvDbInit @ 0x140734FEC (PiDrvDbInit.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407367E0 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbMountNode @ 0x140AB7184 (PiDrvDbMountNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1406A7EB0 (ZwOpenDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A8CB0 (ZwCreateSymbolicLinkObject.c)
 *     PiDrvDbCreateNode @ 0x1407347DC (PiDrvDbCreateNode.c)
 *     PiDrvDbDestroyNode @ 0x140734AD8 (PiDrvDbDestroyNode.c)
 *     PiDrvDbDriverStoreNodesUpdated @ 0x140734B7C (PiDrvDbDriverStoreNodesUpdated.c)
 *     _PnpCtxRegisterMachineNode @ 0x1408180DC (_PnpCtxRegisterMachineNode.c)
 *     DrvDbRegisterDatabase @ 0x140823F40 (DrvDbRegisterDatabase.c)
 *     DrvDbUnregisterDatabase @ 0x1408240E4 (DrvDbUnregisterDatabase.c)
 *     RtlFindUnicodeSubstring @ 0x1408318B0 (RtlFindUnicodeSubstring.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     RtlDuplicateUnicodeString @ 0x1409287C0 (RtlDuplicateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbRegisterNode(PCWSTR Source, int a2, int a3, const WCHAR *a4, const WCHAR *a5)
{
  const WCHAR *v6; // rsi
  wchar_t *Pool2; // r14
  char v8; // r13
  int v11; // eax
  char *v12; // rdi
  int v13; // ebx
  ULONG_PTR v14; // rbx
  int v15; // r9d
  int v16; // esi
  int v17; // ecx
  PWCHAR UnicodeSubstring; // rax
  unsigned __int16 i; // cx
  int v20; // ecx
  int v21; // r9d
  int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-99h]
  UNICODE_STRING LinkTarget; // [rsp+68h] [rbp-61h] BYREF
  int v27; // [rsp+78h] [rbp-51h] BYREF
  int v28; // [rsp+7Ch] [rbp-4Dh] BYREF
  PVOID P; // [rsp+80h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+90h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  HANDLE LinkHandle; // [rsp+C8h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp+7h] BYREF
  UNICODE_STRING SearchString; // [rsp+E0h] [rbp+17h] BYREF

  P = 0LL;
  DirectoryHandle = 0LL;
  v6 = Source;
  LinkHandle = 0LL;
  Handle = 0LL;
  v28 = 0;
  v27 = 0;
  Pool2 = 0LL;
  v8 = 0;
  LinkTarget = 0LL;
  DestinationString = 0LL;
  SearchString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = PiDrvDbCreateNode(v6, a2, a4, a5, &P);
  v12 = (char *)P;
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( (*((_DWORD *)P + 16) & 1) != 0 )
    {
      v16 = a2 & 8;
    }
    else
    {
      v14 = *((unsigned __int16 *)P + 16) + 32LL;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v14, 0x62647050u);
      if ( !Pool2 )
      {
        v13 = -1073741670;
LABEL_33:
        v6 = Source;
        goto LABEL_34;
      }
      v13 = RtlStringCchPrintfW(Pool2, v14 >> 1, L"%wZ\\%ws", v12 + 32, L"DriverDatabase");
      if ( v13 < 0 )
        goto LABEL_33;
      v16 = a2 & 8;
      v17 = (v16 != 0 ? 2 : 0) | 1;
      if ( (a2 & 0x40) == 0 )
        v17 = (a2 & 8) != 0 ? 2 : 0;
      v13 = DrvDbRegisterDatabase(v17, (_DWORD)Source, a3, v15, (__int64)Pool2, v17);
      if ( v13 < 0 )
        goto LABEL_33;
      v8 = 1;
    }
    if ( !v16 )
    {
LABEL_32:
      PiDrvDbDriverStoreNodesUpdated();
      v12 = 0LL;
      goto LABEL_33;
    }
    v13 = PnpSetObjectProperty(
            PiPnpRtlCtx,
            *((_QWORD *)v12 + 3),
            7,
            0LL,
            (__int64)DEVPKEY_DriverDatabase_FilePath,
            18,
            *((_QWORD *)v12 + 7),
            (unsigned int)*((unsigned __int16 *)v12 + 24) + 2,
            0);
    if ( v13 < 0 )
      goto LABEL_33;
    LinkTarget.Buffer = (wchar_t *)*((_QWORD *)v12 + 7);
    RtlInitUnicodeString(&SearchString, L"\\System32\\config\\");
    UnicodeSubstring = RtlFindUnicodeSubstring((PUNICODE_STRING)v12 + 3, &SearchString, 1u);
    if ( UnicodeSubstring )
    {
      i = 2 * ((__int64)(unsigned int)((_DWORD)UnicodeSubstring - *((_DWORD *)v12 + 14)) >> 1);
    }
    else
    {
      LinkTarget.Length = *((_WORD *)v12 + 24);
      for ( i = LinkTarget.Length; i > 2u; LinkTarget.Length = i )
      {
        if ( LinkTarget.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
          break;
        i -= 2;
      }
      if ( i <= 2u || LinkTarget.Buffer[((unsigned __int64)i >> 1) - 1] != 92 )
      {
LABEL_22:
        LinkTarget.MaximumLength = i;
        if ( (a2 & 0x10) != 0 )
        {
          RtlInitUnicodeString(&SearchString, L"\\DriverStore\\Nodes");
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &SearchString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v13 = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
          if ( v13 < 0 )
            goto LABEL_33;
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 16);
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v13 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
          if ( v13 < 0 )
            goto LABEL_33;
        }
        if ( (unsigned int)PnpGetObjectProperty(
                             PiPnpRtlCtx,
                             *((_QWORD *)v12 + 3),
                             7,
                             *((_QWORD *)v12 + 9),
                             0LL,
                             (__int64)DEVPKEY_DriverDatabase_SystemPath,
                             (__int64)&v28,
                             0LL,
                             0,
                             (__int64)&v27,
                             0) == -1073741275 )
        {
          v13 = RtlDuplicateUnicodeString(1u, &LinkTarget, &DestinationString);
          if ( v13 < 0 )
            goto LABEL_33;
          v13 = PnpSetObjectProperty(
                  PiPnpRtlCtx,
                  *((_QWORD *)v12 + 3),
                  7,
                  0LL,
                  (__int64)DEVPKEY_DriverDatabase_SystemPath,
                  18,
                  (__int64)DestinationString.Buffer,
                  (unsigned int)DestinationString.Length + 2,
                  0);
          if ( v13 < 0 )
            goto LABEL_33;
        }
        v13 = PnpCtxRegOpenKey(PiPnpRtlCtx, -2147483646, *((_QWORD *)v12 + 3), 0, 0x2000000, (__int64)&Handle);
        if ( v13 < 0 )
          goto LABEL_33;
        v22 = PnpCtxRegisterMachineNode(v20, *((_QWORD *)v12 + 3), 3, v21, (__int64)Handle, v25);
        v13 = v22;
        if ( v22 == 0x40000000 )
        {
          v13 = 0;
        }
        else if ( v22 < 0 )
        {
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      i -= 2;
    }
    LinkTarget.Length = i;
    goto LABEL_22;
  }
LABEL_34:
  if ( Handle )
    ZwClose(Handle);
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  RtlFreeAnsiString(&DestinationString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v12 )
  {
    if ( v8 )
      DrvDbUnregisterDatabase(v23, v6);
    PiDrvDbDestroyNode(v12);
  }
  return (unsigned int)v13;
}
