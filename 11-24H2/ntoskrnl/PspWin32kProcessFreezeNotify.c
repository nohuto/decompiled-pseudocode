/*
 * XREFs of PspWin32kProcessFreezeNotify @ 0x140A8E398
 * Callers:
 *     PspPostFreezeOperationWorker @ 0x140A7EC10 (PspPostFreezeOperationWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     EtwTraceWin32kFreezeChangeNotifyStart @ 0x1407A9B30 (EtwTraceWin32kFreezeChangeNotifyStart.c)
 *     EtwTraceWin32kFreezeChangeNotifyStop @ 0x1407A9BEC (EtwTraceWin32kFreezeChangeNotifyStop.c)
 */

void __fastcall PspWin32kProcessFreezeNotify(unsigned int a1, __int64 a2, __int64 a3, __int16 *a4)
{
  char v8; // bl
  __int64 i; // rsi

  if ( (unsigned int)dword_140E090F0 > 5 && (qword_140E09100 & 4) != 0 && (qword_140E09108 & 4) == qword_140E09108 )
  {
    v8 = 1;
    EtwTraceWin32kFreezeChangeNotifyStart();
  }
  else
  {
    v8 = 0;
  }
  Win32kProcessFreezeChangeNotify(a1, a2, *(unsigned int *)a4);
  if ( v8 )
    EtwTraceWin32kFreezeChangeNotifyStop(a1, a3, *a4);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a4; i = (unsigned int)(i + 1) )
  {
    ObfDereferenceObject(*(PVOID *)(a2 + 8 * i));
    *(_QWORD *)(a2 + 8 * i) = 0LL;
    *(_DWORD *)(a3 + 4 * i) = 0;
  }
  *(_DWORD *)a4 = 0;
}
