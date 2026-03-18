/*
 * XREFs of PfSnActivateTrace @ 0x14036CD6C
 * Callers:
 *     PfSnBeginTrace @ 0x140828318 (PfSnBeginTrace.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     PfSnAddProcessTrace @ 0x14036CE24 (PfSnAddProcessTrace.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  KIRQL v2; // si
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  if ( ExAcquireRundownProtection_0(&RunRef) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140E66D50);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_140E66D48;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_140E66D48 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = &PfSnGlobals;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_140E66D48 = a1 + 8;
    }
    KeReleaseSpinLock(&qword_140E66D50, v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
