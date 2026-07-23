/*
 * XREFs of EtwpObjectHandleRundown @ 0x1407B13BC
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(PEPROCESS Process, __int64 a2)
{
  __int64 v4; // rdi

  v4 = ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 44) = (unsigned int)PsGetProcessId(Process);
    *(_BYTE *)(a2 + 68) = (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0;
    ExEnumHandleTable(v4, EtwpObjectHandleEnumCallback, a2, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
}
