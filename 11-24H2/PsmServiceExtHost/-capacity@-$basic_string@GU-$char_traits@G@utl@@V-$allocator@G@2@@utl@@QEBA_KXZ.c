/*
 * XREFs of ?capacity@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEBA_KXZ @ 0x18001D2BC
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18001C91C (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     PsmHostStateNotification2 @ 0x18001CCC0 (PsmHostStateNotification2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::capacity(
        _QWORD *a1)
{
  if ( (_QWORD *)*a1 == a1 + 2 )
    return 7LL;
  else
    return (__int64)(a1[2] - *a1) >> 1;
}
