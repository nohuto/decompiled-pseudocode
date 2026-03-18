/*
 * XREFs of NtUserGetPointerInfoList @ 0x14016D3B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1400D30A0 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1400D426C (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1400D4370 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     GetPointerInfoSize @ 0x1400ECF9C (GetPointerInfoSize.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        ULONG64 a6,
        ULONG64 a7,
        volatile void *Address)
{
  unsigned __int64 v12; // r14
  int v13; // ebx
  int v14; // r9d
  int PointerInfoSize; // eax
  __int64 v16; // rdx
  _DWORD *v17; // r12
  _DWORD *v18; // r13
  volatile void *v19; // rdi
  int v20; // ecx
  unsigned int *v21; // rax
  __int64 v22; // r8
  unsigned int *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *v27; // rax
  unsigned int v28; // esi
  __int64 v29; // rcx
  __int64 UserSessionState; // rax
  int PointerFrameInfoInternal; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v35; // [rsp+50h] [rbp-F8h] BYREF
  struct tagTHREADINFO *v36; // [rsp+58h] [rbp-F0h] BYREF
  _OWORD Src[9]; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+150h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+158h] [rbp+10h]
  int v40; // [rsp+160h] [rbp+18h]

  v40 = a3;
  v39 = a2;
  v38 = 0;
  v35 = 0;
  LODWORD(v12) = 0;
  v13 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v36, 1LL);
  v14 = 0;
  if ( !a1 )
    goto LABEL_45;
  if ( HIWORD(a1) )
    goto LABEL_45;
  if ( !a5 )
    goto LABEL_45;
  PointerInfoSize = GetPointerInfoSize(a2);
  if ( (_DWORD)v16 != PointerInfoSize )
    goto LABEL_45;
  v17 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_45;
  v18 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_45;
  if ( a3 || a4 )
  {
    v19 = Address;
  }
  else
  {
    v19 = Address;
    if ( !Address )
    {
LABEL_45:
      v20 = 87;
      goto LABEL_46;
    }
  }
  if ( a4 && (*((_DWORD *)v36 + 340) & 0x100LL) != 0 )
  {
    v20 = 5;
LABEL_46:
    v13 = v14;
    goto LABEL_47;
  }
  v21 = (unsigned int *)a6;
  if ( a6 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v22 = *v21;
  v38 = *v21;
  v23 = (unsigned int *)a7;
  if ( a7 >= MmUserProbeAddress )
    v23 = (unsigned int *)MmUserProbeAddress;
  v24 = *v23;
  v35 = *v23;
  if ( v19 )
  {
    if ( !(_DWORD)v22 )
      goto LABEL_45;
    if ( !(_DWORD)v24 )
      goto LABEL_45;
    v25 = v22 * v24;
    if ( v25 > 0xFFFFFFFF )
      goto LABEL_45;
    v12 = v16 * (unsigned int)v25;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_45;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(v19, (unsigned int)v12, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  if ( a1 == 1 )
  {
    v27 = (_DWORD *)*((_QWORD *)PtiCurrent(v24) + 189);
    if ( !v27 || (*v27 & 1) == 0 )
    {
      v13 = 0;
      v20 = 87;
LABEL_47:
      UserSetLastError(v20);
      goto LABEL_48;
    }
    v38 = 1;
    v28 = 1;
    v35 = 1;
    if ( v19 )
    {
      v29 = *((_QWORD *)PtiCurrent(0LL) + 189);
      Src[0] = *(_OWORD *)(v29 + 24);
      Src[1] = *(_OWORD *)(v29 + 40);
      Src[2] = *(_OWORD *)(v29 + 56);
      Src[3] = *(_OWORD *)(v29 + 72);
      Src[4] = *(_OWORD *)(v29 + 88);
      Src[5] = *(_OWORD *)(v29 + 104);
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (volatile void *)MmUserProbeAddress;
      RtlCopyVolatileMemory((void *)v19, Src, 0x60uLL);
    }
  }
  else
  {
    if ( a4 )
    {
      UserSessionState = W32GetUserSessionState(v24);
      PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                   *(CTouchProcessor **)(UserSessionState + 3264),
                                   v36,
                                   a1,
                                   v39,
                                   v40,
                                   v12,
                                   &v38,
                                   &v35,
                                   (unsigned __int8 *)v19);
      v28 = v35;
    }
    else
    {
      v28 = 1;
      v35 = 1;
      if ( v40 )
      {
        v32 = W32GetUserSessionState(v24);
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                     *(CTouchProcessor **)(v32 + 3264),
                                     v36,
                                     a1,
                                     v39,
                                     v12,
                                     &v38,
                                     (unsigned __int8 *)v19);
      }
      else
      {
        v38 = 1;
        v33 = W32GetUserSessionState(v24);
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                     *(CTouchProcessor **)(v33 + 3264),
                                     v36,
                                     a1,
                                     v39,
                                     v12,
                                     (struct tagPOINTER_INFO *)v19);
      }
    }
    v13 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_48;
  }
  if ( (unsigned __int64)v17 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = v38;
  if ( (unsigned __int64)v18 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  *v18 = v28;
LABEL_48:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v13;
}
