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

int __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  wchar_t *Heap; // rax
  int v5; // ecx
  unsigned int v6; // ecx
  const wchar_t *v7; // rbx
  wchar_t *v8; // rdi
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // rsi
  _WORD *v12; // r14
  __int64 v13; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h] BYREF

  v18 = 7;
  LODWORD(v17) = 0;
  Value = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  LODWORD(Heap) = LdrpQueryValueKey(a2, &DestinationString, &v18, 0LL, (ULONG *)&v17);
  if ( (_DWORD)Heap != -1073741772 )
  {
    v5 = v17;
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)Heap == -2147483643 )
      {
        LODWORD(v17) = v17 + 2;
        v6 = (v5 + 5) & 0xFFFFFFFC;
        if ( v6 )
        {
          Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
          v7 = Heap;
          if ( Heap )
          {
            v8 = Heap;
            if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, &v18, Heap, (ULONG *)&v17)
              && (v18 == 1 || v18 == 7) )
            {
              v9 = 0;
              v10 = (unsigned int)v17 >> 1;
              v11 = 0LL;
              v12 = (_WORD *)(a1 + 20);
              v8 = (wchar_t *)v7;
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
            LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
          }
        }
      }
    }
  }
  return (int)Heap;
}
