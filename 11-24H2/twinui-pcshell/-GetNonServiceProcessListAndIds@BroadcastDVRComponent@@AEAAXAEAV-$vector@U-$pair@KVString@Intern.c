/*
 * XREFs of ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1800A5B20
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x18001BDE0 (--$_Destroy_range@V-$allocator@U-$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU-$pai.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x1800A5D84 (-_Tidy@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x180294F40 (--$_Reallocate@$0A@@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVStr.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@U?$pair@KVString@Internal@Windows@@@std@@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAPEAU?$pair@KVString@Internal@Windows@@@1@QEAU21@$$QEAU21@@Z @ 0x180314390 (--$_Emplace_reallocate@U-$pair@KVString@Internal@Windows@@@std@@@-$vector@U-$pair@KVString@Inter.c)
 *     _alloca_probe @ 0x1806CA270 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::GetNonServiceProcessListAndIds(__int64 a1, __int64 a2)
{
  const char *v4; // r9
  __int64 v5; // rbx
  DWORD v6; // esi
  __int64 v7; // r15
  __int64 v8; // rdi
  DWORD v9; // r12d
  PCWSTR StringRawBuffer; // rax
  HSTRING v11; // rax
  HSTRING v12; // rcx
  void *v13; // rsi
  HSTRING string; // [rsp+20h] [rbp-1078h] BYREF
  DWORD cbNeeded; // [rsp+28h] [rbp-1070h] BYREF
  __int128 v16; // [rsp+30h] [rbp-1068h] BYREF
  __int64 v17; // [rsp+40h] [rbp-1058h]
  DWORD v18; // [rsp+48h] [rbp-1050h] BYREF
  HSTRING v19; // [rsp+50h] [rbp-1048h]
  DWORD idProcess[1024]; // [rsp+60h] [rbp-1038h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1098h] [rbp+0h]

  cbNeeded = 0;
  if ( K32EnumProcesses(idProcess, 0x1000u, &cbNeeded) )
  {
    v16 = 0LL;
    v5 = 0LL;
    v17 = 0LL;
    try
    {
      v6 = cbNeeded >> 2;
      string = (HSTRING)(cbNeeded >> 2);
      if ( cbNeeded >> 2 )
      {
        std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Reallocate<0>(&v16, &string);
        v5 = v17;
      }
      v7 = 0LL;
      v8 = *((_QWORD *)&v16 + 1);
      while ( (unsigned int)v7 < v6 )
      {
        string = 0LL;
        v9 = idProcess[v7];
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, HSTRING *))(**(_QWORD **)(a1 + 256) + 104LL))(
               *(_QWORD *)(a1 + 256),
               v9,
               &string) >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          if ( (unsigned int)_o__wcsicmp(StringRawBuffer, L"svchost.exe") )
          {
            v18 = v9;
            v11 = string;
            v19 = string;
            string = 0LL;
            if ( v8 == v5 )
            {
              std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Emplace_reallocate<std::pair<unsigned long,Windows::Internal::String>>(
                &v16,
                v8,
                &v18);
              v5 = v17;
              v8 = *((_QWORD *)&v16 + 1);
              v12 = v19;
            }
            else
            {
              *(_DWORD *)v8 = v9;
              *(_QWORD *)(v8 + 8) = v11;
              v12 = 0LL;
              v8 += 16LL;
              *((_QWORD *)&v16 + 1) = v8;
            }
            if ( v12 )
              WindowsDeleteString(v12);
          }
        }
        if ( string )
          WindowsDeleteString(string);
        v7 = (unsigned int)(v7 + 1);
      }
      if ( (__int128 *)a2 != &v16 )
      {
        std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(a2);
        *(_QWORD *)a2 = v16;
        *(_QWORD *)(a2 + 8) = v8;
        *(_QWORD *)(a2 + 16) = v5;
        v16 = 0LL;
        v5 = 0LL;
        v8 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      }
      v13 = (void *)v16;
      if ( (_QWORD)v16 )
      {
        std::_Destroy_range<std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(v16, v8);
        std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)((v5 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF0uLL));
      }
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x873,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)0x8007000ELL);
      std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(&v16);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x853,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      v4);
  }
}
