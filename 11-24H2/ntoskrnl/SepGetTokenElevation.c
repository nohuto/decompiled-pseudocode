/*
 * XREFs of SepGetTokenElevation @ 0x14043FFE8
 * Callers:
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     RtlIsElevatedRid @ 0x1409A9FC0 (RtlIsElevatedRid.c)
 */

__int64 __fastcall SepGetTokenElevation(__int64 a1)
{
  unsigned int v2; // esi
  __int64 result; // rax
  unsigned int i; // ebx

  v2 = *(_DWORD *)(a1 + 124);
  LOBYTE(result) = (*(_QWORD *)(a1 + 64) & 0x1120160684LL) != 0;
  for ( i = 0; i < v2; LOBYTE(result) = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*(_QWORD *)(a1 + 152) + 16LL * i++)) )
  {
    if ( (_BYTE)result )
      break;
  }
  return (unsigned __int8)result;
}
