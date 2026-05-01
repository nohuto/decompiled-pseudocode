/*
 * XREFs of wistd::__function::__func__lambda_98227cc44fc411baa733b74fce958f12__void___cdecl(void)_::operator() @ 0x18034AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@W4GameBarFseWarmLaunchKind@@@Z @ 0x18034D73C (-GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@W4GameBarFse.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_98227cc44fc411baa733b74fce958f12__void___cdecl_void__::operator()(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  result = IsGamingFullScreenExperienceActive();
  if ( (_DWORD)result )
    return GamingOverlayExperienceManager::GameBarFseWarmLaunch(v1, &v3, 1LL);
  return result;
}
