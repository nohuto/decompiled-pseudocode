/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C14C8
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C1940 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D4A80 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00B9720 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00B9790 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C00E39A2 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E3A96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E4B22 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01B52A4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B537C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B53CC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C01B59B8 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01CA434 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsHover@CPointerInfoNode@@QEBAHXZ @ 0x1C01CCB74 (-IsHover@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01CD15C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C01CDCE0 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C01D2B68 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01D6A34 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C02070C8 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C02082F0 (ApiSetValidatePointerOffset.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  __int64 v8; // r12
  struct tagQ *v11; // r14
  unsigned __int64 v13; // rdx
  int v14; // ebx
  CTouchProcessor *v15; // rcx
  int v16; // eax
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r12
  struct CInputDest *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r9
  struct tagTHREADINFO *v25; // rbx
  int v26; // r14d
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  CPointerInfoNode *v37; // rcx
  __int64 v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+48h] [rbp-B8h]
  char *v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+78h] [rbp-88h]
  unsigned __int16 v45; // [rsp+7Ch] [rbp-84h]
  struct tagPOINT v46; // [rsp+80h] [rbp-80h] BYREF
  struct CInputDest *v47; // [rsp+88h] [rbp-78h] BYREF
  struct tagTHREADINFO *v48; // [rsp+90h] [rbp-70h]
  struct tagQ *v49; // [rsp+98h] [rbp-68h]
  int *v50; // [rsp+A0h] [rbp-60h]
  _OWORD v51[7]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v52[40]; // [rsp+120h] [rbp+20h] BYREF
  CInpLockGuard *v53; // [rsp+148h] [rbp+48h]
  _BYTE v54[64]; // [rsp+150h] [rbp+50h] BYREF
  char v55; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v56[16]; // [rsp+200h] [rbp+100h] BYREF

  v8 = *((unsigned __int16 *)a3 + 86);
  v46 = 0LL;
  v11 = a4;
  v43 = 0;
  v49 = a4;
  v48 = a2;
  v50 = a6;
  v45 = v8;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12104);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12105);
  CInputDest::SetEmpty(a8);
  v13 = *((_QWORD *)a3 + 2);
  v47 = 0LL;
  v14 = CTouchProcessor::RecheckPointerCapture(this, v13, a5, &v47, &v43);
  if ( v14 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v47);
  }
  else if ( !(unsigned int)CPointerInfoNode::IsHover(a3) && (*((_DWORD *)a3 + 45) & 0x10000) == 0 )
  {
    return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 86), &v46);
  if ( !v14 )
  {
    v16 = CTouchProcessor::PointerFlagsToMessage(v15, *((_DWORD *)a3 + 45));
    v17 = *((unsigned __int16 *)a3 + 90);
    v18 = *((unsigned __int16 *)a3 + 100);
    v19 = *((_QWORD *)a3 + 25);
    v44 = v16;
    v20 = v8 | ((unsigned __int64)(v17 & 0xFFFFE1F7) << 16);
    v21 = v18 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12163);
    v22 = (struct CPointerInfoNode *)((char *)a3 + 352);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v54, v22);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v52,
        (CTouchProcessor *)((char *)this + 32),
        *((void **)a3 + 2),
        v24);
      v42 = *((_QWORD *)a3 + 2);
      v41 = (char *)a3 + 160;
      v40 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v54, v22);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v52,
        (CTouchProcessor *)((char *)this + 32),
        *((void **)a3 + 2),
        v23);
      v42 = *((_QWORD *)a3 + 2);
      v41 = (char *)a3 + 160;
      v40 = 1;
    }
    v39 = v19;
    v25 = v48;
    v38 = v20;
    v26 = v44;
    v27 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v55,
                      (_DWORD)v48,
                      (int)a3 + 352,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v44,
                      v38,
                      v21,
                      v39,
                      (__int64)&v43,
                      v40,
                      (__int64)v41,
                      v42,
                      (__int64)&v46);
    v28 = v27[1];
    v51[0] = *v27;
    v29 = v27[2];
    v51[1] = v28;
    v30 = v27[3];
    v51[2] = v29;
    v31 = v27[4];
    v51[3] = v30;
    v32 = v27[5];
    v51[4] = v31;
    v33 = v27[6];
    v51[5] = v32;
    v51[6] = v33;
    CInputDest::CInputDest((CInputDest *)v56, (const struct tagINPUTDEST *)v51);
    CInputDest::operator=((__int64)a8, v56);
    CInputDest::SetEmpty((CInputDest *)v56);
    CInpLockGuard::LockExclusive(v53);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v52, v34, v35, v36);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v54);
    InputTraceLogging::Pointer::SecondaryHitTest(
      (struct CPointerInfoNode *)((char *)a3 + 168),
      *((_QWORD *)a3 + 2),
      v26,
      a8,
      &v46);
    if ( *(_DWORD *)a8 )
    {
      if ( !gbIgnoreStressedOutStuff && v43 == -1 )
      {
        v44 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12205);
      }
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(this, v45, &v46);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v37, v25) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v47, &v43) )
      CInputDest::operator=((__int64)a8, (__int64)v47);
    v11 = v49;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 25),
                        (char *)a3 + 160,
                        v46,
                        a7) )
    *a7 = 0LL;
  if ( *(_DWORD *)a8 )
  {
    if ( v11 && !CInputDest::UsesQueue(a8, v11) )
      CInputDest::SetEmpty(a8);
    if ( *(_DWORD *)a8 )
      *v50 = v43;
  }
}
