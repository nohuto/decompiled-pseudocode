/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0058BF4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D354C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01F8C74 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x1C000A46C (-GetFromPointerType@@YA-AW4CompositionInputType@@K@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C000B570 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0032880 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C005CCDC (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0099700 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C01F29AC (WPP_RECORDER_AND_TRACE_SF_dq.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(void *a1, unsigned int a2, struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v4; // r15
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int v12; // ebx
  char v13; // si
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // r14d
  int v19; // edx
  int v20; // r8d
  _DWORD *v21; // rbx
  _DWORD *v22; // r15
  PDEVICE_OBJECT v23; // rcx
  __int16 v24; // r9
  _DWORD *v25; // rdx
  __int64 v26; // rbx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  char v36; // bl
  bool v37; // r15
  int v38; // edx
  int v39; // edx
  int v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+38h] [rbp-C8h]
  char v44; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct tagINPUTDEST *v46; // [rsp+68h] [rbp-98h]
  _QWORD v47[2]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v48[7]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v49; // [rsp+F0h] [rbp-10h]
  __int128 v50; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v51; // [rsp+108h] [rbp+8h]
  __int128 v52; // [rsp+118h] [rbp+18h]
  __int64 v53; // [rsp+128h] [rbp+28h]

  v46 = a3;
  v4 = a3;
  memset(v48, 0, sizeof(v48));
  v6 = v48[1];
  *(_OWORD *)v4 = v48[0];
  v7 = v48[2];
  *((_OWORD *)v4 + 1) = v6;
  v8 = v48[3];
  *((_OWORD *)v4 + 2) = v7;
  v9 = v48[4];
  *((_OWORD *)v4 + 3) = v8;
  v10 = v48[5];
  *((_OWORD *)v4 + 4) = v9;
  v11 = v48[6];
  *((_OWORD *)v4 + 5) = v10;
  *((_OWORD *)v4 + 6) = v11;
  v12 = GetFromPointerType(a2);
  if ( v12 )
  {
    Object = 0LL;
    v13 = 1;
    if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = 36;
        LOBYTE(v39) = v13;
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v39,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          36,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
          (char)a1);
      }
      return *(_DWORD *)v4 != 0;
    }
    LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        25,
        (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
        (char)Object,
        (char)a1);
    }
    memset(v48, 0, sizeof(v48));
    v47[0] = 0LL;
    v50 = 0LL;
    v53 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    CompositionInputObject::QueryInputQueueForInputType(Object, v12, &v50);
    if ( (_DWORD)v50 == 2 )
    {
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          27,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v12, v47) >= 0 )
      {
        v18 = LODWORD(v48[0]) | 4;
LABEL_18:
        LODWORD(v48[0]) = v18;
        goto LABEL_19;
      }
    }
    else if ( (_DWORD)v50 == 3 )
    {
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          26,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v12, v47) >= 0 )
      {
        *(_OWORD *)((char *)&v48[2] + 8) = v51;
        v18 = LODWORD(v48[0]) | 6;
        *((_QWORD *)&v48[1] + 1) = *((_QWORD *)&v50 + 1);
        *((_QWORD *)&v48[4] + 1) = v53;
        *(_OWORD *)((char *)&v48[3] + 8) = v52;
        goto LABEL_18;
      }
    }
    else
    {
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          28,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
          v50);
      }
    }
    v18 = v48[0];
LABEL_19:
    if ( !v18 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = 35;
        LOBYTE(v38) = v13;
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v38,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          35,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids);
      }
      if ( *(_DWORD *)v4 )
      {
        LODWORD(v46) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 512LL);
      }
      goto LABEL_49;
    }
    LOBYTE(v16) = -1;
    v49 = (_DWORD *)HMValidateHandleNoSecure(v47[0], v16);
    v21 = v49;
    if ( v49 )
    {
      if ( !gbInDestroyHandleTableObjects
        && !IS_USERCRIT_OWNED_EXCLUSIVE()
        && (!IS_USERCRIT_OWNED_AT_ALL()
         || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
         && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
      {
        __int2c();
      }
      if ( *((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*v21 + 24) == 1 )
      {
        HIDWORD(v48[5]) = 2;
        v22 = v21;
        *(_QWORD *)&v48[5] = v21;
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v19) = 0;
        }
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v24 = 29;
        goto LABEL_30;
      }
      if ( *((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*v21 + 24) == 23 )
      {
        HIDWORD(v48[5]) = 1;
        v22 = v21;
        *(_QWORD *)&v48[5] = v21;
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v19) = 0;
        }
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v24 = 30;
LABEL_30:
        WPP_RECORDER_AND_TRACE_SF_q(
          v23->AttachedDevice,
          v19,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          v24,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
          (char)v21);
        goto LABEL_31;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v36 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v36 = 0;
      }
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( !gbInDestroyHandleTableObjects
          && !IS_USERCRIT_OWNED_EXCLUSIVE()
          && (!IS_USERCRIT_OWNED_AT_ALL()
           || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
           && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
        {
          __int2c();
        }
        LOBYTE(v20) = v37;
        LOBYTE(v19) = v36;
        WPP_RECORDER_AND_TRACE_SF_dq(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v40,
          v41,
          v42,
          v43,
          *((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*v49 + 24),
          (char)Object);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          32,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
          (char)Object);
      }
    }
    v22 = *(_DWORD **)&v48[5];
LABEL_31:
    if ( v22 )
    {
      v25 = Object;
      v26 = *((_QWORD *)Object + 2);
      if ( v26 )
      {
        LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v25,
            v20,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            2,
            33,
            (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids);
        }
        v25 = Object;
        LODWORD(v48[0]) = v18 | 1;
        *((_QWORD *)&v48[0] + 1) = v26;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 424LL) + 824LL) & 0x800000) != 0 )
        v27 = v48[1] & 0xFFFFFFFE;
      else
        v27 = (v25[46] ^ LODWORD(v48[1])) & 1 ^ LODWORD(v48[1]);
      v28 = (unsigned int)v25[44];
      *(_QWORD *)&v48[6] = v28;
      LODWORD(v48[1]) = v27;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = v28;
        LOBYTE(v28) = v13;
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqd(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v40,
          2,
          34,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
          (char)v22,
          v44,
          -(v27 & 1));
      }
      v4 = v46;
      v29 = v48[1];
      *(_OWORD *)v46 = v48[0];
      v30 = v48[2];
      *((_OWORD *)v4 + 1) = v29;
      v31 = v48[3];
      *((_OWORD *)v4 + 2) = v30;
      v32 = v48[4];
      *((_OWORD *)v4 + 3) = v31;
      v33 = v48[5];
      *((_OWORD *)v4 + 4) = v32;
      v34 = v48[6];
      *((_OWORD *)v4 + 5) = v33;
      *((_OWORD *)v4 + 6) = v34;
    }
    else
    {
      v4 = v46;
    }
LABEL_49:
    ObfDereferenceObject(Object);
    return *(_DWORD *)v4 != 0;
  }
  return 0;
}
