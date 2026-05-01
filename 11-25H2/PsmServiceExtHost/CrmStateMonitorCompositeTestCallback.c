/*
 * XREFs of CrmStateMonitorCompositeTestCallback @ 0x180079950
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorCompositeTestCallback(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int *v4; // rcx
  int v5; // r9d
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = (unsigned int *)(a1 - 96);
      *(_DWORD *)(a1 - 96 + 120) = *a3;
    }
  }
  else
  {
    v4 = (unsigned int *)(a1 - 64);
    *(_DWORD *)(a1 - 64 + 88) = *a3;
  }
  if ( !v4[22] || !v4[30] )
    v5 = 0;
  v7 = v5;
  return CrmStateMonitorStateSet(v4, &v7, 4uLL, 0);
}
