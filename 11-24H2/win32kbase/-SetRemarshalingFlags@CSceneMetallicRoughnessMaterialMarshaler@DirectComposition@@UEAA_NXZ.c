/*
 * XREFs of ?SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C330
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C430 (-SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this)
{
  char v1; // di
  int *v2; // rbx
  float v3; // xmm0_4
  int v4; // eax
  int *v5; // rdx

  v1 = 0;
  v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 15) )
    *v2 |= 0x4000u;
  v3 = *((float *)this + 36);
  v4 = *v2 | 0x8000;
  *v2 = v4;
  if ( v3 != 1.0 )
  {
    v4 |= 0x10000u;
    *v2 = v4;
  }
  v5 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 19) )
  {
    v4 |= 0x20000u;
    v5 = (int *)((char *)this + 16);
    *v2 = v4;
  }
  if ( *((float *)this + 40) != 1.0 )
  {
    *v2 = v4 | 0x40000;
    v2 = v5;
  }
  if ( DirectComposition::CScenePbrMaterialMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x7C000) != 0 )
    return 1;
  return v1;
}
