/*
 * XREFs of _CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801E42D8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ @ 0x180451F14 (--1-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 96) + 16LL;
  return winrt::com_ptr<CVirtualTouchpadExperienceManager>::~com_ptr<CVirtualTouchpadExperienceManager>(*(_QWORD *)(a2 + 56));
}
