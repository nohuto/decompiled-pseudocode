/*
 * XREFs of ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180577CA4
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805767B0 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x180056DD0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TryGetProcessCommandLine(__int64 a1, DWORD a2)
{
  char *v3; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rsi
  ULONG ProcessInformationLength; // [rsp+30h] [rbp-50h] BYREF
  void *v8[3]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v9; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  v3 = (char *)OpenProcess(0x1000u, 0, a2);
  v8[0] = v3;
  if ( (unsigned __int64)(v3 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (ProcessInformationLength = 0,
        NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, 0LL, 0, &ProcessInformationLength) != -1073741820) )
  {
LABEL_8:
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    goto LABEL_9;
  }
  v4 = (__int64 *)LocalAlloc(0x40u, ProcessInformationLength);
  v5 = v4;
  v8[2] = v4;
  if ( !v4
    || NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, v4, ProcessInformationLength, 0LL) )
  {
    if ( v5 )
      LocalFree(v5);
    goto LABEL_8;
  }
  std::wstring::wstring((__int64)&v9, v5[1], (unsigned __int64)*(unsigned __int16 *)v5 >> 1);
  *(_OWORD *)a1 = v9;
  *(__m128i *)(a1 + 16) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v9) = 0;
  std::wstring::_Tidy_deallocate((void **)&v9);
  LocalFree(v5);
LABEL_9:
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v8);
  return a1;
}
