/*
 * XREFs of ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1403C04E0
 * Callers:
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1400504B4 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1403C0428 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGTARGETENTRY::operator!=(_DWORD *a1, _DWORD *a2)
{
  return a1[6] != a2[6] || a1[7] != a2[7] || a1[8] != a2[8];
}
