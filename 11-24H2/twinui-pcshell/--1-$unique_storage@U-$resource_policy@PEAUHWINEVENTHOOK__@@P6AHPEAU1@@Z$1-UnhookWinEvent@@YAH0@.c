/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18046C968
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18046C95C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1-Unhoo.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18046CB28 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804F8ED8 (--1GamingPosturePositioner@@UEAA@XZ.c)
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180503C88 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>(
        HWINEVENTHOOK *a1)
{
  HWINEVENTHOOK v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return UnhookWinEvent(v1);
  return result;
}
