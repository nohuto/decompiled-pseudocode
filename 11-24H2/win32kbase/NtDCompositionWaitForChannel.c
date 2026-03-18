/*
 * XREFs of NtDCompositionWaitForChannel @ 0x14006DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x14006E0EC (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionWaitForChannel(unsigned int a1, int a2)
{
  int v3; // edi
  DirectComposition::CApplicationChannel *v4; // rbx
  DirectComposition::CApplicationChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( *((int *)v6 + 63) > 0
      && !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(v6, a2 != 0) )
    {
      v3 = -1073741823;
    }
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
