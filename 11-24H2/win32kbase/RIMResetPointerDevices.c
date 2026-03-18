/*
 * XREFs of RIMResetPointerDevices @ 0x1400545C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMEndAllActiveContacts @ 0x1400C7A70 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMResetPointerDevices(__int64 a1, int a2)
{
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // esi
  struct RawInputManagerObject *v10; // rbx
  __int64 i; // rdi
  bool v12; // bl
  bool v13; // di
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  bool v18; // di
  bool v19; // bp
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      151,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
  if ( v9 >= 0 )
  {
    v10 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((char *)Object + 104);
    if ( *((_BYTE *)v10 + 81) || *((_BYTE *)v10 + 82) )
    {
      v9 = -1073741637;
      v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(v20 + 19392),
          3,
          1,
          152,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((char *)v10 + 760);
      for ( i = *((_QWORD *)v10 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
        {
          if ( a2 == 1 )
          {
            RIMSuppressAllActiveContacts(v10);
          }
          else
          {
            if ( a2 )
            {
              v9 = -1073741811;
              break;
            }
            RIMEndAllActiveContacts(v10, *(_QWORD *)(i + 456), 0LL);
          }
        }
      }
      RIMUnlockExclusive((__int64)v10 + 760);
    }
    RIMUnlockExclusive((__int64)v10 + 104);
    ObfDereferenceObject(v10);
  }
  v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(v14 + 19392),
      4,
      1,
      153,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
