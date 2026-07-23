/*
 * XREFs of SepIsNgenImage @ 0x140A3A5D4
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x1409FA8F8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

char __fastcall SepIsNgenImage(unsigned __int16 *a1)
{
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v3; // rbx
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // ax
  unsigned int i; // edi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v3 = *((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 97);
  if ( v3 )
  {
    if ( *(_DWORD *)v3 )
    {
      v5 = *a1;
      if ( *a1 >= *(_WORD *)(v3 + 4) && v5 <= *(_WORD *)(v3 + 6) )
      {
        String1.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + 8LL);
        v6 = a1[1] - 8;
        String1.Length = v5 - 8;
        String1.MaximumLength = v6;
        for ( i = 0; i < *(_DWORD *)v3; ++i )
        {
          if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v3 + 16LL * i + 8), 1u) )
            return 1;
        }
      }
    }
  }
  return 0;
}
