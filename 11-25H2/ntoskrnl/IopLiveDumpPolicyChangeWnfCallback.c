/*
 * XREFs of IopLiveDumpPolicyChangeWnfCallback @ 0x140598F10
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059F900 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 *     RtlIsStateSeparationEnabled @ 0x140A28CA0 (RtlIsStateSeparationEnabled.c)
 */

__int64 __fastcall IopLiveDumpPolicyChangeWnfCallback(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  char v4; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v5; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS v7; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  const char *p_Data; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v14; // [rsp+B8h] [rbp-48h]
  NTSTATUS *v15; // [rsp+C0h] [rbp-40h]
  __int64 v16; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v17[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v18; // [rsp+F0h] [rbp-10h]
  __int64 v19; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v20; // [rsp+100h] [rbp+0h]
  __int64 v21; // [rsp+108h] [rbp+8h]
  char *v22; // [rsp+110h] [rbp+10h]
  __int64 v23; // [rsp+118h] [rbp+18h]

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v2 = *a2 == WNF_DUMP_ALLOW_LIVEDUMP_POLICY_VALUE_CHANGED;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  v5 = 0;
  memset(&ObjectAttributes, 0, 44);
  if ( v2 )
  {
    IopInitializeDumpPolicySettings(0LL);
    Data = (unsigned __int8)AllowLiveDump;
    if ( RtlIsStateSeparationEnabled() )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\LiveDump");
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v5 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"AllowLiveDump");
        v5 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      }
    }
    if ( IopLiveDumpIsTracingEnabled() )
    {
      v14 = 4LL;
      p_Data = (const char *)&Data;
      v16 = 4LL;
      v15 = &v5;
      IopLiveDumpTrace(LIVEDUMP_EVENT_LIVEDUMP_POLICY_VALUE_CHANGED, 2LL, &p_Data);
    }
    if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
    {
      v9 = 0x1000000LL;
      v18 = &v9;
      v7 = v5;
      v19 = 8LL;
      v20 = &v7;
      v4 = AllowLiveDump;
      v22 = &v4;
      v21 = 4LL;
      v23 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06E80,
        (unsigned __int8 *)&dword_14004519C,
        0LL,
        0LL,
        5u,
        v17);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return (unsigned int)v5;
  }
  else
  {
    if ( IopLiveDumpIsTracingEnabled() )
    {
      v14 = 31LL;
      p_Data = "Invalid notification state name";
      IopLiveDumpTrace(LIVEDUMP_EVENT_LIVEDUMP_POLICY_OPERATION_FAILURE, 2LL, &p_Data);
    }
    if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
    {
      v9 = 0x1000000LL;
      v18 = &v9;
      v19 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06E80,
        (unsigned __int8 *)&byte_14004515F,
        0LL,
        0LL,
        3u,
        v17);
    }
    return 3221225485LL;
  }
}
