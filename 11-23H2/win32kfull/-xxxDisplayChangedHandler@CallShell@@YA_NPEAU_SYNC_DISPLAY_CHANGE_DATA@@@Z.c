/*
 * XREFs of ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C00A39A0
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C00A35C0 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C00A623C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 */

bool __fastcall CallShell::xxxDisplayChangedHandler(
        CallShell *this,
        struct _SYNC_DISPLAY_CHANGE_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // bp
  __int64 v5; // r8
  bool v6; // bl
  const char *v7; // rdx
  ULONG_PTR v9; // r14
  char v10; // bl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  const char *v19; // rax
  __int64 v20; // [rsp+48h] [rbp-50h]
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h]
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v5 && *(_QWORD *)(v5 + 288) && (v9 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 192LL)) != 0 )
  {
    v10 = 1;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        a4,
        4u,
        7u,
        0x26u,
        (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
        v9);
    v23 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    ThreadLock(v9, &v21);
    if ( xxxSendTransformableMessageTimeout(v9, 2, 200, (__int64)&v23, 1, 1) )
    {
      ThreadUnlock1(v13, v12, v14);
      v18 = v23;
    }
    else
    {
      ThreadUnlock1(v13, v12, v14);
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          v17,
          2,
          7,
          39,
          (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids);
      }
      v18 = 0LL;
      v23 = 0LL;
    }
    v4 = v18 == 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = "Success";
      if ( !v4 )
        v19 = "Failure";
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        7u,
        0x28u,
        (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
        v19);
    }
  }
  else
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( v5 )
      {
        v7 = "!HasIAMThread";
        if ( *(_QWORD *)(v5 + 288) )
          v7 = "!FPostTray";
      }
      else
      {
        v7 = "null";
      }
      v20 = (__int64)v7;
      LOBYTE(v7) = v6;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qs(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v7,
        v5,
        (_DWORD)gFullLog,
        4,
        7,
        42,
        (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
        *(_QWORD *)(gptiCurrent + 456LL),
        v20);
    }
  }
  return v4;
}
