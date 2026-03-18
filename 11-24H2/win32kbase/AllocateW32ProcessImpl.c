/*
 * XREFs of AllocateW32ProcessImpl @ 0x140166B20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x140166A04 (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 *     Win32FreePoolWithSessionHint @ 0x1401BECE0 (Win32FreePoolWithSessionHint.c)
 *     W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401BF12C (W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___.c)
 */

__int64 __fastcall AllocateW32ProcessImpl(struct _EPROCESS *a1)
{
  int v2; // edi
  __int64 v3; // rbp
  unsigned int ProcessSessionId; // eax
  unsigned int v5; // r14d
  tagPROCESSINFO *v6; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  tagPROCESSINFO *v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = 1073741851;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1) + 42600);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v3);
  if ( !PsGetProcessWin32Process(a1) )
  {
    ProcessSessionId = PsGetProcessSessionIdEx(a1);
    v10 = 0LL;
    v5 = ProcessSessionId;
    v8[1] = 256LL;
    v8[2] = 1224LL;
    v8[0] = &v10;
    v9 = 1768977237;
    if ( (int)W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02_(ProcessSessionId, v8) >= 0
      && (v6 = v10) != 0LL )
    {
      tagPROCESSINFO::tagPROCESSINFO(v10, a1);
      v2 = PsSetProcessWin32Process(a1, v6, 0LL);
      if ( v2 < 0 )
      {
        Win32FreePoolWithSessionHint(v6, v5);
        UserSetLastError(5);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v6);
        _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      }
    }
    else
    {
      UserSetLastError(8);
      v2 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v3);
  return (unsigned int)v2;
}
