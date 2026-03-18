/*
 * XREFs of xxxClientGetCharsetInfo @ 0x140201AD8
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x1402019E0 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rdx
  int v10; // [rsp+30h] [rbp-88h] BYREF
  __int64 v11; // [rsp+38h] [rbp-80h] BYREF
  void *Src; // [rsp+40h] [rbp-78h] BYREF
  __int128 v13; // [rsp+48h] [rbp-70h] BYREF
  __int128 v14; // [rsp+58h] [rbp-60h]
  __int64 v15; // [rsp+68h] [rbp-50h]
  int v16; // [rsp+80h] [rbp-38h] BYREF
  __int128 v17; // [rsp+84h] [rbp-34h]
  __int128 v18; // [rsp+94h] [rbp-24h]

  Src = 0LL;
  v10 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v16 = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v11);
  EtwTraceBeginCallback(69LL);
  v3 = KeUserModeCallback(69LL, &v16, 36LL, &Src, &v10);
  EtwTraceEndCallback(69LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v11);
  if ( v3 < 0 )
    return 0LL;
  if ( v10 != 24 )
    return 0LL;
  v11 = 0LL;
  RtlCopyFromUser(&v11, Src, 8uLL);
  v4 = v11;
  v15 = v11;
  v7 = *((_QWORD *)PtiCurrent(v6, v5) + 69);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 84) & 1) != 0 && *(_OWORD **)(v7 + 96) == a2 )
      return 0LL;
  }
  v8 = (void *)*((_QWORD *)Src + 2);
  v13 = 0LL;
  v14 = 0LL;
  RtlCopyFromUser(&v13, v8, 0x20uLL);
  *a2 = v13;
  a2[1] = v14;
  return v4;
}
