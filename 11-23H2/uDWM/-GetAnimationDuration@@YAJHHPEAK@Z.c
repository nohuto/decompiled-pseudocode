/*
 * XREFs of ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800096D0
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x180014014 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x1800AB34C (-GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetAnimationDuration(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v6; // edx
  __int64 Theme; // r14
  int ThemeAnimationProperty; // ebx
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // rbp
  _BYTE v13[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+20h] BYREF

  *a3 = 0;
  Theme = CDesktopManager::GetTheme(3LL);
  if ( Theme )
  {
    v15 = 0;
    ThemeAnimationProperty = GetThemeAnimationProperty(Theme, a1, v6, 1LL, &v15, 4, v13);
    if ( ThemeAnimationProperty >= 0 )
    {
      v9 = 0;
      v10 = 0;
      if ( v15 )
      {
        while ( ThemeAnimationProperty >= 0 )
        {
          v14 = 0;
          ThemeAnimationProperty = GetThemeAnimationTransform(Theme, a1, a2, v10, 0LL, 0, &v14);
          if ( ThemeAnimationProperty == -2147024662 )
          {
            v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v14);
            if ( v11 )
            {
              ThemeAnimationProperty = GetThemeAnimationTransform(Theme, a1, a2, v10, v11, v14, &v14);
              if ( ThemeAnimationProperty >= 0 )
              {
                if ( v10 )
                {
                  if ( v9 <= *(_DWORD *)(v11 + 8) + *(_DWORD *)(v11 + 12) )
                    v9 = *(_DWORD *)(v11 + 8) + *(_DWORD *)(v11 + 12);
                }
                else
                {
                  v9 = *(_DWORD *)(v11 + 8) + *(_DWORD *)(v11 + 12);
                }
              }
              (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                v11);
            }
            else
            {
              ThemeAnimationProperty = -2147024882;
            }
          }
          if ( ++v10 >= v15 )
          {
            if ( ThemeAnimationProperty < 0 )
              return (unsigned int)ThemeAnimationProperty;
            goto LABEL_13;
          }
        }
      }
      else
      {
LABEL_13:
        *a3 = v9;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)ThemeAnimationProperty;
}
