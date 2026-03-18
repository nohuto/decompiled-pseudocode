/*
 * XREFs of SendWinlogonPowerMessageWorker @ 0x1401B33B0
 * Callers:
 *     xxxSendWinlogonPowerMessage @ 0x140092060 (xxxSendWinlogonPowerMessage.c)
 * Callees:
 *     ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1401B31AC (--0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z.c)
 *     ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401B31EC (--1CAcquireReleaseRundownProtection@@QEAA@XZ.c)
 *     WmsgpSendPSPMessage @ 0x1402C378C (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall SendWinlogonPowerMessageWorker(__int64 a1, __int128 *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // rcx
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm6
  __int64 v10; // rax
  int v11; // eax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v14; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v13 = 0;
  v4 = a1;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1) + 69376) )
    return 0LL;
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v5);
  CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection(
    (CAcquireReleaseRundownProtection *)&v14,
    UserSessionState + 8673);
  if ( v14 )
  {
    v9 = *a2;
    v10 = W32GetUserSessionState(v8);
    v12 = v9;
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int128 *, unsigned int *))WmsgpSendPSPMessage)(
            *(_QWORD *)(v10 + 69376),
            v4,
            &v12,
            &v13);
    v2 = v13;
    if ( v11 < 0 )
      v2 = v11;
  }
  CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection(&v14);
  return v2;
}
