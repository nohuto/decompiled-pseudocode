/*
 * XREFs of ?_Tidy@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXXZ @ 0x180053D04
 * Callers:
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$0 @ 0x1801C9020 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$0.c)
 *     _InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x1801D2580 (_InputSinkDataCache--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<NotificationData>::_Tidy(char **a1, __int64 a2)
{
  char *v2; // rbx
  char *v4; // rsi
  __int64 v5; // rcx
  char *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  char *v8; // r8
  char *v9; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    while ( v2 != v4 )
    {
      v5 = *((_QWORD *)v2 + 2);
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v5, a2);
      v2 += 96;
    }
    v6 = *a1;
    v7 = (const struct std::nothrow_t *)(32 * ((a1[2] - *a1) >> 5));
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      v8 = (char *)*((_QWORD *)v6 - 1);
      v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
      v9 = (char *)(v6 - v8);
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v9, v7);
        __debugbreak();
        JUMPOUT(0x180053DC3LL);
      }
      v6 = v8;
    }
    operator delete(v6, v7);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
