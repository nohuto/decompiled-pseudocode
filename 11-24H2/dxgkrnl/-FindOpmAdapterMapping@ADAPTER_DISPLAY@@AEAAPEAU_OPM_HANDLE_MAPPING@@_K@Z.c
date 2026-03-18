/*
 * XREFs of ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x140198F7C
 * Callers:
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1403C8B88 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x140407EB0 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x14040805C (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

struct _OPM_HANDLE_MAPPING *__fastcall ADAPTER_DISPLAY::FindOpmAdapterMapping(ADAPTER_DISPLAY *this, __int64 a2)
{
  struct _OPM_HANDLE_MAPPING *result; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6985;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 6985LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)this + 50) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6986;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OpmI2CMutex.IsOwner()", 6986LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( result = (struct _OPM_HANDLE_MAPPING *)*((_QWORD *)this + 44);
        result != (ADAPTER_DISPLAY *)((char *)this + 352);
        result = *(struct _OPM_HANDLE_MAPPING **)result )
  {
    if ( *((_QWORD *)result + 3) == a2 )
      return result;
  }
  return 0LL;
}
