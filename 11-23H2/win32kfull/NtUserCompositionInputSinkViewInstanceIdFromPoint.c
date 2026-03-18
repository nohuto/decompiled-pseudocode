/*
 * XREFs of NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1C01CD450
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     RequestInputSinkInfoFromPoint @ 0x1C01E5FFC (RequestInputSinkInfoFromPoint.c)
 */

__int64 __fastcall NtUserCompositionInputSinkViewInstanceIdFromPoint(__int64 *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  int v8; // ebx
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+50h] [rbp-78h] BYREF
  __int64 v15; // [rsp+54h] [rbp-74h]
  int v16; // [rsp+5Ch] [rbp-6Ch]
  int v17; // [rsp+B8h] [rbp-10h]

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 0LL);
  memset_0(&v14, 0, 0x70uLL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v8 = 0;
    UserSetLastError(5);
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v15 = *a1;
    v14 = 8;
    v16 = 0;
    v8 = RequestInputSinkInfoFromPoint(&v14);
    if ( v8 )
    {
      v10 = MmUserProbeAddress;
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v17;
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v8;
}
