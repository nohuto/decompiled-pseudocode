/*
 * XREFs of ??$?0$09@StringReference@Internal@Windows@@QEAA@AEAY09$$CBG@Z @ 0x18020AD54
 * Callers:
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180017F90 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[10])
{
  if ( WindowsCreateStringReference(L"DVROptOut", 9u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
