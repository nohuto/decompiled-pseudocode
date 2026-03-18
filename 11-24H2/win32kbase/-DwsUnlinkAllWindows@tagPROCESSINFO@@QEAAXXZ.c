/*
 * XREFs of ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x1401620B8
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A5824 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1401A5960 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 */

void __fastcall tagPROCESSINFO::DwsUnlinkAllWindows(tagPROCESSINFO *this)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD **v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  char *v11; // r14
  bool v12; // r15
  bool v13; // r12
  int v14; // edi
  __int64 v15; // rbx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  char **v20; // rax
  int v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+28h] [rbp-40h]
  int v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+38h] [rbp-30h]

  v1 = (_QWORD *)((char *)this + 1128);
  v3 = (_QWORD *)*((_QWORD *)this + 141);
  if ( v3 != (_QWORD *)((char *)this + 1128) )
  {
    if ( (_QWORD *)v3[1] != v1 )
      goto LABEL_27;
    v4 = (_QWORD *)*((_QWORD *)this + 142);
    if ( (_QWORD *)*v4 != v1 )
      goto LABEL_27;
    *v4 = v3;
    v3[1] = v4;
    v1[1] = v1;
    *v1 = v1;
  }
  if ( !(unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_10;
  v5 = (_QWORD *)((char *)this + 1144);
  v6 = (_QWORD *)*((_QWORD *)this + 143);
  if ( v6 == (_QWORD *)((char *)this + 1144) )
    goto LABEL_10;
  if ( (_QWORD *)v6[1] != v5 || (v7 = (_QWORD *)*((_QWORD *)this + 144), (_QWORD *)*v7 != v5) )
LABEL_27:
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  *((_QWORD *)this + 144) = (char *)this + 1144;
  *v5 = v5;
LABEL_10:
  v8 = (_QWORD **)((char *)this + 1176);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 )
      goto LABEL_27;
    v10 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_27;
    *v8 = v10;
    v11 = (char *)(v9 - 5);
    v10[1] = v8;
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *((_DWORD *)this + 14);
      v15 = **(_QWORD **)v11;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v17) = v13;
      LOBYTE(v18) = v12;
      WPP_RECORDER_AND_TRACE_SF_Dq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69400),
        v21,
        v22,
        v23,
        v24,
        v14,
        v15);
    }
    v19 = *((_QWORD *)v11 + 3);
    if ( *(char **)(v19 + 8) != v11 + 24 )
      goto LABEL_27;
    v20 = (char **)*((_QWORD *)v11 + 4);
    if ( *v20 != v11 + 24 )
      goto LABEL_27;
    *v20 = (char *)v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( v20 == (char **)v19 )
      *(_DWORD *)(*(_QWORD *)v11 + 380LL) &= ~0x8000000u;
    GreDeleteFastMutex(v11);
  }
}
