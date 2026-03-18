/*
 * XREFs of IsFreeMessageListSupported @ 0x1C00386BC
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0038040 (UserDeleteW32Thread.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B1DA0 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     zzzDestroyQueue @ 0x1C012DDA0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeMessageListSupported()
{
  if ( qword_1C02955B0 )
    return qword_1C02955B0();
  else
    return 3221225659LL;
}
