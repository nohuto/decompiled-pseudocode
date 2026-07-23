/*
 * XREFs of SepGetTokenElevationType @ 0x140469B94
 * Callers:
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepGetTokenElevationType(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 40LL);
  if ( (v1 & 4) != 0 )
    return 3LL;
  else
    return (unsigned int)((v1 & 2) != 0) + 1;
}
