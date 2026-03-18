/*
 * XREFs of InitMutex @ 0x14004E58C
 * Callers:
 *     Mutex @ 0x14006EBC0 (Mutex.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall InitMutex(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned int v8; // edi
  char *v9; // rax
  char *v10; // rbx

  *(_WORD *)(a3 + 66) = 9;
  *(_DWORD *)(a3 + 88) = 192;
  v8 = 0;
  v9 = (char *)HeapAlloc(a2, 1414876488, 0xC0u);
  *(_QWORD *)(a3 + 96) = v9;
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, *(unsigned int *)(a3 + 88));
    *(_DWORD *)v10 = a4;
    if ( a5 )
      *((_DWORD *)v10 + 8) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 23);
    *((_QWORD *)v10 + 3) = v10 + 16;
    *((_QWORD *)v10 + 2) = v10 + 16;
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    PrintDebugMessage(0x4Cu, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v8;
}
