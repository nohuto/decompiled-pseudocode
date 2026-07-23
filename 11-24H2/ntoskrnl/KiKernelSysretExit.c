/*
 * XREFs of KiKernelSysretExit @ 0x140BBEDC0
 * Callers:
 *     KiCallUserMode @ 0x1406AC440 (KiCallUserMode.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 * Callees:
 *     <none>
 */

void KiKernelSysretExit()
{
  unsigned int ShadowFlags; // esp
  unsigned __int64 UserDirectoryTableBase; // rbp
  char v2; // sp
  char v3; // sp
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  ShadowFlags = KeGetPcr()->Prcb.ShadowFlags;
  if ( (ShadowFlags & 2) == 0 )
  {
    UserDirectoryTableBase = KeGetCurrentThread()->Process->UserDirectoryTableBase;
    if ( (UserDirectoryTableBase & 1) != 0 )
    {
      if ( (v2 & 1) != 0 )
        __writegsdword(0xB018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
      else
        UserDirectoryTableBase |= 0x8000000000000000uLL;
    }
    __writecr3(UserDirectoryTableBase);
  }
  if ( (v3 & 2) == 0 )
    __asm { verw    word ptr gs:0B02Ah }
  __asm { rdsspq  rsp }
  if ( &retaddr )
    __asm { clrssbsy qword ptr [rsp+0] }
  __asm
  {
    swapgs
    sysret
  }
}
