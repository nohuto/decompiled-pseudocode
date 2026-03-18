/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x140696F90
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x14081BBA8 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     LdrpQueryValueKey @ 0x140774ED0 (LdrpQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x140953030 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  int v4; // eax
  int v5; // ecx
  __int64 Pool2; // rax
  const wchar_t *v7; // rbx
  void *v8; // rdi
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // rsi
  _WORD *v12; // r14
  __int64 v13; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+50h] BYREF
  int v17; // [rsp+A8h] [rbp+58h]

  v17 = 7;
  LODWORD(v16) = 0;
  Value = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  v4 = LdrpQueryValueKey(a2, &DestinationString, (__int64)&v16);
  if ( v4 != -1073741772 )
  {
    v5 = v16;
    if ( (_DWORD)v16 )
    {
      if ( v4 == -2147483643 )
      {
        LODWORD(v16) = v16 + 2;
        if ( ((v5 + 5) & 0xFFFFFFFC) != 0 )
        {
          Pool2 = ExAllocatePool2(0x100uLL);
          v7 = (const wchar_t *)Pool2;
          if ( Pool2 )
          {
            v8 = (void *)Pool2;
            if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v16) && (v17 == 1 || v17 == 7) )
            {
              v9 = 0;
              v10 = (unsigned int)v16 >> 1;
              v11 = 0LL;
              v12 = (_WORD *)(a1 + 20);
              v8 = (void *)v7;
              while ( v9 < v10 && v7 && *v7 )
              {
                if ( !wcsicmp(v7, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  break;
                }
                RtlInitUnicodeString(&DestinationString, v7);
                if ( !RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) )
                {
                  ++v11;
                  *v12++ = Value;
                  if ( v11 >= 4 )
                    break;
                }
                v13 = -1LL;
                do
                  ++v13;
                while ( v7[v13] );
                v9 += v13 + 1;
                v7 += (unsigned int)(v13 + 1);
              }
            }
            ExFreePoolWithTag(v8, 0);
          }
        }
      }
    }
  }
}
