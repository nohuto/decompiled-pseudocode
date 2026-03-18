/*
 * XREFs of NtGdiCreateOPMProtectedOutput @ 0x14014EB10
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14004C930 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x14008B358 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutput(_OWORD *a1, void **a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  ULONG64 v6; // rcx
  __int64 SessionState; // rax
  int v8; // eax
  int v9; // ebx
  int v10; // [rsp+30h] [rbp-48h] BYREF
  void *v11; // [rsp+38h] [rbp-40h] BYREF
  struct _LUID v12[2]; // [rsp+40h] [rbp-38h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    v11 = (void *)-1LL;
    *(_OWORD *)&v12[0].LowPart = 0LL;
    v6 = (ULONG64)(a1 + 1);
    if ( a1 + 1 < a1 || v6 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v12[0].LowPart = *a1;
    v10 = 0;
    SessionState = W32GetSessionState(v6);
    v8 = COPM::CreateProtectedOutput(
           *(COPM **)(*(_QWORD *)(SessionState + 88) + 3648LL),
           (enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS)v12[1].HighPart,
           v12,
           v12[1].LowPart,
           &v11,
           &v10);
    v9 = 0;
    if ( v8 < 0 )
      v9 = v8;
    if ( v10 && v9 >= 0 )
      v9 = -1073741198;
    if ( (unsigned __int64)(a2 + 1) > MmUserProbeAddress || a2 + 1 <= a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v11;
    UserSessionSwitchLeaveCritWithNonPaged();
    if ( v9 < 0 )
      return (unsigned int)v9;
    return v5;
  }
  return result;
}
