/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x18014A5B4
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014A770 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800EA0C0 (LdrpQueryValueKey.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

wchar_t *__fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, __int64 a2)
{
  wchar_t *result; // rax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  const wchar_t *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r9
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  __int64 v12; // rsi
  _WORD *v13; // r14
  __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h] BYREF

  v18 = 7;
  v17 = 0;
  v15 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = (wchar_t *)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v18, 0LL, &v17);
  if ( (_DWORD)result != -1073741772 )
  {
    v5 = v17;
    if ( v17 )
    {
      if ( (_DWORD)result == -2147483643 )
      {
        v17 += 2;
        v6 = (v5 + 5) & 0xFFFFFFFC;
        if ( v6 )
        {
          result = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v6);
          v7 = result;
          if ( result )
          {
            v8 = (__int64)result;
            if ( !(unsigned int)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v18, result, &v17)
              && (v18 == 1 || v18 == 7) )
            {
              v10 = 0;
              v11 = v17 >> 1;
              v12 = 0LL;
              v13 = (_WORD *)(a1 + 20);
              v8 = (__int64)v7;
              while ( v10 < v11 && v7 && *v7 )
              {
                if ( !wcsicmp(v7, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, v9);
                }
                RtlInitUnicodeString(&DestinationString, v7);
                if ( !(unsigned int)RtlUnicodeStringToInteger(&DestinationString.Length, 0xAu, &v15) )
                {
                  ++v12;
                  *v13++ = v15;
                  if ( v12 >= 4 )
                    return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, v9);
                }
                v14 = -1LL;
                do
                  ++v14;
                while ( v7[v14] );
                v10 += v14 + 1;
                v7 += (unsigned int)(v14 + 1);
              }
            }
            return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, v9);
          }
        }
      }
    }
  }
  return result;
}
