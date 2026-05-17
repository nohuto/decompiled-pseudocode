/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x180149004
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1801491C0 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180032D60 (RtlUnicodeStringToInteger.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800E8D50 (LdrpQueryValueKey.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 */

wchar_t *__fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, __int64 a2)
{
  wchar_t *result; // rax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  const wchar_t *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // rsi
  _WORD *v12; // r14
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+50h] BYREF
  int v17; // [rsp+A8h] [rbp+58h] BYREF

  v17 = 7;
  v16 = 0;
  v14 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = (wchar_t *)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v17, 0LL, &v16);
  if ( (_DWORD)result != -1073741772 )
  {
    v5 = v16;
    if ( v16 )
    {
      if ( (_DWORD)result == -2147483643 )
      {
        v16 += 2;
        v6 = (v5 + 5) & 0xFFFFFFFC;
        if ( v6 )
        {
          result = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v6);
          v7 = result;
          if ( result )
          {
            v8 = (unsigned __int64)result;
            if ( !(unsigned int)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v17, result, &v16)
              && (v17 == 1 || v17 == 7) )
            {
              v9 = 0;
              v10 = v16 >> 1;
              v11 = 0LL;
              v12 = (_WORD *)(a1 + 20);
              v8 = (unsigned __int64)v7;
              while ( v9 < v10 && v7 && *v7 )
              {
                if ( !wcsicmp(v7, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
                }
                RtlInitUnicodeString(&DestinationString, v7);
                if ( !(unsigned int)RtlUnicodeStringToInteger(&DestinationString.Length, 0xAu, &v14) )
                {
                  ++v11;
                  *v12++ = v14;
                  if ( v11 >= 4 )
                    return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
                }
                v13 = -1LL;
                do
                  ++v13;
                while ( v7[v13] );
                v9 += v13 + 1;
                v7 += (unsigned int)(v13 + 1);
              }
            }
            return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
          }
        }
      }
    }
  }
  return result;
}
