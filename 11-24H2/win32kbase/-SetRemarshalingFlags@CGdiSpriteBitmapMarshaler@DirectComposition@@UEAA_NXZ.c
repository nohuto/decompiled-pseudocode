/*
 * XREFs of ?SetRemarshalingFlags@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::SetRemarshalingFlags(
        DirectComposition::CGdiSpriteBitmapMarshaler *this)
{
  int v1; // eax
  int v2; // edx

  *((_QWORD *)this + 7) = 0LL;
  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 9) )
    v1 |= 0x20u;
  v2 = v1;
  if ( *((_DWORD *)this + 20) )
  {
    v2 = v1 | 0x40;
    v1 |= 0x40u;
  }
  if ( *((_BYTE *)this + 84) )
  {
    v2 |= 0x80u;
    v1 = v2;
  }
  if ( *((_QWORD *)this + 11) )
    v1 = v2 | 0x100;
  *((_DWORD *)this + 4) = v1 | 0x200;
  return 1;
}
