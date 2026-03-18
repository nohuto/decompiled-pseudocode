/*
 * XREFs of ?SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C430
 * Callers:
 *     ?SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C330 (-SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetRemarshalingFlags(
        DirectComposition::CScenePbrMaterialMarshaler *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax

  if ( *((float *)this + 14) == 0.5 )
    v1 = *((_DWORD *)this + 4);
  else
    v1 = *((_DWORD *)this + 4) | 0x20;
  v2 = v1;
  if ( *((_DWORD *)this + 15) )
  {
    v2 = v1 | 0x40;
    v1 |= 0x40u;
  }
  if ( *((_QWORD *)this + 8) )
    v1 = v2 | 0x80;
  v3 = v1 | 0x100;
  *((_DWORD *)this + 4) = v3;
  if ( *((_BYTE *)this + 84) )
  {
    v3 |= 0x200u;
    *((_DWORD *)this + 4) = v3;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v3 |= 0x400u;
    *((_DWORD *)this + 4) = v3;
  }
  if ( *((float *)this + 24) != 1.0 )
  {
    v3 |= 0x800u;
    *((_DWORD *)this + 4) = v3;
  }
  if ( *((_QWORD *)this + 13) )
  {
    v3 |= 0x1000u;
    *((_DWORD *)this + 4) = v3;
  }
  if ( *((float *)this + 28) != 1.0 )
    *((_DWORD *)this + 4) = v3 | 0x2000;
  return 1;
}
