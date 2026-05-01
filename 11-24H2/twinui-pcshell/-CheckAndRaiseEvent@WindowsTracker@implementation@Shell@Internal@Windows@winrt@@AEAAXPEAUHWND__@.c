/*
 * XREFs of ?CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x18065E9DC
 * Callers:
 *     ?WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18065F420 (-WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18010FC00 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18010FE40 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ??$?RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@?$event@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowsTracker@implementation@Shell@Internal@Windows@1@AEBUWindowId@UI@61@@Z @ 0x18065DF7C (--$-RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@-$event@U-$Ev.c)
 *     ??$_Erase@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAUHWND__@@@Z @ 0x18065E044 (--$_Erase@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_compar.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::CheckAndRaiseEvent(
        RTL_SRWLOCK *this,
        HWND a2)
{
  unsigned int v2; // esi
  __int64 appended; // rax
  __int64 *Ptr; // rdx
  HWINEVENTHOOK v6; // rcx
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  HWND v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (unsigned int)a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v9, 8uLL);
  Ptr = std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
          &this[5].Ptr,
          &v7,
          &v9,
          appended)[1];
  if ( !Ptr )
    Ptr = (__int64 *)this[6].Ptr;
  if ( Ptr != this[6].Ptr )
  {
    v6 = (HWINEVENTHOOK)Ptr[3];
    if ( v6 )
      UnhookWinEvent(v6);
    std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::_Erase<HWND__ *>(
      &this[5].Ptr,
      (const unsigned __int8 *)&v9);
    v8 = v2;
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>(
      this + 13,
      (__int64)this,
      (__int64)&v8);
  }
}
