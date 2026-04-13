/*
 * XREFs of ??_ETargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x18006E200
 * Callers:
 *     <none>
 * Callees:
 *     ??1TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ @ 0x18006D458 (--1TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ.c)
 */

void **__fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vector deleting destructor'(
        void **this,
        char a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::~TargetedContentActionInternalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
