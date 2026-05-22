/*
 * XREFs of ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800CB914
 * Callers:
 *     ?GetDeviceInstanceId@pnphelper@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800CB26C (-GetDeviceInstanceId@pnphelper@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B3454 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800CB544 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800CBA3C (-GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV-$vector@V-$basic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Details::GetDeviceStringProperty(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  int DeviceStringProperty; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  char *v8; // rbx
  const char *v9; // r9
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  v11 = 0LL;
  DeviceStringProperty = Details::GetDeviceStringProperty(a1, a2, a3, &v10);
  v6 = DeviceStringProperty;
  if ( DeviceStringProperty >= 0 )
  {
    v8 = (char *)v10;
    if ( *((_QWORD *)&v10 + 1) - (_QWORD)v10 == 32LL )
    {
      try
      {
        std::wstring::operator=(a4, (void *)v10);
        if ( v8 )
        {
          std::_Destroy_range<std::allocator<std::wstring>>((__int64)v8, *((__int64 *)&v10 + 1));
          std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v11 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFE0uLL));
        }
        result = 0LL;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x74,
                               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelp"
                                             "er\\lib\\details.cpp",
                               v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\details.cpp",
        (const char *)0x80004005LL);
      if ( v8 )
      {
        std::_Destroy_range<std::allocator<std::wstring>>((__int64)v8, *((__int64 *)&v10 + 1));
        std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v11 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFE0uLL));
      }
      return 2147500037LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\details.cpp",
      (const char *)(unsigned int)DeviceStringProperty);
    if ( (_QWORD)v10 )
    {
      std::_Destroy_range<std::allocator<std::wstring>>(v10, *((__int64 *)&v10 + 1));
      std::_Deallocate<16,0>((char *)v10, (const struct std::nothrow_t *)((v11 - v10) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    return v6;
  }
  return result;
}
