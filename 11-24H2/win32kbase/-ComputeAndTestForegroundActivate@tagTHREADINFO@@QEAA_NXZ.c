/*
 * XREFs of ?ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ @ 0x14015CB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F2110 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

bool __fastcall tagTHREADINFO::ComputeAndTestForegroundActivate(tagTHREADINFO *this)
{
  char v1; // bp
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  bool v8; // bl
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // r14
  int v14; // edi
  unsigned int TID; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax

  v1 = 1;
  if ( (*((_DWORD *)this + 429) & 1) != 0
    && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)this + 428) > 0x1388 )
  {
    v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        13,
        12,
        (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids);
    }
    *((_DWORD *)this + 429) &= ~1u;
  }
  if ( (*((_DWORD *)this + 429) & 0x20) != 0
    && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)this + 430) > 0x1F4 )
  {
    v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69400),
        4,
        13,
        13,
        (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids);
    }
    *((_DWORD *)this + 429) &= ~0x20u;
    *((_DWORD *)this + 430) = 0;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v1 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *((_DWORD *)this + 429);
    TID = (unsigned int)tagTHREADINFO::GetTID((PETHREAD *)this);
    v17 = W32GetUserSessionState(v16);
    WPP_RECORDER_AND_TRACE_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v1,
      v13,
      *(_QWORD *)(v17 + 69400),
      4u,
      0xDu,
      0xEu,
      (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
      TID,
      v14);
  }
  return *((_DWORD *)this + 429) != 0;
}
