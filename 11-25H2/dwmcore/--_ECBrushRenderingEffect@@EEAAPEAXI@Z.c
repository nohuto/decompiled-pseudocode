/*
 * XREFs of ??_ECBrushRenderingEffect@@EEAAPEAXI@Z @ 0x1800CF840
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800CFBC0 (-InternalRelease@-$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     ??1CBrushRenderingEffect@@EEAA@XZ @ 0x1800CFF3C (--1CBrushRenderingEffect@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x180127774 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CBrushRenderingEffect *__fastcall CBrushRenderingEffect::`vector deleting destructor'(
        CBrushRenderingEffect *this,
        char a2)
{
  struct CBrushRenderingEffect *v4; // rcx
  struct CObjectCache *ObjectCache; // rax

  CBrushRenderingEffect::~CBrushRenderingEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 272LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      if ( *((_DWORD *)ObjectCache + 1) < *(_DWORD *)ObjectCache )
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
      else
      {
        operator delete(this);
      }
    }
  }
  return this;
}
