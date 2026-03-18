/*
 * XREFs of ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1403DEB30
 * Callers:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x14001EE28 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX ***a2)
{
  struct DXGKEYEDMUTEX **v4; // rdx
  struct DXGKEYEDMUTEX **v5; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5224;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pKeyedMutex != NULL", 5224LL, 0LL, 0LL, 0LL, 0LL);
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
