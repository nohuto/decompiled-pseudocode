/*
 * XREFs of ??0_unnamed_type_PerPlane_@_MOCKDRIVERSTATE_SET_PLANE@@QEAA@XZ @ 0x14004EBC4
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     <none>
 */

_MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_ *__fastcall _MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_::_unnamed_type_PerPlane_(
        _MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_ *this)
{
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0LL;
  return this;
}
