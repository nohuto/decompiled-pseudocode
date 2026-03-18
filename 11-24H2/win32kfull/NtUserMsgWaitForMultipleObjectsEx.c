/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x14009E630
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxGetInputEvent @ 0x140064510 (xxxGetInputEvent.c)
 *     xxxClearWakeMask @ 0x140064880 (xxxClearWakeMask.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x140064D40 (xxxMsgWaitForMultipleObjectsEx.c)
 *     ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x140160900 (--1-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1401EA614 (_ReassociateQueueEventCompletionPacket.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(
        unsigned int a1,
        volatile void *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // r14
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int16 v15; // ax
  __int16 v16; // dx
  unsigned __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  ULONG v24; // r15d
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 CurrentProcess; // rax
  void *v28; // rbx
  __int64 v29; // r8
  _OWORD *v30; // rcx
  _OWORD *v31; // rax
  __int64 v32; // rdx
  void *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v47; // [rsp+58h] [rbp-910h]
  __int64 InputEvent; // [rsp+68h] [rbp-900h]
  _BYTE v49[32]; // [rsp+70h] [rbp-8F8h] BYREF
  _BYTE v50[32]; // [rsp+90h] [rbp-8D8h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-8B8h]
  __int64 v52; // [rsp+B8h] [rbp-8B0h]
  __int64 v53; // [rsp+C0h] [rbp-8A8h]
  _BYTE v54[1160]; // [rsp+4E0h] [rbp-488h] BYREF

  v6 = a1;
  v7 = -1;
  EnterCrit(0LL, 0LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v9, v8);
  v11 = 0LL;
  if ( CurrentThreadNonPaged )
    v12 = *CurrentThreadNonPaged;
  else
    v12 = 0LL;
  memset_0(v50, 0, 0x448uLL);
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v6 > 0x3F )
  {
    UserSetLastError(87);
    goto LABEL_50;
  }
  v13 = *(_QWORD *)(v12 + 488);
  if ( !v13 || (a5 & 1) != 0 && (_DWORD)v6 )
  {
    v18 = a4;
  }
  else
  {
    INTERLOCKEDINT::operator int(v13 + 4);
    v15 = INTERLOCKEDINT::operator int(v14);
    v17 = v16 | v15;
    v18 = a4;
    if ( (v17 & (unsigned __int16)a4) != 0 )
    {
      v7 = v6;
      goto LABEL_50;
    }
  }
  InputEvent = xxxGetInputEvent((unsigned __int16)v18 | ((unsigned __int16)a5 << 16), v18);
  if ( !InputEvent )
    goto LABEL_50;
  if ( (a5 & 1) != 0 )
  {
    v47 = 0LL;
    v21 = (__int64 *)W32GetCurrentThreadNonPaged(v20, v19);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0LL;
    if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(v22 + 1640), 0LL) == 259 )
    {
      LOBYTE(v23) = 1;
      ZwCancelWaitCompletionPacket(*(_QWORD *)(v22 + 1640), v23);
      v24 = 1;
      KeSetEvent(*(PRKEVENT *)(v22 + 768), 1, 0);
      goto LABEL_24;
    }
  }
  else
  {
    v25 = (__int64 *)W32GetCurrentThreadNonPaged(v20, v19);
    if ( v25 )
      v26 = *v25;
    else
      v26 = 0LL;
    v47 = *(_QWORD *)(v26 + 1624);
    if ( !v47 )
      goto LABEL_50;
  }
  v24 = 1;
LABEL_24:
  CurrentProcess = PsGetCurrentProcess();
  v28 = *(void **)(PsGetProcessPeb(CurrentProcess) + 32);
  memset_0(v54, 0, 0x448uLL);
  RtlCopyFromUser(v54, v28, 0x448uLL);
  v30 = v50;
  v31 = v54;
  v32 = 8LL;
  do
  {
    *v30 = *v31;
    v30[1] = v31[1];
    v30[2] = v31[2];
    v30[3] = v31[3];
    v30[4] = v31[4];
    v30[5] = v31[5];
    v30[6] = v31[6];
    v30 += 8;
    *(v30 - 1) = v31[7];
    v31 += 8;
    --v32;
  }
  while ( v32 );
  *v30 = *v31;
  v30[1] = v31[1];
  v30[2] = v31[2];
  v30[3] = v31[3];
  *((_QWORD *)v30 + 8) = *((_QWORD *)v31 + 8);
  if ( (_DWORD)v6 )
  {
    if ( !PsGetCurrentProcessWow64Process(v30, 0LL, v29) )
      v24 = 4;
    ProbeForRead(a2, 8 * v6, v24);
  }
  v33 = (void *)Win32AllocPoolWithQuotaZInit(8LL * (unsigned int)(v6 + 1), 2037609301LL);
  v34 = (__int64)v33;
  if ( v33 )
  {
    memmove(v33, (const void *)a2, 8 * v6);
    v36 = 0LL;
    v37 = v53;
    v38 = v52;
    v39 = v51;
    while ( (unsigned int)v36 < (unsigned int)v6 )
    {
      v35 = *(unsigned int *)(v34 + 8LL * (unsigned int)v36);
      switch ( (_DWORD)v35 )
      {
        case 0xFFFFFFF4:
          *(_QWORD *)(v34 + 8LL * (unsigned int)v36) = v37;
          break;
        case 0xFFFFFFF5:
          *(_QWORD *)(v34 + 8LL * (unsigned int)v36) = v38;
          break;
        case 0xFFFFFFF6:
          *(_QWORD *)(v34 + 8LL * (unsigned int)v36) = v39;
          break;
      }
      v36 = (unsigned int)(v36 + 1);
    }
    if ( (a5 & 8) != 0 )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v36, v35, v37);
      if ( CurrentThreadWin32Thread )
        v11 = *CurrentThreadWin32Thread;
      *(_QWORD *)(v11 + 1360) |= 0x400uLL;
    }
    v41 = v47;
    if ( (a5 & 1) != 0 )
      v41 = InputEvent;
    *(_QWORD *)(v34 + 8 * v6) = v41;
    Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
      v49,
      v34,
      Win32FreePool,
      v38);
    v7 = xxxMsgWaitForMultipleObjectsEx((unsigned int)v6, v34, a3, a4, a5);
    xxxClearWakeMask(v43, v42);
    Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(v49);
    if ( (a5 & 1) != 0 )
      ReassociateQueueEventCompletionPacket();
  }
  else
  {
    UserSetLastError(8);
  }
LABEL_50:
  UserSessionSwitchLeaveCrit();
  return v7;
}
