/*
 * XREFs of ??0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x140222188
 * Callers:
 *     ?ProcessModeChange@CRapidHpdInfo@@SA?AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1402EB26C (-ProcessModeChange@CRapidHpdInfo@@SA-AW4ProcessModeChangeResult@1@W4_DXGK_RAPID_HPD_TYPE@@PEAU_G.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

CRapidHpdInfo *__fastcall CRapidHpdInfo::CRapidHpdInfo(
        CRapidHpdInfo *this,
        struct CMonitorTopology *a2,
        const struct _GUID *a3)
{
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm0
  bool v10; // si
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  v5 = 1;
  *(_QWORD *)this = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = MEMORY[0xFFFFF78000000004];
  *((_DWORD *)this + 4) = 0;
  v8 = ((unsigned __int64)(v7 << 32) * (unsigned __int128)(unsigned __int64)(v6 << 8)) >> 64;
  *((_DWORD *)this + 5) = 0;
  *((_QWORD *)this + 1) = v8;
  v9 = (__int128)*a3;
  *((_QWORD *)this + 5) = a2;
  *(_OWORD *)((char *)this + 24) = v9;
  _InterlockedAdd((volatile signed __int32 *)a2, 1u);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v5 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v11 = *(_DWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8) + 71496);
    UserSessionState = W32GetUserSessionState(v13, v12);
    LOBYTE(v15) = v10;
    LOBYTE(v16) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      7,
      11,
      (__int64)&WPP_24961469f9f338f3d0acbcc72a179045_Traceguids,
      v11);
  }
  return this;
}
