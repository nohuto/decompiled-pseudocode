/*
 * XREFs of ?SetRemarshalingFlags@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022B8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::SetRemarshalingFlags(
        DirectComposition::CAtlasedRectsMeshMarshaler *this)
{
  _DWORD *v1; // rdx
  int *v2; // r8

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 56) )
    *v1 |= 0x20u;
  if ( *((_DWORD *)this + 15) )
    *v1 |= 0x40u;
  v2 = (int *)((char *)this + 16);
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x80u;
  else
    v2 = (int *)((char *)this + 16);
  *((_QWORD *)this + 11) = 0LL;
  if ( *((_QWORD *)this + 13) )
    *v2 = *v1 | 0x100;
  return (*v2 & 0x1E0) != 0;
}
