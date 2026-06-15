/*
 * XREFs of ?EventHandlerTimer@CAudioPump@@AEAAXPEA_K@Z @ 0x140034FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioPump::EventHandlerTimer(CAudioPump *this, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  LARGE_INTEGER v5; // rax
  void *v6; // rcx
  char v7; // al
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 583);
  if ( !*((_QWORD *)this + 39) )
  {
    *((_BYTE *)this + 272) = 0;
    *((_QWORD *)this + 47) = v2;
    return;
  }
  v4 = *((_QWORD *)this + 38);
  if ( v4 > v2 )
  {
    v5.QuadPart = v2 - v4;
    v6 = (void *)*((_QWORD *)this + 37);
    DueTime = v5;
    SetWaitableTimer(v6, &DueTime, (int)((double)*((int *)this + 22) * 1.5 / 10000.0), 0LL, 0LL, 0);
LABEL_6:
    *((_BYTE *)this + 272) = 1;
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) )
    goto LABEL_6;
  v7 = *((_BYTE *)this + 4681);
  *((_BYTE *)this + 4752) = 1;
  if ( v7 )
    ++*((_QWORD *)this + 591);
  else
    ++*((_QWORD *)this + 592);
  *((_BYTE *)this + 272) = 0;
  if ( v7 )
    *((_BYTE *)this + 4681) = 0;
}
