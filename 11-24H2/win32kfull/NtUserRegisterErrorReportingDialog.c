/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x14029B290
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1402ACF34 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 */

__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 *v7; // r8
  int v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+24h] [rbp-34h]
  int v11; // [rsp+2Ch] [rbp-2Ch]
  int v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+34h] [rbp-24h]
  __int64 v14; // [rsp+3Ch] [rbp-1Ch]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 && !(unsigned int)IsWindowBeingDestroyed(v4) )
  {
    v13 = *v7;
    v10 = 0LL;
    v12 = 0;
    v14 = 0LL;
    v9 = 4;
    v11 = a2;
    v6 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v9);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
