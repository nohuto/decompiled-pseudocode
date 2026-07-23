/*
 * XREFs of PopEmModuleAddressMatchCallback @ 0x1405D6120
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PopEmModuleAddressMatchCallback(__int64 *a1, int a2, PCSZ *a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  const UNICODE_STRING *v8; // rdi
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v6 = 1;
  DestinationString = 0LL;
  String1 = 0LL;
  if ( a2 == 1 )
  {
    if ( a1 )
    {
      v7 = *a1;
      if ( *a1 )
      {
        if ( !a6 && a4 == 1 )
        {
          if ( a3 )
          {
            if ( *a3 )
            {
              if ( *(_DWORD *)(v7 + 8) )
              {
                v8 = *(const UNICODE_STRING **)v7;
                if ( *(_QWORD *)v7 )
                {
                  RtlInitAnsiString(&DestinationString, *a3);
                  if ( RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u) >= 0 )
                    v6 = RtlEqualUnicodeString(&String1, v8, 1u) != 0 ? 2 : 0;
                }
              }
            }
          }
        }
      }
    }
  }
  RtlFreeAnsiString(&String1);
  return v6;
}
