/*
 * XREFs of ExpOsProductCacheProviderHelper @ 0x1407B94A8
 * Callers:
 *     ExpCloudbookHardwareIDProvider @ 0x1407B8770 (ExpCloudbookHardwareIDProvider.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407B8870 (ExpCloudbookHardwareLockedProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407B8DD0 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductContentIdCacheProvider @ 0x1407B95F0 (ExpOsProductContentIdCacheProvider.c)
 *     ExpOsProductPfnCacheProvider @ 0x1407B9630 (ExpOsProductPfnCacheProvider.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SpRegOpenRedirectedKey @ 0x1407BB594 (SpRegOpenRedirectedKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpOsProductCacheProviderHelper(
        __int64 a1,
        UNICODE_STRING *a2,
        _DWORD *a3,
        void *a4,
        unsigned int a5,
        _DWORD *a6,
        _BYTE *a7)
{
  NTSTATUS v10; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v12; // rdi
  HANDLE KeyHandle[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v16 = HIDWORD(a1);
  KeyHandle[0] = 0LL;
  ResultLength = 0;
  *a7 = 1;
  v10 = SpRegOpenRedirectedKey(a1, a2, KeyHandle);
  if ( v10 >= 0 )
  {
    v10 = ZwQueryValueKey(KeyHandle[0], a2, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x20534C53u);
      v12 = Pool2;
      if ( Pool2 )
      {
        v10 = ZwQueryValueKey(KeyHandle[0], a2, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
        if ( v10 >= 0 )
        {
          *a6 = v12[2];
          if ( a3 )
            *a3 = v12[1];
          if ( a5 >= v12[2] )
          {
            if ( a4 )
              memmove(a4, v12 + 3, (unsigned int)v12[2]);
          }
          else
          {
            v10 = -1073741789;
          }
        }
        ExFreePoolWithTag(v12, 0);
      }
      else
      {
        v10 = -1073741801;
      }
    }
    ZwClose(KeyHandle[0]);
  }
  return (unsigned int)v10;
}
