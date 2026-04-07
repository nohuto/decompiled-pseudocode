/*
 * XREFs of ??_GCMILRefCountBase@@UEAAPEAXI@Z @ 0x1800F53F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMILRefCountBase@@UEAA@XZ @ 0x1800849AC (--1CMILRefCountBase@@UEAA@XZ.c)
 */

CMILRefCountBase *__fastcall CMILRefCountBase::`scalar deleting destructor'(CMILRefCountBase *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CMILRefCountBase::~CMILRefCountBase(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
