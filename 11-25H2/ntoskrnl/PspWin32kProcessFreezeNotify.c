/*
 * XREFs of PspWin32kProcessFreezeNotify @ 0x14076AAAC
 * Callers:
 *     PspPostFreezeOperationWorker @ 0x14076A810 (PspPostFreezeOperationWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     EtwTraceWin32kFreezeChangeNotifyStart @ 0x14079A760 (EtwTraceWin32kFreezeChangeNotifyStart.c)
 *     EtwTraceWin32kFreezeChangeNotifyStop @ 0x14079A81C (EtwTraceWin32kFreezeChangeNotifyStop.c)
 */

LONG_PTR __fastcall PspWin32kProcessFreezeNotify(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int16 *v8; // r9
  char v9; // bl
  LONG_PTR result; // rax
  __int64 i; // rsi

  if ( (unsigned int)dword_140E09010 > 5 && tlgKeywordOn((__int64)&dword_140E09010, 4LL) )
  {
    v9 = 1;
    EtwTraceWin32kFreezeChangeNotifyStart(a1, *v8);
  }
  else
  {
    v9 = 0;
  }
  result = Win32kProcessFreezeChangeNotify(a1, a2, (unsigned int)*a4);
  if ( v9 )
    result = EtwTraceWin32kFreezeChangeNotifyStop(a1, a3, *(unsigned __int16 *)a4, (unsigned int)result);
  for ( i = 0LL; (unsigned int)i < *a4; i = (unsigned int)(i + 1) )
  {
    result = ObfDereferenceObject(*(PVOID *)(a2 + 8 * i));
    *(_QWORD *)(a2 + 8 * i) = 0LL;
    *(_DWORD *)(a3 + 4 * i) = 0;
  }
  *a4 = 0;
  return result;
}
