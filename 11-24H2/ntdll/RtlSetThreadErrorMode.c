/*
 * XREFs of RtlSetThreadErrorMode @ 0x1800E8BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetThreadErrorMode(ULONG NewMode, PULONG OldMode)
{
  struct _TEB *v3; // rcx
  __int64 WowTebOffset; // rax
  ULONG HardErrorMode; // eax

  if ( (NewMode & 0xFFFFFF8F) != 0 )
    return -1073741585;
  v3 = NtCurrentTeb();
  WowTebOffset = v3->WowTebOffset;
  if ( (int)WowTebOffset < 0 )
    v3 = (struct _TEB *)((char *)v3 + WowTebOffset);
  if ( OldMode )
  {
    if ( (_DWORD)v3 == LODWORD(v3->NtTib.SubSystemTib) )
      HardErrorMode = (ULONG)v3->glDispatchTable[167];
    else
      HardErrorMode = v3->HardErrorMode;
    *OldMode = HardErrorMode;
  }
  if ( (_DWORD)v3 == LODWORD(v3->NtTib.SubSystemTib) )
    LODWORD(v3->glDispatchTable[167]) = NewMode;
  else
    v3->HardErrorMode = NewMode;
  return 0;
}
