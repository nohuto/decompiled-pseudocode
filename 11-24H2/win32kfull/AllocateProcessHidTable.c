/*
 * XREFs of AllocateProcessHidTable @ 0x14012DFD4
 * Callers:
 *     _RegisterRawInputDevices @ 0x14012FA44 (_RegisterRawInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 AllocateProcessHidTable()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  result = Win32AllocPoolWithQuotaZInit(176LL, 1953002325LL);
  v3 = (_QWORD *)result;
  if ( result )
  {
    v4 = (_QWORD *)(result + 16);
    v4[1] = v4;
    *v4 = v4;
    v3[5] = v3 + 4;
    v3[4] = v3 + 4;
    v3[7] = v3 + 6;
    v3[6] = v3 + 6;
    UserSessionState = W32GetUserSessionState(v2, v1);
    v7 = 0LL;
    v8 = UserSessionState + 104;
    if ( *(struct _KTHREAD **)(UserSessionState + 112) != KeGetCurrentThread() )
    {
      v7 = UserSessionState + 104;
      RIMLockExclusive();
    }
    v9 = W32GetUserSessionState(v8, v6) + 224;
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
      __fastfail(3u);
    *v3 = v10;
    v3[1] = v9;
    *(_QWORD *)(v10 + 8) = v3;
    *(_QWORD *)v9 = v3;
    if ( v7 )
      RIMUnlockExclusive(v7);
    return (__int64)v3;
  }
  return result;
}
