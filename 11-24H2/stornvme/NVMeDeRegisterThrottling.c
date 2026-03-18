/*
 * XREFs of NVMeDeRegisterThrottling @ 0x140016830
 * Callers:
 *     NVMeDisableThrottling @ 0x1400167B0 (NVMeDisableThrottling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeDeRegisterThrottling(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 result; // rax

  if ( a2 < 0 )
    return 3238002695LL;
  v4 = a1 + 8LL * a2;
  v5 = *(_QWORD *)(v4 + 3824);
  if ( !v5 )
    return 3238002695LL;
  result = StorPortExtendedFunction(1LL, a1, v5, a4);
  *(_QWORD *)(v4 + 3824) = 0LL;
  return result;
}
