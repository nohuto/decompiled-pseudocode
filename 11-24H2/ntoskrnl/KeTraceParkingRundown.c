/*
 * XREFs of KeTraceParkingRundown @ 0x1405C5874
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     EtwTraceForceParkTransition @ 0x14064BED4 (EtwTraceForceParkTransition.c)
 *     EtwTraceParkTransition @ 0x14064C254 (EtwTraceParkTransition.c)
 */

void __fastcall KeTraceParkingRundown(char a1)
{
  int v1; // ebp
  __int64 i; // rdi
  __int64 v3; // rsi
  char v4; // r14
  char v5; // al
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    v8 = 0LL;
    LOBYTE(v1) = 0;
    for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
    {
      v3 = KiProcessorBlock[i];
      v4 = 0;
      KiAcquirePrcbLocksForIsolationUnit(v3, 0LL, (unsigned __int64 *)&v8);
      v5 = *(_BYTE *)(v3 + 35);
      if ( (v5 & 0x10) != 0 )
      {
        if ( (v5 & 8) != 0 )
        {
          v6 = 3;
          v4 = 1;
          v1 = *(_DWORD *)(*(_QWORD *)(v3 + 34544) + 336LL);
        }
        else
        {
          v6 = ((v5 & 4) != 0) + 1;
        }
      }
      else
      {
        v6 = 0;
      }
      KiReleasePrcbLocksForIsolationUnit(&v8);
      EtwTraceParkTransition(v3, v6, v6);
      if ( v4 )
      {
        LOBYTE(v7) = v1;
        EtwTraceForceParkTransition(v3, v7, 0LL);
      }
    }
  }
}
