/*
 * XREFs of fnHkINLPCBTACTIVATESTRUCT @ 0x1401E8FAC
 * Callers:
 *     xxxCallCtfHook @ 0x14007FC80 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  _DWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp-10h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+10h] BYREF

  Src = 0LL;
  v12 = 0;
  v7[1] = 0;
  v7[0] = a1;
  v8 = a2;
  *((_DWORD *)a3 + 1) = 0;
  v9 = *a3;
  v10 = a4;
  v11 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(41LL);
  v5 = KeUserModeCallback(41LL, v7, 48LL, &Src, &v12);
  EtwTraceEndCallback(41LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  if ( v5 < 0 || v12 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  return a5;
}
