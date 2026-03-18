/*
 * XREFs of ulCharsetToCodePage @ 0x1401781C0
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1400B7A9C (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1400FBD40 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x140311B7C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(int a1, __int64 a2)
{
  __int64 i; // rax

  if ( a1 == 255 )
    return 1LL;
  for ( i = 0LL; (unsigned int)i < 0x11; i = (unsigned int)(i + 1) )
  {
    if ( charsets[i] == a1 )
      return (unsigned int)codepages[i];
  }
  return *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 20364LL) != 0 ? 0x4E4 : 0;
}
