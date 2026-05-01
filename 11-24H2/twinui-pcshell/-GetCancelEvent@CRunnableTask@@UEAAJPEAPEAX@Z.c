/*
 * XREFs of ?GetCancelEvent@CRunnableTask@@UEAAJPEAPEAX@Z @ 0x180600A00
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CRunnableTask::GetCancelEvent(CRunnableTask *this, void **a2)
{
  unsigned int Error; // edi
  int v5; // ebp
  HANDLE EventW; // rax
  void *v7; // rcx
  HANDLE CurrentProcess; // rax

  *a2 = 0LL;
  Error = 0;
  if ( !*((_QWORD *)this + 4) )
  {
    v5 = *((_DWORD *)this + 10);
    EventW = CreateEventW(0LL, 1, v5, 0LL);
    if ( EventW )
    {
      _InterlockedExchange64((volatile __int64 *)this + 4, (__int64)EventW);
      if ( v5 != *((_DWORD *)this + 10) )
      {
        v7 = (void *)*((_QWORD *)this + 4);
        if ( *((_DWORD *)this + 10) )
          SetEvent(v7);
        else
          ResetEvent(v7);
      }
    }
    else
    {
      Error = ResultFromKnownLastError();
    }
  }
  if ( *((_QWORD *)this + 4) )
  {
    CurrentProcess = GetCurrentProcess();
    if ( DuplicateHandle(CurrentProcess, *((HANDLE *)this + 4), CurrentProcess, a2, 0, 0, 2u) )
      return 0;
    else
      return (unsigned int)ResultFromKnownLastError();
  }
  return Error;
}
