/*
 * XREFs of ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800A9300
 * Callers:
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800A9300 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800A96E0 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x1800AA2D8 (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180131A60 (-OnConnected@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180132780 (-OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A9068 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800A9300 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     ?NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z @ 0x1800A95EC (-NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CUIHierarchy::ModifyInputDisabledStateAndPropagate(__int64 a1, __int64 a2, int a3, char a4)
{
  _DWORD *v8; // rbx
  unsigned int v9; // edi
  int *v10; // rcx
  int v11; // r9d
  bool v12; // r14
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 i; // rbx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+28h] [rbp-20h] BYREF

  CUIHierarchy::FindWindowW(a1, v18, a2);
  if ( v18[0] )
  {
    v8 = (_DWORD *)(v18[0] + 32);
    v9 = *(_DWORD *)(v18[0] + 32);
    v10 = (int *)(v18[0] + 32);
    v11 = a4 ? a3 | v9 : v9 & ~a3;
    *v10 = v11;
    CUIHierarchy::NotifyWindowOfInputDisabledStateChange(v10, a2, v9);
    v12 = *v8 != 0;
    if ( (v9 != 0) != v12 )
    {
      CUIHierarchy::FindWindowW(a1, &v17, a2);
      if ( v17 )
      {
        v14 = *(_QWORD *)(v17 + 72);
        for ( i = *(_QWORD *)(v17 + 64); i != v14; i += 8LL )
        {
          if ( !*(_BYTE *)(*(_QWORD *)i + 48LL) )
          {
            LOBYTE(v13) = v12;
            CUIHierarchy::ModifyInputDisabledStateAndPropagate(a1, *(_QWORD *)(*(_QWORD *)i + 16LL), 4LL, v13);
          }
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    }
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
}
