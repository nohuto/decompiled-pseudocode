/*
 * XREFs of WPP_SF_dS @ 0x18003C9BC
 * Callers:
 *     PbmGetSoundLevel @ 0x1800191D0 (PbmGetSoundLevel.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18003918C (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18003BBE0 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     PbmIsPlaying @ 0x18003DB10 (PbmIsPlaying.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_dS(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4, const wchar_t *a5)
{
  const wchar_t *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = a4;
  v5 = a5;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a5 )
    v5 = L"NULL";
  return TraceMessage(a1, 0x2Bu, a3, a2, &v9, 4LL, v5, v7, 0LL);
}
