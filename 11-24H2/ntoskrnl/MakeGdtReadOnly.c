/*
 * XREFs of MakeGdtReadOnly @ 0x140537688
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeWriteProtectProcessorState @ 0x140B587C0 (KeWriteProtectProcessorState.c)
 */

void MakeGdtReadOnly()
{
  _GROUP_AFFINITY *p_PreviousAffinity; // rdi
  __int64 v1; // rbx
  char v2; // cl
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  p_PreviousAffinity = &PreviousAffinity;
  v1 = 0LL;
  PreviousAffinity = 0LL;
  for ( Affinity = 0LL; (unsigned int)v1 < (unsigned int)KeNumberProcessors_0; v1 = (unsigned int)(v1 + 1) )
  {
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    v2 = *((_DWORD *)KiGlobalState + v1) & 0x3F;
    Affinity.Group = *((_DWORD *)KiGlobalState + v1) >> 6;
    Affinity.Mask = 1LL << v2;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    p_PreviousAffinity = 0LL;
    KeWriteProtectProcessorState(&KeGetCurrentPrcb()[-1].PrcbPad141[472]);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
