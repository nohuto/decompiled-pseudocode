/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D1000
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceRects @ 0x1C008AEE4 (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C008AFDC (GetScreenRect.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _MonitorFromPoint @ 0x1C00AEBB0 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01B9468 (GetHimetricScaleForMonitor.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  unsigned int v11; // esi
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v20[4]; // [rsp+20h] [rbp-98h] BYREF
  int v21; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v22[6]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v24[16]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v25; // [rsp+68h] [rbp-50h] BYREF
  __int128 v26; // [rsp+78h] [rbp-40h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  v25 = 0LL;
  v23[0] = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_18;
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v23, 0LL) || *(_DWORD *)(v23[0] + 24LL) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &v25) )
    {
      v10 = 1;
      v11 = 1;
      v22[0] = 1;
      v12 = 1;
      v21 = 1;
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v26 = *(_OWORD *)GetScreenRect((__int64)v24);
        v13 = v25 - v26;
        if ( (_QWORD)v25 == (_QWORD)v26 )
          v13 = *((_QWORD *)&v25 + 1) - *((_QWORD *)&v26 + 1);
        if ( !v13 )
        {
          v14 = MonitorFromPoint(a2, 2LL, 0LL);
          GetHimetricScaleForMonitor(v14, &v21, v22);
          v12 = v21;
          v11 = v22[0];
        }
      }
      goto LABEL_13;
    }
LABEL_18:
    v10 = 0;
    UserSetLastError(87);
    goto LABEL_19;
  }
  v10 = 1;
  v11 = 1;
  v22[0] = 1;
  v12 = 1;
  v21 = 1;
LABEL_13:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v12;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_DWORD *)MmUserProbeAddress;
  *a4 = v11;
  v22[4] = 1;
LABEL_19:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20, v8, v9);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v10;
}
