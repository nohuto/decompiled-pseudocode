/*
 * XREFs of NtEnableLastKnownGood @ 0x14081AAE0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwDeleteFile @ 0x14069CCA0 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x14069CCC0 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140729660 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C (_PnpCtxGetCachedContextBaseKey.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS NtEnableLastKnownGood(void)
{
  int CachedContextBaseKey; // ebx
  char v1; // bl
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-59h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-29h] BYREF
  PVOID P; // [rsp+60h] [rbp-19h]
  UNICODE_STRING SourceString; // [rsp+68h] [rbp-11h] BYREF
  UNICODE_STRING v7; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  UNICODE_STRING v9; // [rsp+98h] [rbp+1Fh] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE v12; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v13; // [rsp+F8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) || PsIsCurrentThreadInServerSilo() )
  {
    CachedContextBaseKey = -1073741727;
  }
  else
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 4LL, &v13);
    if ( CachedContextBaseKey >= 0 )
    {
      ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
      *(_DWORD *)&ValueName.Length = 1572886;
      CachedContextBaseKey = IopOpenRegistryKeyEx(&KeyHandle, v13, &ValueName, 983103LL);
      if ( CachedContextBaseKey >= 0 )
      {
        v1 = 0;
        if ( (int)IopGetRegistryValue(KeyHandle) < 0 )
          goto LABEL_19;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          v1 = *((_BYTE *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 )
        {
          *(_DWORD *)&ValueName.Length = 1441812;
          ValueName.Buffer = L"DisableLKG";
          CachedContextBaseKey = ZwDeleteValueKey(KeyHandle, &ValueName);
          if ( CachedContextBaseKey >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
              ZwDeleteKey(Handle);
            RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &v9;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&v12, 0xF003Fu, &ObjectAttributes) >= 0 )
              ZwDeleteKey(v12);
            RtlInitUnicodeString(&SourceString, L"\\SystemRoot\\LastGood");
            IopFileUtilWalkDirectoryTreeBottomUp(&SourceString);
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &SourceString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ZwDeleteFile(&ObjectAttributes);
            RtlInitUnicodeString(&v7, L"\\SystemRoot\\LastGood.Tmp");
            IopFileUtilWalkDirectoryTreeBottomUp(&v7);
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &v7;
            ObjectAttributes.Length = 48;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ObjectAttributes.Attributes = 64;
            ZwDeleteFile(&ObjectAttributes);
            CachedContextBaseKey = 0;
          }
        }
        else
        {
LABEL_19:
          CachedContextBaseKey = -1073741823;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v12 )
    ZwClose(v12);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return CachedContextBaseKey;
}
