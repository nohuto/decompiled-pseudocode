/*
 * XREFs of ??$_Integral_to_string@GH@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@H@Z @ 0x1800DF680
 * Callers:
 *     ?EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0CB8 (-EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x1800DF5B0 (--$_Construct@$00PEAG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEAG_K@Z.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x1800DF720 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 */

__int64 __fastcall std::_Integral_to_string<unsigned short,int>(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  _BYTE v6[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a2 >= 0 )
  {
    v3 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v6);
  }
  else
  {
    v3 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v6) - 2;
    *(_WORD *)v3 = 45;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = v4;
  if ( (_BYTE *)v3 == v6 )
  {
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = v4;
  }
  else
  {
    std::wstring::_Construct<1,unsigned short *>(a1, (const void *)v3, (__int64)&v6[-v3] >> 1);
  }
  return a1;
}
