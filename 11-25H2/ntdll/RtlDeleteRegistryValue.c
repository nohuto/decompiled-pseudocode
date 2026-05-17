/*
 * XREFs of RtlDeleteRegistryValue @ 0x1800869D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwDeleteValueKey @ 0x180164DF0 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlDeleteRegistryValue(int a1, const wchar_t *a2, const wchar_t *a3)
{
  __int64 result; // rax
  size_t v6; // rax
  unsigned int v7; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 1, (const wchar_t **)&Handle);
  if ( (int)result >= 0 )
  {
    v8[0] = 0LL;
    v8[1] = a3;
    if ( a3 )
    {
      v6 = 2 * wcslen(a3);
      if ( v6 >= 0xFFFE )
        LOWORD(v6) = -4;
      LOWORD(v8[0]) = v6;
      WORD1(v8[0]) = v6 + 2;
    }
    v7 = ZwDeleteValueKey(Handle, v8);
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return v7;
  }
  return result;
}
