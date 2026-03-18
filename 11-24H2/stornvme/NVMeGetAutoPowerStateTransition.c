/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x140027F80
 * Callers:
 *     NVMePowerInitialize @ 0x14001E528 (NVMePowerInitialize.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

_UNKNOWN **__fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  result = &retaddr;
  v5 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    result = (_UNKNOWN **)NVMeAllocateDmaBuffer(a1, 0x100u);
    if ( v5 )
    {
      memset(v5, 0, 0x100uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4160LL) = v5;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4208LL) = 256;
      v3 = *(_QWORD *)(a1 + 1104);
      *(_QWORD *)(v3 + 4120) = 0LL;
      *(_BYTE *)(v3 + 4096) = 10;
      *(_BYTE *)(v3 + 4136) = 12;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeGetAutoPowerStateTransitionCompletion;
      ProcessCommand(a1, a1 + 1016);
      WaitForCommandComplete(a1, a1 + 1016, 1u);
      return (_UNKNOWN **)NVMeFreeDmaBuffer(a1, 256LL, (__int64 *)&v5, 0LL);
    }
  }
  return result;
}
