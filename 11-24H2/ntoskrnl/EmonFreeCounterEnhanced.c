/*
 * XREFs of EmonFreeCounterEnhanced @ 0x14055941C
 * Callers:
 *     EmonDisableMonitoringEnhanced @ 0x140558CF0 (EmonDisableMonitoringEnhanced.c)
 *     EmonInitializeProfilingEnhanced @ 0x140B50F20 (EmonInitializeProfilingEnhanced.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonFreeCounterEnhanced(unsigned int a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // edx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  result = KiProcessorBlock[v2];
  v4 = *(_QWORD *)(result + 88);
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 99;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 += 72LL;
        else
          v4 = 0LL;
      }
      else
      {
        v4 += 48LL;
      }
    }
    else
    {
      v4 += 24LL;
    }
  }
  if ( a1 <= *(_DWORD *)(v4 + 8) )
  {
    v7 = *(_QWORD *)(v4 + 16);
    result = a1;
    v8 = 6LL * a1;
    if ( *(_DWORD *)(v7 + 8 * v8 + 28) != 3 )
    {
      *(_DWORD *)(v7 + 8 * v8 + 36) = 0;
      *(_DWORD *)(v7 + 8 * v8 + 24) = 3;
    }
  }
  return result;
}
