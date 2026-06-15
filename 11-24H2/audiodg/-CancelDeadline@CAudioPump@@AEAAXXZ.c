/*
 * XREFs of ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140021494
 * Callers:
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14001EB60 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140021220 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 * Callees:
 *     McTemplateU0pqit_EtwEventWriteTransfer @ 0x14001FC40 (McTemplateU0pqit_EtwEventWriteTransfer.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140021144 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

void __fastcall CAudioPump::CancelDeadline(CAudioPump *this)
{
  void *v2; // rcx
  HRESULT v3; // eax
  int v4; // ecx
  __int64 v5; // [rsp+28h] [rbp-10h]

  LinearFitT<256>::Reset((__int64)this + 448);
  v2 = (void *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 581) = 0LL;
  *((_QWORD *)this + 582) = 0LL;
  if ( v2 )
  {
    v3 = RtwqCancelDeadline(v2);
    *((_QWORD *)this + 31) = 0LL;
    if ( (byte_1400C4541 & 8) != 0 )
    {
      LODWORD(v5) = v3;
      McTemplateU0pqit_EtwEventWriteTransfer(
        v4,
        (int)&AudioCore_Pump_CancelDeadline,
        (__int64)this,
        *((_DWORD *)this + 61),
        0LL,
        v5);
    }
  }
}
