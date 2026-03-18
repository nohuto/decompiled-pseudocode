/*
 * XREFs of ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800FBF74
 * Callers:
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1800FBB64 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x180110150 (-Initialize@CInteraction@@MEAAJXZ.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800FC104 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAA@XZ @ 0x1800FC174 (--0-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAA@XZ.c)
 *     ??0CInteractionContextTransformHelper@@QEAA@XZ @ 0x1800FC1AC (--0CInteractionContextTransformHelper@@QEAA@XZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::CInteractionContextWrapper(
        CInteractionContextWrapper *this)
{
  char v2; // al
  CInteractionContextWrapper *result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  *((_QWORD *)this + 27) = 1LL;
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 308) = 1065353216LL;
  *((_QWORD *)this + 31) = 1065353216LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *(_QWORD *)((char *)this + 268) = 1065353216LL;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *((_DWORD *)this + 71) = 0;
  *((_QWORD *)this + 36) = 1065353216LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  v2 = *((_BYTE *)this + 313);
  *((_BYTE *)this + 312) = -86;
  *((_BYTE *)this + 313) = v2 & 0xC0 | 0x29;
  *((_DWORD *)this + 79) = 0;
  *((_BYTE *)this + 320) = 0;
  CInteractionContextTransformHelper::CInteractionContextTransformHelper((CInteractionContextWrapper *)((char *)this + 328));
  *((_BYTE *)this + 528) = 0;
  CQueue<CBufferedInteractionOutput *>::CQueue<CBufferedInteractionOutput *>((char *)this + 536);
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CInteractionContextWrapper *)((char *)this + 616));
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 80) &= ~1u;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_BYTE *)this + 144) &= ~1u;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 13) = 1065353216LL;
  *((_BYTE *)this + 208) &= ~1u;
  result = this;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 21) = 1065353216LL;
  *((_BYTE *)this + 84) = 0;
  *((_BYTE *)this + 148) = 0;
  return result;
}
