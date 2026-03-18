/*
 * XREFs of ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1401B86BC
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BC6E8 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

struct DXGCONTEXT *__fastcall DXGDEVICE::GetPresentContext(DXGDEVICE *this)
{
  struct DXGCONTEXT *v2; // rbx
  struct DXGCONTEXT *result; // rax

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5790;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 5790LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (DXGDEVICE *)((char *)this + 496);
  for ( result = *(struct DXGCONTEXT **)v2; result != v2 && result; result = *(struct DXGCONTEXT **)result )
  {
    if ( *((_BYTE *)result + 435) )
      return result;
  }
  return 0LL;
}
