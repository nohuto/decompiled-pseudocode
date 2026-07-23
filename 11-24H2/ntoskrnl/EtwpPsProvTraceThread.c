/*
 * XREFs of EtwpPsProvTraceThread @ 0x1409F4168
 * Callers:
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PsGetCurrentThreadTeb @ 0x140462F90 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  _DWORD *CurrentThreadTeb; // rdx
  _KPROCESS *Process; // rax
  __int16 v8; // cx
  char v9; // al
  int v10; // eax
  __int64 v11; // rcx
  _KPROCESS *v12; // rdx
  __int16 v13; // r8
  char v14; // al
  int v15; // eax
  ULONG v16; // r9d
  __int64 v18; // rdx
  signed __int32 v19[8]; // [rsp+0h] [rbp-168h] BYREF
  char v20; // [rsp+30h] [rbp-138h]
  char v21; // [rsp+31h] [rbp-137h]
  int v22; // [rsp+34h] [rbp-134h] BYREF
  int v23; // [rsp+38h] [rbp-130h] BYREF
  int v24; // [rsp+3Ch] [rbp-12Ch] BYREF
  __int64 v25; // [rsp+40h] [rbp-128h] BYREF
  __int64 v26; // [rsp+48h] [rbp-120h] BYREF
  __int64 v27; // [rsp+50h] [rbp-118h] BYREF
  __int64 v28; // [rsp+58h] [rbp-110h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-108h]
  int v30; // [rsp+68h] [rbp-100h]
  int v31; // [rsp+6Ch] [rbp-FCh]
  _KPROCESS *v32; // [rsp+70h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-F0h]
  struct _KTHREAD *v34; // [rsp+80h] [rbp-E8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-D8h] BYREF
  int *v36; // [rsp+A0h] [rbp-C8h]
  __int64 v37; // [rsp+A8h] [rbp-C0h]
  __int64 v38; // [rsp+B0h] [rbp-B8h]
  __int64 v39; // [rsp+B8h] [rbp-B0h]
  __int64 v40; // [rsp+C0h] [rbp-A8h]
  __int64 v41; // [rsp+C8h] [rbp-A0h]
  __int64 *v42; // [rsp+D0h] [rbp-98h]
  __int64 v43; // [rsp+D8h] [rbp-90h]
  __int64 *v44; // [rsp+E0h] [rbp-88h]
  __int64 v45; // [rsp+E8h] [rbp-80h]
  __int64 *v46; // [rsp+F0h] [rbp-78h]
  __int64 v47; // [rsp+F8h] [rbp-70h]
  __int64 *v48; // [rsp+100h] [rbp-68h]
  __int64 v49; // [rsp+108h] [rbp-60h]
  __int64 v50; // [rsp+110h] [rbp-58h]
  __int64 v51; // [rsp+118h] [rbp-50h]
  int *v52; // [rsp+120h] [rbp-48h]
  __int64 v53; // [rsp+128h] [rbp-40h]
  __int64 *v54; // [rsp+130h] [rbp-38h]
  __int64 v55; // [rsp+138h] [rbp-30h]

  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v22 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->Process;
      v32 = Process;
      if ( Process[1].ReadyTime
        && ((v8 = WORD2(Process[3].PerProcessorCycleTimes), v8 == 332) || v8 == 452
          ? (v9 = 1, v20 = 1)
          : (v9 = 0, v20 = 0),
            v9) )
      {
        v10 = CurrentThreadTeb[3032];
      }
      else
      {
        v10 = CurrentThreadTeb[1480];
        v30 = v10;
      }
      v22 = v10;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)ThreadStop;
    v11 = *(_QWORD *)(a1 + 240);
    if ( v11 )
    {
      v34 = KeGetCurrentThread();
      v12 = v34->Process;
      v32 = v12;
      if ( v12[1].ReadyTime
        && ((v13 = WORD2(v12[3].PerProcessorCycleTimes), v13 == 332) || v13 == 452
          ? (v14 = 1, v21 = 1)
          : (v14 = 0, v21 = 0),
            v14) )
      {
        v15 = *(_DWORD *)(v11 + 12128);
      }
      else
      {
        v15 = *(_DWORD *)(v11 + 5920);
        v31 = v15;
      }
      v22 = v15;
    }
  }
  v23 = *(_DWORD *)(a1 + 1288);
  UserData.Ptr = (ULONGLONG)&v23;
  *(_QWORD *)&UserData.Size = 4LL;
  v24 = *(_DWORD *)(a1 + 1296);
  v36 = &v24;
  v37 = 4LL;
  v38 = a1 + 56;
  v39 = 8LL;
  v40 = a1 + 48;
  v41 = 8LL;
  if ( a3 )
  {
    if ( a2 )
    {
      v25 = *(_QWORD *)(a2 + 16);
      v26 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 240);
    if ( v18 )
    {
      v25 = *(_QWORD *)(v18 + 8);
      v26 = *(_QWORD *)(v18 + 16);
    }
  }
  v42 = &v25;
  v43 = 8LL;
  v44 = &v26;
  v45 = 8LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 && (*(_DWORD *)(a1 + 1448) & 8) == 0 )
    _InterlockedOr(v19, 0);
  v46 = &v27;
  v47 = 8LL;
  v27 = *(_QWORD *)(a1 + 1376);
  v48 = &v27;
  v49 = 8LL;
  v50 = a1 + 240;
  v51 = 8LL;
  v52 = &v22;
  v53 = 4LL;
  v16 = 10;
  if ( !a3 )
  {
    v28 = *(_QWORD *)(a1 + 72);
    v54 = &v28;
    v55 = 8LL;
    v16 = 11;
  }
  return EtwWrite(EtwpPsProvRegHandle, EventDescriptor, 0LL, v16, &UserData);
}
