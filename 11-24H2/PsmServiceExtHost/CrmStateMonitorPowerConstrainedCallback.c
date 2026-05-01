/*
 * XREFs of CrmStateMonitorPowerConstrainedCallback @ 0x180068320
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorPowerConstrainedCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  _BYTE v10[40]; // [rsp+20h] [rbp-38h] BYREF

  result = 0LL;
  memset(v10, 0, 36);
  if ( a2 == 4 )
  {
    v6 = -96LL;
  }
  else
  {
    if ( a2 != 23 )
      return result;
    v6 = -120LL;
  }
  v7 = a1 + v6;
  CempLockAcquireExclusive(a1 + v6 + 8);
  v8 = *(_OWORD *)(v7 + 72);
  *(_OWORD *)v10 = *(_OWORD *)(v7 + 56);
  *(_QWORD *)&v10[32] = *(_QWORD *)(v7 + 88);
  *(_OWORD *)&v10[16] = v8;
  if ( a2 == 4 )
  {
    *(_DWORD *)v10 = *(_DWORD *)a3;
  }
  else
  {
    v9 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v10[8] = *(_OWORD *)a3;
    *(_OWORD *)&v10[24] = v9;
  }
  CrmStateMonitorStateSet((unsigned int *)v7, v10, 0x28uLL, 1);
  *(_DWORD *)(v7 + 16) = 0;
  return RtlReleaseSRWLockExclusive(v7 + 8);
}
