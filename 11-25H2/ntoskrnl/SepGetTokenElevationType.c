/*
 * XREFs of SepGetTokenElevationType @ 0x140470F34
 * Callers:
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepGetTokenElevationType(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 32LL);
  if ( (v1 & 4) != 0 )
    return 3LL;
  else
    return (unsigned int)((v1 & 2) != 0) + 1;
}
