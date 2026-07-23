/*
 * XREFs of RtlXRestoreS @ 0x1403FF3D8
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1403FF0E0 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x1405B5E20 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x140988D80 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x1403FFDDC (RtlXRestore.c)
 */

__int64 __fastcall RtlXRestoreS(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXRestore(_RCX, a2, a2);
  result = a2 & *(_QWORD *)(_RCX + 520);
  __asm { xrstors byte ptr [rcx] }
  return result;
}
