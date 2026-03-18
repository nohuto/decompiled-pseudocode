/*
 * XREFs of PopEventCalloutDispatch @ 0x1404A9BF8
 * Callers:
 *     PopDispatchShutdownEvent @ 0x14074DDA0 (PopDispatchShutdownEvent.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPolicyTimeChange @ 0x140A09500 (PopPolicyTimeChange.c)
 *     PopDispatchCallout @ 0x140A9C330 (PopDispatchCallout.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x140A2C928 (PopInvokeWin32Callout.c)
 */

struct _KTHREAD *__fastcall PopEventCalloutDispatch(int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // r8
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  result = 0LL;
  v4[0] = 0LL;
  v4[1] = 0LL;
  v6 = 0;
  v5 = a1;
  v7 = a2;
  if ( PsWin32CalloutsEstablished )
  {
    v3 = 1LL;
    if ( a1 != 1 )
    {
      if ( a1 == 10 )
        v3 = 0LL;
      else
        v3 = 2LL;
    }
    PopInvokeWin32Callout(3LL, v4, v3);
    result = KeGetCurrentThread();
    if ( result->WaitBlock[3].SpareLong )
      __fastfail(0x20u);
  }
  return result;
}
