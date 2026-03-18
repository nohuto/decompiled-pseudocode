/*
 * XREFs of ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1403C9C60
 * Callers:
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1403FB6F4 (DxgkOpmTranslateAndDestroyHandle.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1403CA190 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(ADAPTER_DISPLAY *this, _QWORD *a2, void **a3)
{
  _QWORD **v7; // rcx
  void **v8; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6840;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 6840LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)this + 49) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6841;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OpmI2CMutex.IsOwner()", 6841LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle(this, a2) )
  {
    v7 = (_QWORD **)*a2;
    *a3 = (void *)a2[2];
    if ( v7[1] != a2 || (v8 = (void **)a2[1], *v8 != a2) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6849;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"OPM passed in an invalid hOpmAdapterHandle!",
      6849LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223192844LL;
  }
}
