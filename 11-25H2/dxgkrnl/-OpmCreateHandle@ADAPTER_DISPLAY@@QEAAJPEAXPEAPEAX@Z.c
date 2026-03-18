/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x140403380
 * Callers:
 *     DxgkOpmCreateHandle @ 0x14019DD38 (DxgkOpmCreateHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(ADAPTER_DISPLAY *this, void *a2, void **a3)
{
  __int64 v6; // r9
  _BYTE *v7; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6761;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 6761LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)this + 49) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6762;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OpmI2CMutex.IsOwner()", 6762LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (_BYTE *)operator new(0x20uLL, 0x4B677844u, 256LL, v6);
  if ( !v7 )
    return 3221225495LL;
  v9 = (_QWORD *)((char *)this + 352);
  v7[24] = 0;
  *((_QWORD *)v7 + 2) = a2;
  v10 = *((_QWORD *)this + 44);
  if ( *(ADAPTER_DISPLAY **)(v10 + 8) != (ADAPTER_DISPLAY *)((char *)this + 352) )
    __fastfail(3u);
  *(_QWORD *)v7 = v10;
  *((_QWORD *)v7 + 1) = v9;
  *(_QWORD *)(v10 + 8) = v7;
  *v9 = v7;
  *a3 = v7;
  return 0LL;
}
