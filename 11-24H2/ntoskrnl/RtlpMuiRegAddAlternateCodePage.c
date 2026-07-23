/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x1406A31C0
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x14082C118 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     LdrpQueryValueKey @ 0x1407840B0 (LdrpQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x14097E410 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  __int64 Pool2; // rax
  const wchar_t *v8; // rbx
  void *v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  __int64 v12; // rsi
  _WORD *v13; // r14
  __int64 v14; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h]

  v18 = 7;
  LODWORD(v17) = 0;
  Value = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  v4 = LdrpQueryValueKey(a2, &DestinationString, (__int64)&v17);
  if ( v4 != -1073741772 )
  {
    v5 = v17;
    if ( (_DWORD)v17 )
    {
      if ( v4 == -2147483643 )
      {
        LODWORD(v17) = v17 + 2;
        v6 = (v5 + 5) & 0xFFFFFFFC;
        if ( v6 )
        {
          Pool2 = ExAllocatePool2(0x100uLL, v6, 0x72746C6Du);
          v8 = (const wchar_t *)Pool2;
          if ( Pool2 )
          {
            v9 = (void *)Pool2;
            if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v17) && (v18 == 1 || v18 == 7) )
            {
              v10 = 0;
              v11 = (unsigned int)v17 >> 1;
              v12 = 0LL;
              v13 = (_WORD *)(a1 + 20);
              v9 = (void *)v8;
              while ( v10 < v11 && v8 && *v8 )
              {
                if ( !wcsicmp(v8, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  break;
                }
                RtlInitUnicodeString(&DestinationString, v8);
                if ( !RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) )
                {
                  ++v12;
                  *v13++ = Value;
                  if ( v12 >= 4 )
                    break;
                }
                v14 = -1LL;
                do
                  ++v14;
                while ( v8[v14] );
                v10 += v14 + 1;
                v8 += (unsigned int)(v14 + 1);
              }
            }
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
    }
  }
}
