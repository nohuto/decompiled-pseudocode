/*
 * XREFs of RIMReadInput @ 0x1C0077620
 * Callers:
 *     NtRIMReadInput @ 0x1C00770E0 (NtRIMReadInput.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0077540 (-Read@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0070578 (rimConvertUserToKernelEventHandle.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimCompleteReads @ 0x1C0074F84 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0075024 (rimIssueReads.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00752D4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0076738 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1C00AC9A8 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0172060 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall RIMReadInput(char *a1, __int64 a2, int a3, void *a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v9; // esi
  __int64 v10; // r14
  int v12; // edi
  char *v13; // rbx
  int v14; // r8d
  int v15; // r9d
  CInpPushLock *v16; // r13
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  CInpPushLock *v21; // r15
  int v22; // edx
  int v23; // r8d
  __int16 v24; // cx
  char v25; // dl
  int v27; // [rsp+28h] [rbp-58h]
  __int64 v28; // [rsp+40h] [rbp-40h]
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  PVOID Object; // [rsp+68h] [rbp-18h] BYREF
  _DWORD v31[4]; // [rsp+70h] [rbp-10h] BYREF

  Object = 0LL;
  v9 = a3;
  v10 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      85,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v12 >= 0 )
  {
    v13 = (char *)Object;
    if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
    {
      Handle = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C0289810,
        (unsigned int)&unk_1C0258329,
        v14,
        v15,
        (__int64)&Handle);
    }
    v16 = (CInpPushLock *)(v13 + 104);
    v31[0] = 0;
    RIMLockExclusive((__int64)(v13 + 104));
    if ( v13[81] || v13[82] )
    {
      v12 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          (_DWORD)gRimLog,
          3,
          1,
          90,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      goto LABEL_61;
    }
    rimHandleAnyPnpRemovePendingDevices((__int64)v13);
    Handle = 0LL;
    v12 = rimConvertUserToKernelEventHandle(a4, &Handle);
    if ( v12 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
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
          (_DWORD)gRimLog,
          3,
          1,
          89,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
          (char)a4);
      }
      goto LABEL_61;
    }
    v21 = (CInpPushLock *)(v13 + 760);
    RIMLockExclusive((__int64)(v13 + 760));
    if ( *((_QWORD *)v13 + 104) )
      rimIssueReads((__int64)v13);
    if ( !v13[776] )
    {
      v13[776] = 1;
      *((_QWORD *)v13 + 105) = Handle;
      *((_QWORD *)v13 + 108) = a6;
      *((_QWORD *)v13 + 107) = a7;
      *((_QWORD *)v13 + 109) = a8;
      *((_QWORD *)v13 + 110) = v10;
      *((_DWORD *)v13 + 222) = v9;
      *((_DWORD *)v13 + 212) = a5;
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = (char *)Object;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v23,
          (_DWORD)gRimLog,
          4,
          v27,
          86,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
          (char)Object,
          (char)a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
      rimIssueReads((__int64)v13);
      v12 = rimCompleteReads((struct RawInputManagerObject *)v13);
      goto LABEL_46;
    }
    if ( *((_QWORD *)v13 + 104) )
    {
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v24 = 88;
    }
    else
    {
      v12 = -1073740682;
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v24 = 87;
    }
    v13 = (char *)Object;
    WPP_RECORDER_AND_TRACE_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      v22,
      v23,
      (_DWORD)gRimLog,
      3,
      v27,
      v24,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      (char)Object,
      (char)a4,
      (char)Handle,
      (char)KeGetCurrentThread());
LABEL_45:
    ZwClose(Handle);
LABEL_46:
    CInpPushLock::UnLockExclusive(v21);
LABEL_61:
    CInpPushLock::UnLockExclusive(v16);
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v31);
    ObfDereferenceObject(v13);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v25 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v25 = 0;
  }
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v28) = v12;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v25,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x5Bu,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v28);
  }
  return (unsigned int)v12;
}
