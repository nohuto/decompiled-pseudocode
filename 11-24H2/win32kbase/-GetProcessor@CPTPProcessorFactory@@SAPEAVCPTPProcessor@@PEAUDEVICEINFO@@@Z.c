/*
 * XREFs of ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105780
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012E3E0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1401443F8 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140148E60 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140188E00 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___ @ 0x14020DBA8 (CBaseInput--ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___.c)
 * Callees:
 *     <none>
 */

struct CPTPProcessor *__fastcall CPTPProcessorFactory::GetProcessor(struct DEVICEINFO *a1)
{
  struct CPTPProcessor *result; // rax

  result = (struct CPTPProcessor *)*((_QWORD *)a1 + 57);
  if ( result )
    return (struct CPTPProcessor *)*((_QWORD *)result + 133);
  return result;
}
