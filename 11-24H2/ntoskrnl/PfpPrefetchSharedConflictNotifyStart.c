/*
 * XREFs of PfpPrefetchSharedConflictNotifyStart @ 0x140AA4250
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PfpPrefetchSharedConflictNotifyStart(ULONG_PTR *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v3 = 0;
  v5 = 0LL;
  ++dword_140E66FCC;
  if ( a1 )
  {
    *((_DWORD *)a1 + 18) = 1;
    _InterlockedAdd((volatile signed __int32 *)a1 + 28, 1u);
    *((_DWORD *)a1 + 15) = 0;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 15) <= 1 )
      __fastfail(0xEu);
    if ( !a1[16] )
      goto LABEL_6;
  }
  else
  {
    a1 = &PfGlobals;
  }
  v6 = KeAbPreAcquire((__int64)a1, 0LL);
  v5 = v6;
  if ( v6 )
  {
    KeAbPreWait((__int64)v6, v7, v8);
    goto LABEL_9;
  }
LABEL_6:
  v3 = -1073741670;
LABEL_9:
  a3[1] = v5;
  *a3 = PfpPrefetchSharedConflictNotifyEnd;
  return v3;
}
