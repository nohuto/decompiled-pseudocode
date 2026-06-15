/*
 * XREFs of ?GetDeepLink@CSpatialAudioDtsxHeadphones@@UEBAPEBGPEBG@Z @ 0x180084BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDtsxHeadphonesEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180148494 (-IsDtsxHeadphonesEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

char *__fastcall CSpatialAudioDtsxHeadphones::GetDeepLink(
        CSpatialAudioDtsxHeadphones *this,
        const unsigned __int16 *a2)
{
  AtmosCheck *v3; // rcx
  char *v4; // rbx

  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  v4 = (char *)this + 288;
  if ( v3 && (int)AtmosCheck::IsDtsxHeadphonesEnabled(v3, a2) >= 0 )
    return (char *)this + 800;
  return v4;
}
