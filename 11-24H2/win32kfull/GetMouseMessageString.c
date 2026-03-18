/*
 * XREFs of GetMouseMessageString @ 0x1402E33A8
 * Callers:
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2820 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2A70 (-xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetMouseMessageString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 512;
  if ( !v1 )
    return "WM_MOUSEMOVE";
  v2 = v1 - 1;
  if ( !v2 )
    return "WM_LBUTTONDOWN";
  if ( v2 == 1 )
    return "WM_LBUTTONUP";
  return "UNKNOWN";
}
