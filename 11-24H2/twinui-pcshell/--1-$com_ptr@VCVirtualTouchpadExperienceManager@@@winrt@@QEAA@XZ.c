/*
 * XREFs of ??1?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ @ 0x18039D540
 * Callers:
 *     _CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E5AD2 (_CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E5BD7 (_CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ @ 0x1803A10F0 (-unconditional_release_ref@-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CVirtualTouchpadExperienceManager>::~com_ptr<CVirtualTouchpadExperienceManager>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CVirtualTouchpadExperienceManager>::unconditional_release_ref();
  return result;
}
