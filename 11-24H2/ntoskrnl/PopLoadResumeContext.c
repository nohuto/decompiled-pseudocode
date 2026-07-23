/*
 * XREFs of PopLoadResumeContext @ 0x140AB314C
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x1404A4918 (PopOpenKey.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopLoadResumeContext(__int64 a1)
{
  _DWORD *Pool2; // rdi
  int v3; // ebx
  unsigned int v4; // esi
  char *v5; // rax
  char *v6; // r15
  __int64 v7; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+40h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  v3 = PopOpenKey(&KeyHandle, L"Control\\Winresume");
  if ( v3 < 0 )
    return (unsigned int)v3;
  RtlInitUnicodeString(&DestinationString, L"ResumeContext");
  v3 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( v3 == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x78744352u);
    if ( !Pool2 )
      goto LABEL_4;
    v3 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
  }
  if ( v3 < 0 )
    goto LABEL_11;
  v4 = (Pool2[2] + 4095) & 0xFFFFF000;
  v5 = (char *)ExAllocatePool2(0x40uLL, v4, 0x78744352u);
  v6 = v5;
  if ( v5 )
  {
    memmove(v5, Pool2 + 3, (unsigned int)Pool2[2]);
    v7 = (unsigned int)Pool2[2];
    if ( v4 > (unsigned int)v7 )
      memset_0(&v6[v7], 0, v4 - (unsigned int)v7);
    *(_DWORD *)(a1 + 280) = v4 >> 12;
    *(_QWORD *)(a1 + 272) = v6;
    goto LABEL_11;
  }
LABEL_4:
  v3 = -1073741801;
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x78744352u);
  return (unsigned int)v3;
}
