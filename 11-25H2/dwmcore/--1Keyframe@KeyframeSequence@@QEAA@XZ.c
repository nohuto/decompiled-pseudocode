/*
 * XREFs of ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x18005D8A0
 * Callers:
 *     ??_EKeyframe@KeyframeSequence@@QEAAPEAXI@Z @ 0x18005D838 (--_EKeyframe@KeyframeSequence@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyframeSequence::Keyframe::~Keyframe(KeyframeSequence::Keyframe *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease((volatile signed __int32 **)this + 1);
}
