/*
 * XREFs of ViTriageSameDriversFromDump @ 0x140C3E6B8
 * Callers:
 *     VfTriageSystem @ 0x140C3E1C0 (VfTriageSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     TriageGetLoaderEntry @ 0x1406A2808 (TriageGetLoaderEntry.c)
 *     TriageGetDriverCount @ 0x140C61278 (TriageGetDriverCount.c)
 */

__int64 __fastcall ViTriageSameDriversFromDump(__int64 a1, __int64 a2)
{
  __int64 **v5; // rsi
  __int64 *v6; // rbx
  unsigned int i; // edi
  __int64 LoaderEntry; // rax
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  if ( (int)TriageGetDriverCount(a2, &v9) < 0 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: failed to get driver count from the dump.\n");
    return 0LL;
  }
  v5 = (__int64 **)(a1 + 16);
  v6 = *v5;
LABEL_5:
  if ( v6 != (__int64 *)v5 )
  {
    for ( i = 0; i < v9; ++i )
    {
      LoaderEntry = TriageGetLoaderEntry(a2, i);
      if ( LoaderEntry && *((_DWORD *)v6 + 30) == *(_DWORD *)(LoaderEntry + 120) )
      {
        v6 = (__int64 *)*v6;
        goto LABEL_5;
      }
    }
    DbgPrintEx(0x5Du, 3u, "Matching checksum for module %wZ not found in triage dump\n", v6 + 11);
    return 0LL;
  }
  return 1LL;
}
