/*
 * XREFs of DestroyDpiMetricsCache @ 0x14023D510
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140212988 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x140287260 (-ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     ClearDpiMetrics @ 0x140287298 (ClearDpiMetrics.c)
 */

void DestroyDpiMetricsCache()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // r14
  struct tagDPISERVERINFO *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 UserSessionState; // rax
  __int64 v21; // rbx

  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = 5096LL;
    do
    {
      v16 = (struct tagDPISERVERINFO *)(v15 + *(_QWORD *)(W32GetUserSessionState(v1, v0) + 19928));
      v19 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19928);
      if ( (v13 <= 1 || *(_DWORD *)v16) && (ClearDpiServerInfo(v16), v13 <= 1) || *(_DWORD *)(v19 + v14 + 7656) )
        ClearDpiMetrics((void *)(v14 + v19 + 7656));
      ++v13;
      v15 += 104LL;
      v14 += 80LL;
    }
    while ( v13 < 0x12 );
    UserSessionState = W32GetUserSessionState(v1, v0);
    v21 = UserSessionState;
    if ( *(_WORD *)(UserSessionState + 66408) )
    {
      ClearDpiMetrics((void *)(UserSessionState + 66328));
      *(_WORD *)(v21 + 66408) = 0;
    }
    if ( *(_WORD *)(v21 + 66520) )
    {
      ClearDpiServerInfo((struct tagDPISERVERINFO *)(v21 + 66416));
      *(_WORD *)(v21 + 66520) = 0;
    }
  }
  else
  {
    InvalidateKMDpiMetricsCacheDPIMETRICS(v1, v0);
    v4 = 0LL;
    v5 = 18LL;
    do
    {
      v6 = W32GetUserSessionState(v3, v2);
      ClearDpiServerInfo((struct tagDPISERVERINFO *)(v4 + *(_QWORD *)(v6 + 19928) + 5096LL));
      v4 += 104LL;
      --v5;
    }
    while ( v5 );
    v9 = *(_QWORD **)(W32GetUserSessionState(v3, v2) + 66304);
    while ( v9 )
    {
      v10 = v9;
      v9 = (_QWORD *)v9[1];
      Win32FreePool(v10);
    }
    *(_QWORD *)(W32GetUserSessionState(v8, v7) + 66312) = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v12, v11) + 66304) = 0LL;
  }
}
