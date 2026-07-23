/*
 * XREFs of CmpRecoverEnlistment @ 0x1407D096C
 * Callers:
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x14069D620 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x14069E040 (ZwRecoverEnlistment.c)
 *     CmpTransSearchAddTransFromRm @ 0x140885804 (CmpTransSearchAddTransFromRm.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __fastcall CmpRecoverEnlistment(__int64 a1, __int64 a2, GUID *a3)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  void *v7; // r8
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE EnlistmentHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID EnlistmentKey; // [rsp+B8h] [rbp+38h] BYREF

  EnlistmentKey = 0LL;
  EnlistmentHandle = 0LL;
  GuidString = 0LL;
  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  result = RtlStringFromGUIDEx(a3, &GuidString, 1u);
  if ( result >= 0 )
  {
    v6 = CmpTransSearchAddTransFromRm(a1, 0, (int)a3 + 16, 1, (__int64)&EnlistmentKey);
    if ( v6 >= 0 )
    {
      v7 = *(void **)(a1 + 48);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      v6 = ZwOpenEnlistment(&EnlistmentHandle, 0xF001Fu, v7, a3, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        v6 = ZwRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
        ZwClose(EnlistmentHandle);
      }
    }
    RtlFreeAnsiString(&UnicodeString);
    RtlFreeAnsiString(&GuidString);
    return v6;
  }
  return result;
}
