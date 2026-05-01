/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x1804679FC
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x180468D54 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76f340d5d82a2.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  std::wstring::wstring((__int64)(a1 + 4), (__int64)(a2 + 2));
  std::wstring::wstring((__int64)(a1 + 8), (__int64)(a2 + 6));
  *a1 = &off_180742B38;
  return a1;
}
