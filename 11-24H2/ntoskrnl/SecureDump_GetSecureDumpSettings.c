/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x1404F4998
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     IoProvisionCrashDumpKey @ 0x14058ED10 (IoProvisionCrashDumpKey.c)
 *     IopInitializeCrashDump @ 0x14070EAE0 (IopInitializeCrashDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SecureDump_GetSecureDumpSettings(__int64 a1)
{
  int v2; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( SecureDmpEncryptionContext == 2 )
  {
    *(_BYTE *)a1 = byte_140E661D4;
    *(_DWORD *)(a1 + 4) = pbInput;
    *(_BYTE *)(a1 + 1) = dword_140E66218 == 1;
    v2 = dword_140E66220;
  }
  else
  {
    v2 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v2;
  return 0LL;
}
