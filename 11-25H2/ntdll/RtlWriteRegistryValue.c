/*
 * XREFs of RtlWriteRegistryValue @ 0x180086820
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1801401D0 (RtlSetPortableOperatingSystem.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x180140318 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlWriteRegistryValue(int a1, const wchar_t *a2, const wchar_t *a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax
  unsigned int v10; // edi
  size_t v11; // rax
  unsigned int v12; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 1, (const wchar_t **)&Handle);
  if ( (int)result >= 0 )
  {
    v14[0] = 0LL;
    v10 = a4 & 0xFFFFFF;
    v14[1] = a3;
    if ( a3 )
    {
      v11 = 2 * wcslen(a3);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      LOWORD(v14[0]) = v11;
      WORD1(v14[0]) = v11 + 2;
    }
    v12 = ZwSetValueKey(Handle, v14, 0LL, v10, a5, a6);
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return v12;
  }
  return result;
}
