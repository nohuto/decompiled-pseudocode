/*
 * XREFs of ?DispBrokerAsyncRefreshOrientation@@YAJIKW4ORIENTATION_PREFERENCE@@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401A8A30
 * Callers:
 *     <none>
 * Callees:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___ @ 0x1401A871C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___.c)
 */

__int64 __fastcall DispBrokerAsyncRefreshOrientation(
        __int64 a1,
        int a2,
        int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v8 = a1;
  W32GetUserSessionState(a1);
  v7[0] = &v8;
  v7[1] = &v9;
  v7[2] = &v10;
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_8341fb6a1f9e9c95dd045a579bb39db4___(
           v5,
           a4,
           (__int64)v7);
}
