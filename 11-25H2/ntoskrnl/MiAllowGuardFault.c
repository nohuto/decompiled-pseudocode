/*
 * XREFs of MiAllowGuardFault @ 0x1403E1AB0
 * Callers:
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiAccessCheck @ 0x1403E1820 (MiAccessCheck.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1403E2860 (KeInvalidAccessAllowed.c)
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
      v2 = KeInvalidAccessAllowed(a1, 0LL);
      v4 = (_BYTE)v2 == 0;
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
