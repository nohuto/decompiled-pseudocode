/*
 * XREFs of ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180226258
 * Callers:
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1800E1918 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::ReportInertiaStop(CInteraction *this)
{
  CGlobalDrawingContext **v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  signed int LastError; // eax

  v1 = (CGlobalDrawingContext **)((char *)this + 1728);
  v3 = *((_QWORD *)this + 216);
  v4 = 0;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 232LL))(v3, *((_QWORD *)g_pComposition + 111));
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v1, v5, v6);
  }
  if ( !(unsigned int)ReportInertia(*((unsigned int *)this + 430), 6LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
    else
      return (unsigned int)LastError;
  }
  return v4;
}
