/*
 * XREFs of MiLocateExclusiveSecure @ 0x14047CE4C
 * Callers:
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocateExclusiveSecure(__int64 a1)
{
  unsigned __int64 i; // rdx

  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)i )
  {
    if ( !i )
      return 0LL;
    if ( *(_DWORD *)(i + 80) == 2 )
      break;
  }
  return i & -(__int64)((*(_DWORD *)(i + 8) & 0x20) != 0);
}
