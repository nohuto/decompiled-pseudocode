/*
 * XREFs of xxxClientCallWinEventProc @ 0x14015A8E4
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x140041720 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebx
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]
  int v14; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h]

  Src = 0LL;
  v14 = 0;
  v8 = 0;
  v6[0] = a1;
  if ( a2 )
    v3 = *a2;
  else
    v3 = 0LL;
  v6[1] = v3;
  v9 = *(_QWORD *)(a3 + 32);
  v7 = *(_DWORD *)(a3 + 28);
  v10 = *(_DWORD *)(a3 + 40);
  v11 = *(_DWORD *)(a3 + 44);
  v12 = *(_DWORD *)(a3 + 48);
  v13 = *(_DWORD *)(a3 + 52);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16);
  EtwTraceBeginCallback(88LL);
  v4 = KeUserModeCallback(88LL, v6, 48LL, &Src, &v14);
  EtwTraceEndCallback(88LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16);
  if ( v4 < 0 || v14 != 24 )
    return 0LL;
  v16 = 0LL;
  RtlCopyFromUser(&v16, Src, 8uLL);
  result = v16;
  v17 = v16;
  return result;
}
