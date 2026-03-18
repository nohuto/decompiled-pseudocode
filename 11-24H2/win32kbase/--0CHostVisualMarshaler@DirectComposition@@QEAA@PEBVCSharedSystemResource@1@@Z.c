/*
 * XREFs of ??0CHostVisualMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x140194848
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400756A8 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1400731D0 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

_QWORD *__fastcall DirectComposition::CHostVisualMarshaler::CHostVisualMarshaler(
        DirectComposition::CHostVisualMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2,
        __int64 a3)
{
  __int64 v3; // r10
  _QWORD *v4; // r11

  DirectComposition::CVisualMarshaler::CVisualMarshaler(this, (__int64)a2, a3);
  v4[46] = v3;
  *v4 = &DirectComposition::CHostVisualMarshaler::`vftable';
  return v4;
}
