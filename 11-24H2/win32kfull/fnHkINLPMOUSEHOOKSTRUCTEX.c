/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x14007F02C
 * Callers:
 *     xxxCallCtfHook @ 0x14007FC80 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void *__fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int *a6)
{
  int v10; // ebx
  void *v11; // rbx
  void *v12; // rdx
  void *v14; // [rsp+30h] [rbp-A8h] BYREF
  int v15; // [rsp+38h] [rbp-A0h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-98h] BYREF
  int v17; // [rsp+60h] [rbp-78h] BYREF
  __int64 v18; // [rsp+68h] [rbp-70h]
  __int64 v19; // [rsp+70h] [rbp-68h]
  __int64 v20; // [rsp+78h] [rbp-60h]
  int v21; // [rsp+80h] [rbp-58h]
  __int128 v22; // [rsp+88h] [rbp-50h]
  __int128 v23; // [rsp+98h] [rbp-40h]
  __int64 v24; // [rsp+A8h] [rbp-30h]

  Src[0] = 0LL;
  v15 = 0;
  memset_0(&v17, 0, 0x50uLL);
  v17 = a1;
  v18 = a2;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 9) = 0;
  v22 = *a3;
  v23 = a3[1];
  v24 = *((_QWORD *)a3 + 4);
  v19 = a4;
  v20 = a5;
  v21 = *a6;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v14);
  EtwTraceBeginCallback(44LL);
  v10 = KeUserModeCallback(44LL, &v17, 80LL, Src, &v15);
  EtwTraceEndCallback(44LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v14);
  if ( v10 < 0 || v15 != 24 )
    return 0LL;
  v14 = 0LL;
  RtlCopyFromUser(&v14, Src[0], 8uLL);
  v11 = v14;
  Src[1] = v14;
  v12 = (void *)*((_QWORD *)Src[0] + 2);
  LODWORD(v14) = 0;
  RtlCopyFromUser(&v14, v12, 4uLL);
  *a6 ^= ((unsigned __int8)v14 ^ (unsigned __int8)*a6) & 0x10;
  return v11;
}
