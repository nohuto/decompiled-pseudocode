/*
 * XREFs of ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14012BB24
 * Callers:
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     SfnCOPYDATA @ 0x14012BE50 (SfnCOPYDATA.c)
 *     _GetWindowIcon @ 0x14012C2BC (_GetWindowIcon.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxSendShutdownData(HWND a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 Prop; // rdx
  _WORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  char v11; // di
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 UserSessionState; // rax
  __int16 v27; // ax
  _WORD *v28; // rax
  bool v29; // si
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  _QWORD *v36; // [rsp+60h] [rbp-A0h]
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  _WORD v38[261]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v39[267]; // [rsp+28Ah] [rbp+18Ah] BYREF

  memset_0(v37, 0, 0x428uLL);
  v35 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63512) )
  {
    if ( a1 == (HWND)0xFFFF )
    {
LABEL_13:
      v37[0] = a1;
      v36 = v37;
      v33 = 0LL;
      v34 = 1064;
      v19 = *(_QWORD *)(W32GetUserSessionState(v7, Prop) + 19928);
      v20 = *(_QWORD *)(v19 + 752);
      v22 = *(_QWORD *)(W32GetUserSessionState(v19, v21) + 63512);
      v23 = *(_QWORD *)(*(_QWORD *)(v22 + 40) + 120LL);
      UserSessionState = W32GetUserSessionState(v22, v24);
      SfnCOPYDATA(*(_QWORD *)(UserSessionState + 63512), 809, a2, (unsigned int)&v33, v23, v20);
      return 0LL;
    }
    v8 = ValidateHwndEx(a1, 0LL, 0LL);
    if ( !a2 )
    {
      if ( v8 )
        *(_DWORD *)(v8 + 380) &= ~0x400000u;
      goto LABEL_13;
    }
    v9 = v8;
    if ( v8 )
    {
      v11 = 1;
      v12 = v8 + 40;
      if ( *(_QWORD *)v8 == *(_QWORD *)(W32GetUserSessionState(v7, Prop) + 19176) )
      {
        LODWORD(a2) = 2;
        goto LABEL_7;
      }
      if ( *(_DWORD *)(*(_QWORD *)v12 + 236LL) == 1 )
      {
LABEL_7:
        *(_DWORD *)(v9 + 380) |= 0x400000u;
        v37[1] = GetWindowIcon(v9, 1LL);
        v14 = *(_QWORD *)v12;
        v15 = 261LL;
        v16 = *(unsigned int *)(v14 + 184);
        if ( (_DWORD)v16 )
        {
          v17 = ((unsigned __int64)(unsigned int)v16 >> 1) + 1;
          if ( v17 > 0x105 )
            v17 = 261LL;
          RtlStringCchCopyW(v39, v17, *(const unsigned __int16 **)(v9 + 184));
        }
        else
        {
          v39[0] = 0;
        }
        v18 = W32GetUserSessionState(v16, v13);
        Prop = GetProp(v9, *(unsigned __int16 *)(v18 + 41416), 1u);
        if ( Prop )
        {
          Prop -= (__int64)v38;
          v7 = v38;
          do
          {
            if ( v15 == -2147483385 )
              break;
            v27 = *(_WORD *)((char *)v7 + Prop);
            if ( !v27 )
              break;
            *v7++ = v27;
            --v15;
          }
          while ( v15 );
          v28 = v7 - 1;
          if ( v15 )
            v28 = v7;
          *v28 = 0;
        }
        else
        {
          v38[0] = 0;
        }
        goto LABEL_13;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x400) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v32,
          v31,
          *(_QWORD *)(v30 + 69416),
          4,
          11,
          15,
          (__int64)&WPP_10cc4f57605a3a9d31248f005dacd70d_Traceguids,
          v9);
      }
    }
  }
  return 0LL;
}
