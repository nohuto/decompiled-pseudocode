/*
 * XREFs of MiAllowGuardFault @ 0x14045D6F0
 * Callers:
 *     MiAccessCheck @ 0x1403071E0 (MiAccessCheck.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1402FC4D0 (KeInvalidAccessAllowed.c)
 */

__int64 __fastcall MiAllowGuardFault(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v2; // eax
  _BYTE *v3; // rdx
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex != 1 )
  {
    v2 = a1 & 1;
    v3 = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1 & 1) != 0 )
    {
      if ( *v3 != 1 && *v3 != 3 && *v3 != 6 )
        goto LABEL_5;
      v4 = *v3 == 6;
    }
    else
    {
      v4 = !KeInvalidAccessAllowed(a1, 0);
    }
    if ( v4 )
    {
LABEL_5:
      LOBYTE(v2) = ~CurrentThread->SameThreadTransientFlags;
      return (v2 >> 2) & 1;
    }
  }
  return 0LL;
}
