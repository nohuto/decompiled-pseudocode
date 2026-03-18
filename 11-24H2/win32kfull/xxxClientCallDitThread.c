/*
 * XREFs of xxxClientCallDitThread @ 0x14016D6F8
 * Callers:
 *     ClientCallDitThread @ 0x14016D6E0 (ClientCallDitThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rbx
  int v12; // [rsp+30h] [rbp-188h] BYREF
  void *v13; // [rsp+38h] [rbp-180h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-178h] BYREF
  _OWORD v15[7]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-E8h] BYREF
  _OWORD v17[5]; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+128h] [rbp-90h]
  __int128 v19; // [rsp+130h] [rbp-88h]
  __int128 v20; // [rsp+140h] [rbp-78h]
  __int128 v21; // [rsp+150h] [rbp-68h]
  __int128 v22; // [rsp+160h] [rbp-58h]
  __int128 v23; // [rsp+170h] [rbp-48h]
  __int128 v24; // [rsp+180h] [rbp-38h]
  __int128 v25; // [rsp+190h] [rbp-28h]

  Src[0] = 0LL;
  v12 = 0;
  memset_0(v17, 0, 0xC8uLL);
  v16 = a1;
  v17[0] = *(_OWORD *)a2;
  v17[1] = *(_OWORD *)(a2 + 16);
  v17[2] = *(_OWORD *)(a2 + 32);
  v17[3] = *(_OWORD *)(a2 + 48);
  v17[4] = *(_OWORD *)(a2 + 64);
  v18 = *(_QWORD *)(a2 + 80);
  v19 = *a3;
  v20 = a3[1];
  v21 = a3[2];
  v22 = a3[3];
  v23 = a3[4];
  v24 = a3[5];
  v25 = a3[6];
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  EtwTraceBeginCallback(56LL);
  LODWORD(a1) = KeUserModeCallback(56LL, &v16, 208LL, Src, &v12);
  EtwTraceEndCallback(56LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  if ( (int)a1 < 0 )
    return 0LL;
  if ( v12 != 24 )
    return 0LL;
  v13 = 0LL;
  RtlCopyFromUser(&v13, Src[0], 8uLL);
  v6 = (unsigned int)v13;
  Src[1] = v13;
  v9 = *((_QWORD *)PtiCurrent(v8, v7) + 69);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 84) & 1) != 0 && *(__int128 **)(v9 + 96) == a3 )
      return 0LL;
  }
  v10 = (void *)*((_QWORD *)Src[0] + 2);
  memset_0(v15, 0, sizeof(v15));
  RtlCopyFromUser(v15, v10, 0x70uLL);
  *a3 = v15[0];
  a3[1] = v15[1];
  a3[2] = v15[2];
  a3[3] = v15[3];
  a3[4] = v15[4];
  a3[5] = v15[5];
  a3[6] = v15[6];
  return v6;
}
