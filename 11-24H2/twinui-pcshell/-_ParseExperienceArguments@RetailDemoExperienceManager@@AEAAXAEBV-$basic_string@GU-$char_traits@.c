/*
 * XREFs of ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803A63B0
 * Callers:
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1803A52C0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x1800D93AC (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801C3264 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1802A60C8 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x1803A6650 (-_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803A677C (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1803A6B84 (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall RetailDemoExperienceManager::_ParseExperienceArguments(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // r14
  char *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  DWORD pdwDefaultLayout; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-21h] BYREF
  char *v10[3]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v11[16]; // [rsp+58h] [rbp+Fh] BYREF
  void *v12[4]; // [rsp+68h] [rbp+1Fh] BYREF

  RetailDemoExperienceManager::_SetDefaults((RetailDemoExperienceManager *)a1);
  RetailDemoExperienceManager::_SplitString(v9, v2, 38LL);
  v3 = v9[0];
  v4 = v9[1];
  while ( v3 != v4 )
  {
    std::wstring::wstring((__int64)v12, v3);
    RetailDemoExperienceManager::_SplitString(v10, v12, 61LL);
    v5 = v10[0];
    if ( (unsigned int)std::wstring::compare(v10[0], (char *)L"zBand") )
    {
      if ( (unsigned int)std::wstring::compare(v5, (char *)L"topmost") )
      {
        if ( (unsigned int)std::wstring::compare(v5, (char *)L"docked") )
        {
          if ( (unsigned int)std::wstring::compare(v5, (char *)L"dockedSide") )
          {
            if ( (unsigned int)std::wstring::compare(v5, (char *)L"adjustDesktop") )
            {
              if ( (unsigned int)std::wstring::compare(v5, (char *)L"dockedWidth") )
              {
                if ( (unsigned int)std::wstring::compare(v5, (char *)L"dockedMargin") )
                {
                  if ( (unsigned int)std::wstring::compare(v5, (char *)L"dockedHeight") )
                  {
                    if ( !(unsigned int)std::wstring::compare(v5, (char *)L"floatingRect") )
                      *(_OWORD *)(a1 + 364) = *(_OWORD *)RetailDemoExperienceManager::_ParseScreenRect(v11, v5 + 32);
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 360) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 32, 0LL, 0LL);
                  }
                }
                else
                {
                  LOBYTE(v7) = 1;
                  *(_DWORD *)(a1 + 356) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 32, v7, 0LL);
                }
              }
              else
              {
                LOBYTE(v6) = 1;
                *(_DWORD *)(a1 + 352) = RetailDemoExperienceManager::_ParseScreenInt(v5 + 32, v6, 0LL);
              }
            }
            else
            {
              *(_BYTE *)(a1 + 381) = (unsigned int)std::wstring::compare(v5 + 32, (char *)L"true") == 0;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 382) = (unsigned int)std::wstring::compare(v5 + 32, (char *)L"right") == 0;
            pdwDefaultLayout = 0;
            GetProcessDefaultLayout(&pdwDefaultLayout);
            if ( pdwDefaultLayout == 1 )
              *(_BYTE *)(a1 + 382) = *(_BYTE *)(a1 + 382) == 0;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 380) = (unsigned int)std::wstring::compare(v5 + 32, (char *)L"true") == 0;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 348) = (unsigned int)std::wstring::compare(v5 + 32, (char *)L"true") == 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 344) = _o__wtol();
    }
    std::vector<std::wstring>::_Tidy((__int64)v10);
    std::wstring::_Tidy_deallocate(v12);
    v3 += 32LL;
  }
  std::vector<std::wstring>::_Tidy((__int64)v9);
}
