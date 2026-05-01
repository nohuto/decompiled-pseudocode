/*
 * XREFs of ??0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18001D280
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18001C91C (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     PsmHostStateNotification2 @ 0x18001CCC0 (PsmHostStateNotification2.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA@XZ @ 0x180066D58 (--0-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA@XZ.c)
 */

__int64 __fastcall ModernResourceEnforcer::ModernResourceEnforcerWorkItem::ModernResourceEnforcerWorkItem(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *this,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
    (char *)this + 8,
    a2,
    this);
  *(_QWORD *)(v2 + 112) = 0LL;
  result = v2;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_DWORD *)(v2 + 128) = 0;
  *(_OWORD *)(v2 + 136) = 0LL;
  return result;
}
