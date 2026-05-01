/*
 * XREFs of ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x180602284
 * Callers:
 *     ?Run@CRunnableTask@@UEAAJXZ @ 0x1802021A0 (-Run@CRunnableTask@@UEAAJXZ.c)
 *     ?Kill@CRunnableTask@@UEAAJH@Z @ 0x180601B40 (-Kill@CRunnableTask@@UEAAJH@Z.c)
 *     ?Resume@CRunnableTask@@UEAAJXZ @ 0x180602240 (-Resume@CRunnableTask@@UEAAJXZ.c)
 *     ?Suspend@CRunnableTask@@UEAAJXZ @ 0x180602A30 (-Suspend@CRunnableTask@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRunnableTask::SetAbort(CRunnableTask *this, __int32 a2)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 16) != a2 )
  {
    _InterlockedExchange((volatile __int32 *)this + 16, a2);
    v2 = (void *)*((_QWORD *)this + 7);
    if ( v2 )
    {
      if ( a2 )
        SetEvent(v2);
      else
        ResetEvent(v2);
    }
  }
}
