/*
 * XREFs of ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401A39F8
 * Callers:
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x1401A31C0 (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x1401A3374 (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDs @ 0x1401A46D4 (WPP_RECORDER_AND_TRACE_SF_qDs.c)
 *     FreezeThawProcessTimers @ 0x14023B314 (FreezeThawProcessTimers.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall tagPROCESSINFO::Thaw(tagPROCESSINFO *this, __int64 a2)
{
  bool v3; // bp
  bool v4; // r14
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  void (__fastcall *v11)(__int64, _QWORD); // rax

  v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_qDs(*((_QWORD *)WPP_GLOBAL_Control + 3), v7, v6, *(_QWORD *)(UserSessionState + 69400));
  }
  if ( *((_DWORD *)this + 298) != 1 )
  {
    v8 = 0xFFFFF78000000004uLL;
    v9 = *((_QWORD *)this + 41);
    v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v9 )
    {
      v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, a2) + 48);
      v11 = *(void (__fastcall **)(__int64, _QWORD))(v8 + 1888);
      if ( v11 )
        v11(v9, (unsigned int)v10);
      v9 = *(_QWORD *)(v9 + 704);
    }
    FreezeThawProcessTimers(this, 0LL);
    *((_DWORD *)this + 298) = 1;
  }
}
