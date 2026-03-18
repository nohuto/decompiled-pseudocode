/*
 * XREFs of ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00211F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     InternalInvalidate3 @ 0x1C0051900 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0060D80 (xxxInternalDoSyncPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00615B8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxDoPaint @ 0x1C00619B8 (xxxDoPaint.c)
 *     NtUserEndPaint @ 0x1C0071310 (NtUserEndPaint.c)
 *     xxxSetWindowData @ 0x1C00A8300 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DwmChildRectChange @ 0x1C00EB3C0 (DwmChildRectChange.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C01193C4 (xxxSimpleDoSyncPaint.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01BBF08 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0026BF4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddqdddds @ 0x1C007F7E8 (WPP_RECORDER_AND_TRACE_SF_ddddqdddds.c)
 *     DwmAsyncNotifyWindowFrameMarginsChange @ 0x1C0081F78 (DwmAsyncNotifyWindowFrameMarginsChange.c)
 *     ?ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z @ 0x1C0089FC8 (-ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C00A623C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C00EBFF8 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C00EC204 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021BEF8 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

__int64 __fastcall WindowMargins::CheckForChanges(struct tagWND *a1, int a2)
{
  __int64 result; // rax
  char v5; // r12
  __int64 v6; // rcx
  char v7; // dl
  char v8; // r8
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  PDEVICE_OBJECT v16; // rcx
  const char *v17; // rax
  char v18; // r8
  __int64 v19; // rbx
  void *v20; // rax
  const char *v21; // rax
  __int64 v22; // r10
  char v23; // dl
  char v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+20h] [rbp-B8h]
  int v27; // [rsp+28h] [rbp-B0h]
  int v28; // [rsp+30h] [rbp-A8h]
  int v29; // [rsp+38h] [rbp-A0h]
  PDEVICE_OBJECT v30; // [rsp+90h] [rbp-48h]
  __int64 v31; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v32; // [rsp+F8h] [rbp+20h] BYREF

  result = (unsigned int)(a2 - 3);
  v5 = 1;
  if ( (unsigned int)result <= 1
    || (v6 = *((_QWORD *)a1 + 13)) != 0
    && (result = *((_QWORD *)a1 + 3)) != 0
    && (result = *(_QWORD *)(result + 8)) != 0
    && v6 == *(_QWORD *)(result + 24) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v7 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v8 = 0;
    }
    if ( v7 || v8 )
    {
      v21 = WindowMargins::ChangeReasonToString(a2);
      WPP_RECORDER_AND_TRACE_SF_qs(
        *(_QWORD *)(v22 + 24),
        v23,
        v24,
        (__int64)gFullLog,
        5u,
        0x15u,
        0x16u,
        v25,
        *(_QWORD *)a1,
        v21);
    }
    result = (__int64)WindowMargins::CWindowMarginProp::GetOrCreate(a1);
    v11 = result;
    if ( result )
    {
      v31 = 0LL;
      LOWORD(v12) = 0;
      if ( a2 )
      {
        v12 = *(_QWORD *)(result + 44);
        v31 = v12;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
          || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v9) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v9 || (_BYTE)v10 )
          WPP_RECORDER_AND_TRACE_SF_dddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            SWORD2(v12),
            5,
            21,
            23,
            (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
            v12,
            SBYTE4(v12),
            SBYTE2(v12),
            SBYTE6(v12));
      }
      v13 = 0LL;
      v32 = 0LL;
      if ( a2 == 4 )
      {
        CWindowProp::RemoveAndDeleteProp((CWindowProp *)v11);
      }
      else
      {
        v26 = 1;
        v13 = *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(v11, &v32, a1);
        v32 = v13;
        *(_QWORD *)(v11 + 44) = v13;
      }
      if ( (_WORD)v12 != (_WORD)v13
        || *(_DWORD *)((char *)&v31 + 2) != *(_DWORD *)((char *)&v13 + 2)
        || (result = HIWORD(v13), HIWORD(v31) != HIWORD(v13)) )
      {
        v16 = WPP_GLOBAL_Control;
        v30 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v5 = 0;
        }
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = WindowMargins::ChangeReasonToString(a2);
          WPP_RECORDER_AND_TRACE_SF_ddddqdddds(
            (__int64)v30->AttachedDevice,
            v5,
            v18,
            (__int64)gFullLog,
            v26,
            v27,
            v28,
            v29,
            v13,
            SBYTE4(v13),
            SBYTE2(v13),
            SBYTE6(v13),
            *(_QWORD *)a1,
            v12,
            SBYTE4(v31),
            SBYTE2(v31),
            SBYTE6(v31),
            v17);
        }
        v19 = *(_QWORD *)a1;
        v20 = (void *)UserReferenceDwmApiPort(v16, v14, v15);
        return DwmAsyncNotifyWindowFrameMarginsChange(v20, v19, (__int16 *)&v32);
      }
    }
  }
  return result;
}
