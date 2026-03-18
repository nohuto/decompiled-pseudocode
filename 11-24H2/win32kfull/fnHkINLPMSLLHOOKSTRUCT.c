/*
 * XREFs of fnHkINLPMSLLHOOKSTRUCT @ 0x14007F2EC
 * Callers:
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void *__fastcall fnHkINLPMSLLHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  void *result; // rax
  int v11; // [rsp+30h] [rbp-88h] BYREF
  void *v12; // [rsp+38h] [rbp-80h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-78h] BYREF
  int v14; // [rsp+60h] [rbp-58h] BYREF
  __int64 v15; // [rsp+68h] [rbp-50h]
  __int64 v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h]
  __int128 v18; // [rsp+80h] [rbp-38h]
  __int128 v19; // [rsp+90h] [rbp-28h]

  Src[0] = 0LL;
  v11 = 0;
  memset_0(&v14, 0, 0x40uLL);
  v14 = a1;
  v15 = a2;
  *((_DWORD *)a3 + 5) = 0;
  v18 = *a3;
  v19 = a3[1];
  v16 = a4;
  v17 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  EtwTraceBeginCallback(46LL);
  v9 = KeUserModeCallback(46LL, &v14, 64LL, Src, &v11);
  EtwTraceEndCallback(46LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  if ( v9 < 0 || v11 != 24 )
    return 0LL;
  v12 = 0LL;
  RtlCopyFromUser(&v12, Src[0], 8uLL);
  result = v12;
  Src[1] = v12;
  return result;
}
