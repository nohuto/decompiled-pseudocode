/*
 * XREFs of ?get_IsVisible@CVirtualTouchpadExperienceManager@@UEAAJPEAE@Z @ 0x1803A10D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::get_IsVisible(CVirtualTouchpadExperienceManager *this, bool *a2)
{
  bool v2; // al

  v2 = 0;
  if ( *((_QWORD *)this + 11) )
    v2 = *((_DWORD *)this + 194) == 2;
  *a2 = v2;
  return 0LL;
}
