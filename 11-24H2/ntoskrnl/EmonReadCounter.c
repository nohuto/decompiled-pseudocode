/*
 * XREFs of EmonReadCounter @ 0x14055B3F4
 * Callers:
 *     EmonSaveProfilingContextInternalEnhanced @ 0x14055C1DC (EmonSaveProfilingContextInternalEnhanced.c)
 *     EmonSaveProfilingContextInternalOriginal @ 0x14055C294 (EmonSaveProfilingContextInternalOriginal.c)
 * Callees:
 *     <none>
 */

void __fastcall EmonReadCounter(int a1, int a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax

  if ( a2 )
  {
    if ( a2 != 1 )
      return;
    *a3 = __readmsr(a1 + 777);
    v4 = __readmsr(0x38Du);
    LODWORD(v4) = (15LL << (4 * (unsigned __int8)a1)) & v4;
  }
  else
  {
    *a3 = __readmsr(a1 + 193);
    v4 = __readmsr(a1 + 390);
  }
  *a4 = v4;
}
