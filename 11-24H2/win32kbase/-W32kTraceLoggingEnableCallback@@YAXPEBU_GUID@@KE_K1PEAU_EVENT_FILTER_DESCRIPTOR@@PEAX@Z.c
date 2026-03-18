/*
 * XREFs of ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140150EA0
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401B37D4 (W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::_lambda_32f3cb84696a90cec3124b3263005914_ @ 0x1401B3C34 (_lambda_32f3cb84696a90cec3124b3263005914_--_lambda_32f3cb84696a90cec3124b3263005914_.c)
 */

void __fastcall W32kTraceLoggingEnableCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  const struct _GUID *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 == 2 )
  {
    v7 = a4;
    v6 = a1;
    v4 = lambda_32f3cb84696a90cec3124b3263005914_::_lambda_32f3cb84696a90cec3124b3263005914_(v5, &v6, &v7);
    W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(v4);
  }
}
