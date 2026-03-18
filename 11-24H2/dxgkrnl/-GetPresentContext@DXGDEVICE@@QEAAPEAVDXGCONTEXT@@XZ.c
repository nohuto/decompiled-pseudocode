/*
 * XREFs of ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1401BAD68
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BF068 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGCONTEXT *__fastcall DXGDEVICE::GetPresentContext(DXGDEVICE *this)
{
  struct DXGCONTEXT *v2; // rbx
  struct DXGCONTEXT *result; // rax

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5981;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 5981LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (DXGDEVICE *)((char *)this + 496);
  for ( result = *(struct DXGCONTEXT **)v2; result != v2 && result; result = *(struct DXGCONTEXT **)result )
  {
    if ( *((_BYTE *)result + 435) )
      return result;
  }
  return 0LL;
}
