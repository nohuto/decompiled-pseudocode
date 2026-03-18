/*
 * XREFs of PfpPrefetchSharedConflictNotifyStart @ 0x140A9E9D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 */

__int64 __fastcall PfpPrefetchSharedConflictNotifyStart(ULONG_PTR *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  __int64 *v6; // rax

  v3 = 0;
  v5 = 0LL;
  ++dword_140E66D0C;
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
    KeAbPreWait(v6);
    goto LABEL_9;
  }
LABEL_6:
  v3 = -1073741670;
LABEL_9:
  a3[1] = v5;
  *a3 = PfpPrefetchSharedConflictNotifyEnd;
  return v3;
}
