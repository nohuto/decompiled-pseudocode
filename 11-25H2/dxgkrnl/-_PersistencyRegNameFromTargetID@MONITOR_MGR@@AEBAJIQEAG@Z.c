/*
 * XREFs of ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x14026DF30
 * Callers:
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x14026C1AC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026C3D4 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x14026C97C (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_PersistencyRegNameFromTargetID(
        MONITOR_MGR *this,
        unsigned int a2,
        unsigned __int16 *const a3)
{
  __int64 v3; // rsi
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3633;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3634;
  }
  *a3 = 0;
  *(_QWORD *)&String.Length = 4063232LL;
  String.Buffer = a3;
  v5 = RtlIntegerToUnicodeString(v3, 0x10u, &String);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry2(2LL, v3, v5);
    WdLogGlobalForLineNumber = 3660;
  }
  else
  {
    a3[String.Length] = 0;
  }
  return v6;
}
