/*
 * XREFs of ?GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z @ 0x1802CF3CC
 * Callers:
 *     ?GetDesktopTree@CHolographicInteropTarget@@UEBAPEAVCDesktopTree@@XZ @ 0x1802D00A0 (-GetDesktopTree@CHolographicInteropTarget@@UEBAPEAVCDesktopTree@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicManager::GetDefaultDesktopTree(RTL_SRWLOCK *this, struct CDesktopTree **a2)
{
  unsigned int v4; // edi
  _QWORD *Ptr; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = 0;
  AcquireSRWLockShared(this + 13);
  Ptr = this[19].Ptr;
  if ( this[18].Ptr == Ptr || (v6 = *(Ptr - 1)) == 0 )
  {
    *a2 = 0LL;
    v4 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147023728, 0x2B2u, 0LL);
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 96);
    if ( v7 )
    {
      *a2 = (struct CDesktopTree *)v7;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 8));
    }
    else
    {
      *a2 = 0LL;
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x2ACu, 0LL);
    }
  }
  ReleaseSRWLockShared(this + 13);
  return v4;
}
