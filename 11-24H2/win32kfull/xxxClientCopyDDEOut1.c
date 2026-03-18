/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1402BB994
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x14024E7A4 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1402B8494 (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  void *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD v13[4]; // [rsp+30h] [rbp-158h] BYREF
  void *Src; // [rsp+40h] [rbp-148h] BYREF
  __int64 v15; // [rsp+48h] [rbp-140h] BYREF
  __int64 v16; // [rsp+50h] [rbp-138h]
  _BYTE v17[16]; // [rsp+60h] [rbp-128h] BYREF
  __int128 v18; // [rsp+70h] [rbp-118h] BYREF
  __int128 v19; // [rsp+80h] [rbp-108h]
  __int128 v20; // [rsp+90h] [rbp-F8h]
  __int128 v21; // [rsp+A0h] [rbp-E8h]
  __int64 v22; // [rsp+B0h] [rbp-D8h]
  __int128 v23; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+D0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+E0h] [rbp-A8h]
  volatile void *v26[2]; // [rsp+F0h] [rbp-98h]
  __int64 v27; // [rsp+100h] [rbp-88h]
  _OWORD v28[4]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v29; // [rsp+160h] [rbp-28h]

  memset_0(&v18, 0, 0x48uLL);
  Src = 0LL;
  v13[0] = 0;
  v28[0] = *(_OWORD *)a1;
  v28[1] = *(_OWORD *)(a1 + 16);
  v28[2] = *(_OWORD *)(a1 + 32);
  v28[3] = *(_OWORD *)(a1 + 48);
  v29 = *(_QWORD *)(a1 + 64);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v17, v2, v3);
  EtwTraceBeginCallback(62LL);
  v4 = KeUserModeCallback(62LL, v28, 72LL, &Src, v13);
  EtwTraceEndCallback(62LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v17);
  if ( v4 >= 0 && v13[0] == 24 )
  {
    v15 = 0LL;
    RtlCopyFromUser(&v15, Src, 8uLL);
    v7 = v15;
    v16 = v15;
    if ( !v15 )
      return v7;
    v8 = *((_QWORD *)PtiCurrent(v6, v5) + 69);
    if ( !v8 || (*(_DWORD *)(v8 + 84) & 1) == 0 || *(__int128 **)(v8 + 96) != &v18 )
    {
      v9 = (void *)*((_QWORD *)Src + 2);
      memset_0(&v23, 0, 0x48uLL);
      RtlCopyFromUser(&v23, v9, 0x48uLL);
      v18 = v23;
      v19 = v24;
      v20 = *(_OWORD *)Address;
      v21 = *(_OWORD *)v26;
      v22 = v27;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v26[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v26[1], (const void *)(a1 + *(int *)(a1 + 40) + 72LL), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v24 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)&v18, v10, v11) )
      {
        if ( (v19 & 0x800) != 0 )
          v7 = *((_QWORD *)&v19 + 1);
        v16 = v7;
      }
      *(_OWORD *)a1 = v18;
      *(_OWORD *)(a1 + 16) = v19;
      *(_OWORD *)(a1 + 32) = v20;
      *(_OWORD *)(a1 + 48) = v21;
      *(_QWORD *)(a1 + 64) = v22;
      return v7;
    }
  }
  return 0LL;
}
