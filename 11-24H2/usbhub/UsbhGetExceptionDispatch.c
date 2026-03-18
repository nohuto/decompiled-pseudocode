/*
 * XREFs of UsbhGetExceptionDispatch @ 0x140030860
 * Callers:
 *     UsbhEtwLogHubPastExceptions @ 0x140030558 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhExceptionWorker @ 0x140030730 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

char *__fastcall UsbhGetExceptionDispatch(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int i; // eax

  v2 = a2;
  FdoExt(a1);
  if ( (UsbhLogMask & 0x80u) != 0 && a1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v5 = 1061451877;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v5 + 24) = v2;
    }
  }
  for ( i = 0; i < 0x8E; ++i )
  {
    if ( (_DWORD)v2 == *((_DWORD *)&HubExceptionTable + 6 * i) )
      return (char *)&HubExceptionTable + 24 * i;
  }
  return 0LL;
}
