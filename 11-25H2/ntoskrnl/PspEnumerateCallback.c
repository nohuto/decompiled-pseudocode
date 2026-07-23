/*
 * XREFs of PspEnumerateCallback @ 0x140A647D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnumerateCallback(int a1, _DWORD *a2, _QWORD *a3)
{
  _RTL_RUN_ONCE *v4; // rcx
  __int64 v5; // rdx
  int v7; // ecx

  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 0LL;
      v4 = &PspLoadImageNotifyRoutine;
    }
    else
    {
      v4 = &PspCreateProcessNotifyRoutine;
    }
  }
  else
  {
    v4 = &PspCreateThreadNotifyRoutine;
  }
  v5 = (unsigned int)*a2;
  if ( (unsigned int)v5 < 0x40 )
  {
    *a3 = &v4[v5];
    *a2 = v5 + 1;
    return 1LL;
  }
  return 0LL;
}
