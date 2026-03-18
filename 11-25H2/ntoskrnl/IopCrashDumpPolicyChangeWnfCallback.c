/*
 * XREFs of IopCrashDumpPolicyChangeWnfCallback @ 0x140704A20
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmIsStateSeparationEnabled @ 0x1404996EC (CmIsStateSeparationEnabled.c)
 *     IopDumpIsTracingEnabled @ 0x1404F8514 (IopDumpIsTracingEnabled.c)
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 */

__int64 __fastcall IopCrashDumpPolicyChangeWnfCallback(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  __int64 v3; // r8
  __int64 v4; // r9
  char v6; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v7; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v9; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int *v15; // [rsp+B8h] [rbp-48h]
  __int64 v16; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v17[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // [rsp+F0h] [rbp-10h]
  __int64 v19; // [rsp+F8h] [rbp-8h]
  int *v20; // [rsp+100h] [rbp+0h]
  __int64 v21; // [rsp+108h] [rbp+8h]
  char *v22; // [rsp+110h] [rbp+10h]
  __int64 v23; // [rsp+118h] [rbp+18h]

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v2 = *a2 == WNF_DUMP_ALLOW_CRASHDUMP_POLICY_VALUE_CHANGED;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( v2 )
  {
    IopInitializeDumpPolicySettings(0LL);
    Data = (unsigned __int8)AllowCrashDump;
    if ( CmIsStateSeparationEnabled() )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\CrashControl");
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"AllowCrashDump");
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      }
    }
    v7 = IoConfigureCrashDump(AllowCrashDump != 0, 0LL, v3, v4);
    if ( IopDumpIsTracingEnabled() )
    {
      UserData.Ptr = (ULONGLONG)&Data;
      *(_QWORD *)&UserData.Size = 4LL;
      v15 = &v7;
      v16 = 4LL;
      EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_POLICY_VALUE_CHANGED, 0LL, 2u, &UserData);
    }
    if ( (unsigned int)dword_140E06DC8 > 5 && tlgKeywordOn((__int64)&dword_140E06DC8, 0x400000000000LL) )
    {
      UserData.Ptr = 0x1000000LL;
      p_UserData = &UserData;
      v9 = v7;
      v19 = 8LL;
      v20 = (int *)&v9;
      v6 = AllowCrashDump;
      v22 = &v6;
      v21 = 4LL;
      v23 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06DC8, (unsigned __int8 *)word_140044D7A, 0LL, 0LL, 5u, v17);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return v7;
  }
  else
  {
    if ( IopDumpIsTracingEnabled() )
    {
      UserData.Ptr = (ULONGLONG)"Invalid notification state name";
      *(_QWORD *)&UserData.Size = 31LL;
      EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_POLICY_OPERATION_FAILURE, 0LL, 1u, &UserData);
    }
    if ( (unsigned int)dword_140E06DC8 > 5 && tlgKeywordOn((__int64)&dword_140E06DC8, 0x400000000000LL) )
    {
      UserData.Ptr = 0x1000000LL;
      p_UserData = &UserData;
      v19 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06DC8, (unsigned __int8 *)byte_140044D3D, 0LL, 0LL, 3u, v17);
    }
    return 3221225485LL;
  }
}
