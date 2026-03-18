/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x140407EB0
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1401A0260 (DxgkOpmCreateHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     Feature_1825796408__private_IsEnabledDeviceUsageNoInline @ 0x1400678F4 (Feature_1825796408__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x140198F7C (-FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(ADAPTER_DISPLAY *this, void *a2, void **a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  char *v12; // rdi
  __int64 v13; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6786;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 6786LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)this + 50) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6787;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OpmI2CMutex.IsOwner()", 6787LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = operator new(0x28uLL, 0x4B677844u, 256LL);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 3221225495LL;
  *(_BYTE *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 16) = a2;
  if ( (unsigned int)Feature_1825796408__private_IsEnabledDeviceUsageNoInline() )
  {
    do
    {
      do
      {
        v11 = *((_QWORD *)this + 46);
        *((_QWORD *)this + 46) = v11 + 1;
      }
      while ( !v11 );
    }
    while ( ADAPTER_DISPLAY::FindOpmAdapterMapping(this, v11) );
    v12 = (char *)this + 352;
    v7[3] = v11;
    v13 = *(_QWORD *)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) == v12 )
    {
      *v7 = v13;
      v7[1] = v12;
      *(_QWORD *)(v13 + 8) = v7;
      *(_QWORD *)v12 = v7;
      v7 = (_QWORD *)v7[3];
      goto LABEL_14;
    }
LABEL_15:
    __fastfail(3u);
  }
  v9 = (_QWORD *)((char *)this + 352);
  v10 = *((_QWORD *)this + 44);
  if ( *(ADAPTER_DISPLAY **)(v10 + 8) != (ADAPTER_DISPLAY *)((char *)this + 352) )
    goto LABEL_15;
  *v7 = v10;
  v7[1] = v9;
  *(_QWORD *)(v10 + 8) = v7;
  *v9 = v7;
LABEL_14:
  *a3 = v7;
  return 0LL;
}
