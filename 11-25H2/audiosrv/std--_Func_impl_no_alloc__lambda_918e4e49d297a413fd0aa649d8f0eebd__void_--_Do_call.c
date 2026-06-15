/*
 * XREFs of std::_Func_impl_no_alloc__lambda_918e4e49d297a413fd0aa649d8f0eebd__void_::_Do_call @ 0x1800C1270
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BF6A0 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_918e4e49d297a413fd0aa649d8f0eebd__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rax
  struct _GUID *v2; // rdx
  CAudioResourceManager *v3; // r9
  int v4; // eax
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 16));
  v5 = v2[2];
  v4 = CAudioResourceManager::ReevaluateStreamGroups(v3, v1, &v5);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
}
