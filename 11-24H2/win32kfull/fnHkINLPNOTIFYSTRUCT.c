/*
 * XREFs of fnHkINLPNOTIFYSTRUCT @ 0x1402BB5E0
 * Callers:
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x140287804 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall fnHkINLPNOTIFYSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  int v12; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+58h] [rbp-50h]
  int v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+68h] [rbp-40h]
  int v18; // [rsp+70h] [rbp-38h]
  __int64 v19; // [rsp+78h] [rbp-30h]
  __int64 v20; // [rsp+80h] [rbp-28h]
  int v21; // [rsp+88h] [rbp-20h]
  int v22; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+10h] BYREF
  void *Src; // [rsp+C8h] [rbp+20h] BYREF

  v23 = a2;
  Src = 0LL;
  v22 = 0;
  memset_0(&v12, 0, 0x60uLL);
  v12 = a1;
  v13 = 0LL;
  v17 = *(_QWORD *)(a3 + 32);
  v18 = *(_DWORD *)(a3 + 48);
  v19 = *(int *)(a3 + 40);
  v20 = *(int *)(a3 + 44);
  v21 = *(_DWORD *)(a3 + 52);
  v14 = 0LL;
  v15 = a5;
  v16 = *a6;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v23, v8, v9);
  EtwTraceBeginCallback(127LL);
  v10 = KeUserModeCallback(127LL, &v12, 96LL, &Src, &v22);
  EtwTraceEndCallback(127LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v23);
  if ( v10 < 0 || v22 != 24 )
    return 0LL;
  v23 = 0LL;
  RtlCopyFromUser(&v23, Src, 8uLL);
  a5 = v23;
  return (unsigned int)v23;
}
