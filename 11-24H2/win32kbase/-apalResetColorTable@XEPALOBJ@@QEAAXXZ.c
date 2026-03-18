/*
 * XREFs of ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x140147244
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XEPALOBJ::apalResetColorTable(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v1; // rax
  struct _BASEOBJECT *v3; // rcx

  v1 = *this;
  v3 = (struct _BASEOBJECT *)*((_QWORD *)*this + 15);
  if ( v3 != v1 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  *((_QWORD *)*this + 14) = *((_QWORD *)*this + 16);
  *((_QWORD *)*this + 15) = *this;
}
