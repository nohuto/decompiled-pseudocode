/*
 * XREFs of ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x1801E7C28
 * Callers:
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x1802B3370 (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0RegistryDataHelper@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1802AE234 (--0RegistryDataHelper@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ?ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z @ 0x1802C5434 (-ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
bool ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride(void)
{
  bool v0; // bl
  char **v2; // rax
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // [rsp+20h] [rbp-78h] BYREF
  RTL_SRWLOCK *v6; // [rsp+28h] [rbp-70h]
  char *v7; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v8[8]; // [rsp+50h] [rbp-48h] BYREF
  void *v9; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  AcquireSRWLockExclusive(&ToastSettingsHelper::m_regCheckLock);
  v6 = &ToastSettingsHelper::m_regCheckLock;
  if ( !ToastSettingsHelper::m_regCached )
  {
    v2 = std::wstring::wstring(&v7, L"Software\\Microsoft\\Windows\\CurrentVersion\\Notifications");
    RegistryDataHelper::RegistryDataHelper(v8, v3, v2);
    v5 = 0;
    v4 = RegistryDataHelper::ReadUInt32((RegistryDataHelper *)v8, L"DisableStackedPriorityToasts", 0, &v5);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2C,
        (int)"shellcommon\\internal\\shell\\inc\\ToastSettingsHelper.h",
        (const char *)(unsigned int)v4,
        v5);
    if ( v5 )
      ToastSettingsHelper::m_disabledViaRegistry = 1;
    ToastSettingsHelper::m_regCached = 1;
    std::wstring::_Tidy_deallocate(&v9);
  }
  v0 = ToastSettingsHelper::m_disabledViaRegistry;
  ReleaseSRWLockExclusive(&ToastSettingsHelper::m_regCheckLock);
  return v0;
}
