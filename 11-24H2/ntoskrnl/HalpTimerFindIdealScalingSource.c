/*
 * XREFs of HalpTimerFindIdealScalingSource @ 0x140538640
 * Callers:
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 */

__int64 HalpTimerFindIdealScalingSource()
{
  __int64 v0; // rdi
  ULONG_PTR *v1; // rbx
  __int64 Timer; // rcx
  ULONG_PTR *v3; // rdx
  ULONG_PTR *v4; // r8
  int v5; // r9d

  v0 = 0LL;
  v1 = 0LL;
  Timer = HalpFindTimer(1, 2, 24576, 0, 0);
  if ( !Timer )
  {
    Timer = HalpFindTimer(3, 2, 24576, 0, 0);
    if ( !Timer )
    {
      v3 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( 1 )
      {
        v4 = v3;
        if ( v3 == &HalpRegisteredTimers )
          break;
        Timer = (__int64)v3;
        v3 = (ULONG_PTR *)*v3;
        v5 = *(_DWORD *)(Timer + 184);
        if ( (v5 & 1) == 0 )
        {
          if ( *(_QWORD *)(Timer + 176) )
            v0 = Timer;
          if ( (*(_DWORD *)(Timer + 224) & 2) != 0 && *(_QWORD *)(Timer + 192) )
          {
            if ( (v5 & 8) == 0 )
              return Timer;
            if ( v1 )
              v4 = v1;
            v1 = v4;
          }
        }
      }
      if ( v0 )
      {
        return v0;
      }
      else if ( v1 )
      {
        *((_DWORD *)v1 + 46) &= ~8u;
        return (__int64)v1;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return Timer;
}
