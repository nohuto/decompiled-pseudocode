/*
 * XREFs of ?MonitorGetNextMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x1402C9E80
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1402C9800 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlFillPreferredMonitorMode @ 0x1402C9BA0 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032C94 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(
        struct HDXGMONITOR__ *a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        enum _D3DKMDT_MONITOR_TIMING_TYPE *a4)
{
  struct _ERESOURCE *v8; // r15
  __int64 v9; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v10; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v11; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v12; // rdx
  unsigned int v13; // ebx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // rax
  void *v16; // [rsp+20h] [rbp-30h] BYREF
  struct HDXGMONITOR__ *v17; // [rsp+28h] [rbp-28h]
  struct HDXGMONITOR__ *v18; // [rsp+30h] [rbp-20h]
  _QWORD v19[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]

  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v16 = retaddr;
  *a3 = 0LL;
  *a4 = D3DKMDT_MTT_UNINITIALIZED;
  v17 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
  v17 = a1;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
  v8 = (struct _ERESOURCE *)((char *)a1 + 40);
  v18 = a1;
  MonitorResourceLock::AcquireShared((PERESOURCE)((char *)a1 + 40));
  v19[0] = retaddr;
  v9 = 2LL;
  do
  {
    v19[1] = a1;
    --v9;
  }
  while ( v9 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v19);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
  v10 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)(*((_QWORD *)a1 + 29) + 128LL);
  v11 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v10->Id;
  if ( !a2 )
    goto LABEL_17;
  if ( v11 != v10 )
  {
    v12 = a2 + 1;
    while ( v11 != v12 )
    {
      if ( v10 == v11 )
        goto LABEL_12;
      v11 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v11->Id;
    }
    v11 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v12->Id;
LABEL_17:
    if ( v11 == v10 )
      goto LABEL_22;
    v15 = v11 - 1;
    if ( !v11 )
      v15 = 0LL;
    if ( !v15 )
    {
LABEL_22:
      v13 = 1075708748;
    }
    else
    {
      *a3 = v15;
      v13 = 0;
      *a4 = (enum _D3DKMDT_MONITOR_TIMING_TYPE)v15[1].VideoSignalInfo.TotalSize.cy;
    }
    goto LABEL_13;
  }
LABEL_12:
  WdLogSingleEntry1(2LL, a2);
  WdLogGlobalForLineNumber = 2513;
  v13 = -1071774928;
LABEL_13:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  v18 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
  if ( v18 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v18 + 40));
    KeLeaveCriticalRegion();
  }
  return v13;
}
