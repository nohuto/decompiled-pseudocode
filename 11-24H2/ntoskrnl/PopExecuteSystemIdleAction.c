/*
 * XREFs of PopExecuteSystemIdleAction @ 0x140A1C4FC
 * Callers:
 *     PopSystemIdleWorker @ 0x140A1C0E0 (PopSystemIdleWorker.c)
 * Callees:
 *     PopDiagTraceSystemIdleAction @ 0x140A1C5B4 (PopDiagTraceSystemIdleAction.c)
 *     PopUpdatePdcSystemIdleState @ 0x140A1C734 (PopUpdatePdcSystemIdleState.c)
 */

__int64 __fastcall PopExecuteSystemIdleAction(__int64 a1, char a2, __int64 a3)
{
  unsigned int v5; // ebp
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // r14
  unsigned int updated; // ebx

  v5 = a1;
  v6 = MEMORY[0xFFFFF78000000008] * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  if ( (_DWORD)a1 == 1 || (_DWORD)a1 == 2 || (_DWORD)a1 == 3 || (_DWORD)a1 == 4 )
  {
    LOBYTE(a1) = a2;
  }
  else
  {
    if ( (_DWORD)a1 != 5 )
    {
      updated = -1073741811;
      goto LABEL_8;
    }
    a1 = 0LL;
  }
  updated = PopUpdatePdcSystemIdleState(a1);
LABEL_8:
  *(_QWORD *)a3 = v7;
  BYTE8(v6) = a2;
  *(_DWORD *)(a3 + 8) = v5;
  *(_BYTE *)(a3 + 12) = a2;
  *(_DWORD *)(a3 + 16) = updated;
  PopDiagTraceSystemIdleAction(v5, *((_QWORD *)&v6 + 1), updated);
  return updated;
}
