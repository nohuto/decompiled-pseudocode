/*
 * XREFs of ?SetRemarshalingFlags@CDelegatedInkCanvasMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CDelegatedInkCanvasMarshaler::SetRemarshalingFlags(
        DirectComposition::CDelegatedInkCanvasMarshaler *this)
{
  int v1; // eax
  bool v2; // zf

  v1 = *((_DWORD *)this + 4) | 0x20;
  v2 = *((_QWORD *)this + 9) == 0LL;
  *((_DWORD *)this + 4) = v1;
  if ( !v2 )
    *((_DWORD *)this + 4) = v1 | 0x40;
  return 1;
}
