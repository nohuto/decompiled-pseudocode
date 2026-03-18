/*
 * XREFs of CmpGetVirtualizationID @ 0x140909F58
 * Callers:
 *     CmpGetVirtualStoreRoot @ 0x1407DBA94 (CmpGetVirtualStoreRoot.c)
 *     CmRealKCBToVirtualPath @ 0x14090A7C8 (CmRealKCBToVirtualPath.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlConvertSidToUnicodeString @ 0x140865350 (RtlConvertSidToUnicodeString.c)
 *     SeQueryUserSidToken @ 0x14090A570 (SeQueryUserSidToken.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination, int *a2)
{
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  wchar_t *Pool2; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Sid[80]; // [rsp+30h] [rbp-68h] BYREF

  UnicodeString = 0LL;
  memset_0(Sid, 0, 0x44uLL);
  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 || a2[2] < 2 )
    v4 = *((_QWORD *)a2 + 2);
  SeQueryUserSidToken(v4, Sid, 68LL, 0LL);
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v5 >= 0 )
  {
    Destination->MaximumLength = UnicodeString.Length + 20;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    Destination->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( UnicodeString.Buffer )
    ExFreePool(UnicodeString.Buffer);
  return (unsigned int)v5;
}
