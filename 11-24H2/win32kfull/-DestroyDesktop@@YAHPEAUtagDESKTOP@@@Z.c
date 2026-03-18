/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x14023AE10
 * Callers:
 *     UnmapDesktop @ 0x14023C4A0 (UnmapDesktop.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     UnpackAffectedThreadList @ 0x1401568AC (UnpackAffectedThreadList.c)
 *     _PostThreadMessage @ 0x1401A0460 (_PostThreadMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qS @ 0x1401C85D0 (WPP_RECORDER_AND_TRACE_SF_qS.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1401FC5CC (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall DestroyDesktop(_QWORD *Object, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  bool v16; // di
  bool v17; // bp
  const unsigned __int16 *DesktopName; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx

  v3 = Object[5];
  if ( (Object[6] & 8) != 0 )
    return 0LL;
  v5 = (_QWORD *)Object[31];
  if ( v5 )
  {
    v6 = (void *)v5[1];
    if ( v6 )
    {
      Win32FreePool(v6);
      v5[1] = 0LL;
    }
    Win32FreePool(v5);
    Object[31] = 0LL;
  }
  if ( Object == *(_QWORD **)(W32GetUserSessionState(Object, a2) + 16912) )
    UnpackAffectedThreadList(v8, v7);
  v9 = (_QWORD *)(v3 + 16);
  v10 = *(_QWORD **)(v3 + 16);
  if ( v10 )
  {
    v11 = *(_QWORD **)(v3 + 16);
    do
    {
      v10 = v11;
      if ( v11 == Object )
        break;
      v9 = v11 + 4;
      v10 = (_QWORD *)v11[4];
      v11 = v10;
    }
    while ( v10 );
  }
  if ( v10 )
  {
    LockObjectAssignment(v9, Object[4]);
    DeferrableUnlockObjectAssignment<tagDESKTOP>(Object + 4, v12, v13);
  }
  v14 = *(_QWORD *)(v3 + 56);
  LockObjectAssignment(Object + 4, *(_QWORD *)(v14 + 48));
  LockObjectAssignment(v14 + 48, Object);
  PostThreadMessage(*(struct tagTHREADINFO **)(v14 + 16), 0x31Cu, 2uLL, 0LL);
  *((_DWORD *)Object + 12) |= 8u;
  v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DesktopName = GetDesktopName(Object, v15);
    UserSessionState = W32GetUserSessionState(v20, v19);
    LOBYTE(v22) = v17;
    LOBYTE(v23) = v16;
    WPP_RECORDER_AND_TRACE_SF_qS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v23,
      v22,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      8,
      25,
      (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids,
      (char)Object,
      (__int64)DesktopName);
  }
  return 1LL;
}
