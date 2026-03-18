/*
 * XREFs of GetWndSBParmsCrossProcess @ 0x140219F38
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___ @ 0x1402908B8 (W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     GETCLIENTWNDINFO @ 0x14026C270 (GETCLIENTWNDINFO.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDddddd @ 0x14026D0D4 (WPP_RECORDER_AND_TRACE_SF_qsDddddd.c)
 *     GetScrollbarTypeString @ 0x140292720 (GetScrollbarTypeString.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

bool __fastcall GetWndSBParmsCrossProcess(__int64 *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int *v3; // r13
  char v6; // di
  char v7; // si
  __int64 v8; // rdx
  bool v9; // si
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 UserSessionState; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // r8d
  int v36; // edx
  int v37; // r9d
  bool v38; // [rsp+81h] [rbp-D7h]
  unsigned int *Address; // [rsp+88h] [rbp-D0h]
  _QWORD *Addressb; // [rsp+88h] [rbp-D0h]
  volatile void **Addressc; // [rsp+88h] [rbp-D0h]
  volatile void *Addressa; // [rsp+88h] [rbp-D0h]
  char v43; // [rsp+90h] [rbp-C8h]
  __int128 v46; // [rsp+F0h] [rbp-68h]
  __int128 v47; // [rsp+100h] [rbp-58h]
  unsigned int v48; // [rsp+110h] [rbp-48h]

  v3 = a3;
  v6 = 1;
  v43 = 1;
  v7 = 1;
  if ( !GETCLIENTWNDINFO(a1) || !*(_QWORD *)(GETCLIENTWNDINFO(a1) + 32) )
    v7 = 0;
  if ( v7 )
  {
    Address = *(unsigned int **)(GETCLIENTWNDINFO(a1) + 32);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(Address, v15, v16);
    ProbeForRead(Address, 0x24uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v46 = *(_OWORD *)Address;
    v47 = *((_OWORD *)Address + 1);
    v18 = Address[8];
    v48 = Address[8];
    v19 = *((_QWORD *)Address + 2);
    if ( a2 != 1 )
      v19 = *(_QWORD *)Address;
    v20 = HIDWORD(v19);
    v21 = v3[1];
    if ( (v21 & 1) != 0 )
    {
      v3[2] = v20;
      v22 = DWORD2(v47);
      if ( a2 != 1 )
        v22 = DWORD2(v46);
      v3[3] = v22;
    }
    if ( (v21 & 2) != 0 )
    {
      v23 = HIDWORD(*((_QWORD *)&v47 + 1));
      if ( a2 != 1 )
        LODWORD(v23) = HIDWORD(v46);
      v3[4] = v23;
    }
    if ( (v21 & 4) != 0 )
    {
      if ( a2 != 1 )
        v18 = (unsigned int)v47;
      v3[5] = v18;
    }
    if ( (v21 & 0x10) != 0 )
    {
      Addressb = *(_QWORD **)(a1[2] + 520);
      v24 = PsGetCurrentProcessWow64Process(Addressb, v21, v18);
      ProbeForRead(Addressb, 0x130uLL, v24 != 0 ? 1 : 4);
      Addressc = (volatile void **)Addressb[35];
      v27 = PsGetCurrentProcessWow64Process(Addressc, v25, v26);
      ProbeForRead(Addressc, 0x10uLL, v27 != 0 ? 1 : 4);
      Addressa = *Addressc;
      v30 = PsGetCurrentProcessWow64Process(Addressa, v28, v29);
      ProbeForRead(Addressa, 0x68uLL, v30 != 0 ? 1 : 4);
      if ( Addressa && *((_DWORD *)Addressa + 22) == a2 && *((__int64 **)Addressa + 1) == a1 )
      {
        v3[6] = *((_DWORD *)Addressa + 21);
      }
      else
      {
        v31 = v48;
        if ( a2 != 1 )
          v31 = v47;
        v3[6] = v31;
      }
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v6 = 0;
      v43 = 0;
    }
    v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v21);
      GetScrollbarTypeString(a2, v33, v34, *(_QWORD *)(UserSessionState + 69416));
      LOBYTE(v35) = v38;
      LOBYTE(v36) = v43;
      WPP_RECORDER_AND_TRACE_SF_qsDddddd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v36, v35, v37);
      v3 = a3;
    }
    return (v3[1] & 0x17) != 0;
  }
  else
  {
    UserSetLastError(1447);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v6 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *a1;
      v11 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v8);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(v11 + 69416),
        2,
        9,
        17,
        (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids,
        v10);
    }
    return 0;
  }
}
