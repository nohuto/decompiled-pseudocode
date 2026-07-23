/*
 * XREFs of _RegRtlQueryValue @ 0x1409C7A00
 * Callers:
 *     _SysCtxOpenControlSet @ 0x140820920 (_SysCtxOpenControlSet.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v6; // rdi
  NTSTATUS result; // eax
  unsigned int v10; // eax
  ULONG Length; // ebp
  __int64 Pool2; // rax
  char *v13; // rbx
  NTSTATUS v14; // eax
  int v15; // ebp
  unsigned int v16; // r8d
  unsigned int v17; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char v20; // [rsp+48h] [rbp-D0h] BYREF

  v6 = 0LL;
  DestinationString = 0LL;
  ResultLength = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      v10 = *a5 + 12;
      if ( v10 < 0xC )
        return -1073741675;
      Length = *a5 + 12;
      Pool2 = ExAllocatePool2(0x100uLL, v10, 0x4C474552u);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return -1073741801;
      v13 = (char *)Pool2;
    }
    else
    {
      v13 = &v20;
      Length = 140;
    }
    v14 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v13, Length, &ResultLength);
    v15 = v14;
    if ( !v14 || v14 == -2147483643 )
    {
      v16 = *a5;
      v17 = *((_DWORD *)v13 + 2);
      *a5 = v17;
      if ( v16 < v17 )
        v15 = -1073741789;
      else
        memmove(a4, v13 + 12, *((unsigned int *)v13 + 2));
      if ( a3 )
        *a3 = *((_DWORD *)v13 + 1);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return v15;
  }
  return result;
}
