/*
 * XREFs of CrmStateMonitorCsAcDcCallback @ 0x18006AB40
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 */

void __fastcall CrmStateMonitorCsAcDcCallback(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 == 4 )
  {
    v5 = -64LL;
  }
  else
  {
    if ( a2 != 8 )
      return;
    v5 = -88LL;
  }
  v6 = a1 + v5;
  CempLockAcquireExclusive(a1 + v5 + 8);
  v7 = *(_QWORD *)(v6 + 56);
  if ( a2 == 4 )
    LODWORD(v7) = *a3;
  else
    HIDWORD(v7) = *a3;
  CrmStateMonitorStateSet((unsigned int *)v6, &v7, 8uLL, 1);
  *(_DWORD *)(v6 + 16) = 0;
  RtlReleaseSRWLockExclusive(v6 + 8);
}
