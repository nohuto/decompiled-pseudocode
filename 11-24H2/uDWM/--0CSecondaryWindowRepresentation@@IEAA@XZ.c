/*
 * XREFs of ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x18003CE68
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003CD84 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CSecondaryWindowRepresentation *__fastcall CSecondaryWindowRepresentation::CSecondaryWindowRepresentation(
        CSecondaryWindowRepresentation *this)
{
  __int64 v1; // r9
  __int64 v2; // r9
  __int64 v3; // r10
  CSecondaryWindowRepresentation *result; // rax

  CBaseObject::CBaseObject(this);
  *(_QWORD *)v1 = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v1 + 16) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_DWORD *)(v1 + 72) = 0;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)(v1 + 128));
  *(_WORD *)(v2 + 416) = v3;
  *(_QWORD *)(v2 + 360) = 0x3FF0000000000000LL;
  *(_QWORD *)(v2 + 352) = 0x3FF0000000000000LL;
  result = (CSecondaryWindowRepresentation *)v2;
  *(_QWORD *)(v2 + 32) = v3;
  *(_QWORD *)(v2 + 48) = v3;
  *(_QWORD *)(v2 + 344) = v3;
  *(_QWORD *)(v2 + 56) = v3;
  *(_WORD *)(v2 + 160) = v3;
  *(_QWORD *)(v2 + 408) = v3;
  *(_DWORD *)(v2 + 120) = 100;
  *(_DWORD *)(v2 + 368) = 1065353216;
  return result;
}
