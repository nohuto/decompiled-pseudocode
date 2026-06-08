/*
 * XREFs of RtlStringCchCatW @ 0x14000BF10
 * Callers:
 *     ReadEnergyEquation @ 0x140044408 (ReadEnergyEquation.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14000BF7C (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v4; // r9
  NTSTRSAFE_PWSTR v5; // rax
  __int64 v6; // r8
  NTSTATUS result; // eax
  size_t v8; // [rsp+20h] [rbp-18h]

  v4 = 192LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v6 = (192 - v4) & -(__int64)(v4 != 0);
    return RtlStringCopyWorkerW(&pszDest[v6], 192 - v6, (size_t *)v6, pszSrc, v8);
  }
  return result;
}
