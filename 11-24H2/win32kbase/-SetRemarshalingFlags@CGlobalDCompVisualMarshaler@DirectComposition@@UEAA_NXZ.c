/*
 * XREFs of ?SetRemarshalingFlags@CGlobalDCompVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGlobalDCompVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CGlobalDCompVisualMarshaler *this)
{
  int *v1; // rdx
  int v2; // eax

  v1 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  v2 = *v1 | 0x40;
  *v1 = v2;
  if ( *((_BYTE *)this + 80) )
  {
    v2 |= 0x80u;
    *v1 = v2;
  }
  if ( *((_DWORD *)this + 21) )
    *v1 = v2 | 0x100;
  return 1;
}
