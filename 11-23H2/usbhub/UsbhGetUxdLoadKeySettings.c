/*
 * XREFs of UsbhGetUxdLoadKeySettings @ 0x1C005A460
 * Callers:
 *     UsbhDeleteUxdSubKeys @ 0x1C0059D10 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdPortKey @ 0x1C005A540 (UsbhGetUxdPortKey.c)
 * Callees:
 *     memmove @ 0x1C0023580 (memmove.c)
 */

__int64 __fastcall UsbhGetUxdLoadKeySettings(__int64 a1, void *a2, const WCHAR *a3, void *a4)
{
  _DWORD *Pool2; // rbx
  NTSTATUS v7; // edi
  unsigned int v8; // eax
  size_t v9; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v13 = HIDWORD(a1);
  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 80LL, 1112885333LL);
  if ( Pool2 )
  {
    v7 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, Pool2, 0x50u, &ResultLength);
    if ( v7 >= 0 )
    {
      v8 = Pool2[2];
      v9 = 68LL;
      if ( v8 <= 0x44 )
        v9 = v8;
      memmove(a4, Pool2 + 3, v9);
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
