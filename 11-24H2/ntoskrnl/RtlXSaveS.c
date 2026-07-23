/*
 * XREFs of RtlXSaveS @ 0x1403D2DB0
 * Callers:
 *     KiSaveExtendedAndSupervisorState @ 0x1403D3AFC (KiSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405B5EA4 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x140988970 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x1403D3DF0 (RtlXSave.c)
 */

__int64 __fastcall RtlXSaveS(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXSave(_RCX, a2, a2);
  *(_QWORD *)(_RCX + 520) |= 0x8000000000000000uLL;
  __asm { xrstors byte ptr [rcx] }
  result = *(_QWORD *)(_RCX + 520) & a2;
  __asm { xsaves  byte ptr [rcx] }
  return result;
}
