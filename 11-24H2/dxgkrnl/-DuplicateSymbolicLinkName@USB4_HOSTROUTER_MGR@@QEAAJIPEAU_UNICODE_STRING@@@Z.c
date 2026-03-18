/*
 * XREFs of ?DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z @ 0x140277D94
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028E074 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::DuplicateSymbolicLinkName(
        USB4_HOSTROUTER_MGR *this,
        int a2,
        struct _UNICODE_STRING *a3)
{
  char *v3; // rbx
  __int64 **v6; // rbx
  __int64 *i; // rdx
  USB4_HOSTROUTER_MGR *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = (char *)MONITOR_MGR::_pUsb4Manager;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v9, (struct DXGFASTMUTEX *)((char *)MONITOR_MGR::_pUsb4Manager + 8));
  v6 = (__int64 **)(v3 + 56);
  for ( i = *v6; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v6 )
      goto LABEL_9;
    if ( *((_DWORD *)i + 8) == a2 )
      break;
  }
  if ( !i )
  {
LABEL_9:
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 563;
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v9);
    return 3221226021LL;
  }
  if ( RtlCreateUnicodeString(a3, (PCWSTR)i[3]) )
  {
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v9);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 570;
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v9);
    return 3221225495LL;
  }
}
