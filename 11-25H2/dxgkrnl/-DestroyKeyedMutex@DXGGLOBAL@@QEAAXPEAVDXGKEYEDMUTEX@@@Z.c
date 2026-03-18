/*
 * XREFs of ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1403E7184
 * Callers:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x14000F998 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX ***a2)
{
  struct DXGKEYEDMUTEX **v4; // rdx
  struct DXGKEYEDMUTEX **v5; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5219;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pKeyedMutex != NULL", 5219LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 76));
  v4 = *a2;
  if ( (*a2)[1] != (struct DXGKEYEDMUTEX *)a2 || (v5 = a2[1], *v5 != (struct DXGKEYEDMUTEX *)a2) )
    __fastfail(3u);
  *v5 = (struct DXGKEYEDMUTEX *)v4;
  v4[1] = (struct DXGKEYEDMUTEX *)v5;
  DXGFASTMUTEX::Release(this + 76);
  DXGKEYEDMUTEX::`scalar deleting destructor'((DXGKEYEDMUTEX *)a2);
}
