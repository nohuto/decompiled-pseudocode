/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1401F7FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DEA6C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14013A81C (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140185B9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F33F8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FB714 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FC6F8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x140200750 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140204E1C (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x14020547C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208EB4 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(PERESOURCE *this)
{
  int v2; // r12d
  __int64 v3; // rcx
  PERESOURCE Blink; // rdi
  unsigned int *v5; // r13
  __int64 v6; // rax
  __int64 ExclusiveWaiters_low; // rcx
  char *v8; // r14
  unsigned int v9; // r15d
  __int64 v10; // rbx
  CPointerInfoNode *v11; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  char v13; // r13
  unsigned __int16 v14; // dx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v16; // rax
  int v17; // edx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // r15d
  unsigned int v21; // r8d
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rax
  struct tagTHREADINFO *v25; // rax
  struct tagTHREADINFO *v26; // rax
  struct tagTHREADINFO *v27; // rax
  __int64 v28; // rcx
  struct tagTHREADINFO *v29; // rax
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rcx
  struct tagTHREADINFO *v33; // rax
  int v34; // [rsp+48h] [rbp-C0h]
  int v35; // [rsp+4Ch] [rbp-BCh]
  unsigned int *v36; // [rsp+58h] [rbp-B0h]
  int v37; // [rsp+58h] [rbp-B0h]
  struct CPointerInputFrame *p_SpinLock; // [rsp+68h] [rbp-A0h]
  _QWORD v39[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+80h] [rbp-88h]
  _QWORD v41[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v42; // [rsp+98h] [rbp-70h]
  _QWORD v43[3]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v44[14]; // [rsp+B8h] [rbp-50h] BYREF
  char v45; // [rsp+128h] [rbp+20h]
  PERESOURCE *v46[6]; // [rsp+138h] [rbp+30h] BYREF
  PERESOURCE *v47[8]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v48[112]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v49[16]; // [rsp+218h] [rbp+110h] BYREF

  v34 = 0;
  v2 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v47, this + 4, 0LL);
  Blink = this[7];
  while ( Blink != (PERESOURCE)(this + 6) )
  {
    p_SpinLock = (struct CPointerInputFrame *)&Blink[-1].SpinLock;
    CTouchProcessor::ReferenceFrameInt(v3, &Blink[-1].SpinLock);
    v35 = 0;
    v5 = (unsigned int *)Win32AllocPoolZInitImpl(256LL, 4LL * LODWORD(Blink->ExclusiveWaiters), 0x6E616D55u);
    v36 = v5;
    v6 = Win32AllocPoolZInitImpl(256LL, 4LL * LODWORD(Blink->ExclusiveWaiters), 0x6E616D55u);
    ExclusiveWaiters_low = LODWORD(Blink->ExclusiveWaiters);
    v8 = (char *)v6;
    v9 = 0;
    if ( (_DWORD)ExclusiveWaiters_low )
    {
      do
      {
        v10 = *(_QWORD *)&Blink[2].ActiveCount + 480LL * v9;
        memset(v44, 0, sizeof(v44));
        v45 = 0;
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v10)
          && CPointerInfoNode::IsForManipulationThread(v11)
          && (*(_DWORD *)(v10 + 4) & 0x200) == 0 )
        {
          if ( !v5
            || !v8
            || (PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(
                                                                  this,
                                                                  v48,
                                                                  v10,
                                                                  p_SpinLock),
                CInputDest::CInputDest((CInputDest *)v49, PrevMTNodeTarget),
                v2 |= 1u,
                v13 = 0,
                !*(_DWORD *)CInputDest::operator=(v44, v49)) )
          {
            v13 = 1;
          }
          if ( (v2 & 1) != 0 )
          {
            v2 &= ~1u;
            CInputDest::~CInputDest((CInputDest *)v49);
          }
          v14 = *(_WORD *)(v10 + 172);
          if ( v13 )
          {
            NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v14, 0, 0);
            if ( NodeById )
            {
              _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
              if ( *((int *)NodeById + 9) < 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13311);
            }
            if ( (*(_DWORD *)(v10 + 180) & 0x40000) != 0 )
              CTouchProcessor::ProcessRoutedAwayList(
                (CTouchProcessor *)this,
                *(_WORD *)(v10 + 172),
                1,
                p_SpinLock,
                v9,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt(this, p_SpinLock, v9);
            CTouchProcessor::CheckFreeOnDeparture((CTouchProcessor *)this, *(_WORD *)(v10 + 172));
          }
          else
          {
            *(_DWORD *)(v10 + 4) &= ~0x80u;
            v16 = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v14, 0, 0);
            if ( v16 )
              *((_DWORD *)v16 + 74) = 2;
            ++v35;
            *(_QWORD *)(v10 + 192) = CInputDest::GetWindowHandle((CInputDest *)v44);
            CInputDest::operator=(v10 + 352, (__int64)v44);
            *(_DWORD *)&v8[4 * v9] = 1;
          }
          v5 = v36;
        }
        CInputDest::~CInputDest((CInputDest *)v44);
        ExclusiveWaiters_low = LODWORD(Blink->ExclusiveWaiters);
        ++v9;
      }
      while ( v9 < (unsigned int)ExclusiveWaiters_low );
      v34 = v2;
    }
    v17 = 0;
    v37 = 0;
    if ( v5 )
    {
      if ( v8 )
      {
        v18 = 0;
        if ( (_DWORD)ExclusiveWaiters_low )
        {
          do
          {
            if ( *(_DWORD *)&v8[4 * v18] )
            {
              v19 = *(_QWORD *)&Blink[2].ActiveCount;
              v20 = 0;
              v21 = v18;
              v22 = *(_QWORD *)(480LL * v18 + v19 + 192);
              if ( v18 >= (unsigned int)ExclusiveWaiters_low )
                goto LABEL_35;
              do
              {
                v23 = 480LL * v21;
                if ( *(_DWORD *)&v8[4 * v21] && *(_QWORD *)(v23 + v19 + 192) == v22 )
                {
                  ExclusiveWaiters_low = *(unsigned __int16 *)(v23 + v19 + 172);
                  v24 = v20++;
                  v5[v24] = ExclusiveWaiters_low;
                  *(_DWORD *)&v8[4 * v21] = 0;
                  v19 = *(_QWORD *)&Blink[2].ActiveCount;
                }
                ++v21;
              }
              while ( v21 < LODWORD(Blink->ExclusiveWaiters) );
              if ( !v20 )
LABEL_35:
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13393);
              v25 = PtiCurrent(ExclusiveWaiters_low);
              v43[0] = *((_QWORD *)v25 + 48);
              *((_QWORD *)v25 + 48) = v43;
              v43[2] = GreDeleteFastMutex;
              v43[1] = v5;
              v26 = PtiCurrent((__int64)v43);
              v41[0] = *((_QWORD *)v26 + 48);
              *((_QWORD *)v26 + 48) = v41;
              v42 = (__int64)GreDeleteFastMutex;
              v41[1] = v8;
              v27 = PtiCurrent((__int64)v41);
              v39[0] = *((_QWORD *)v27 + 48);
              *((_QWORD *)v27 + 48) = v39;
              v40 = (__int64)CTouchProcessor::DereferencePointerInputFrame;
              v39[1] = (char *)Blink - 8;
              CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
                (CInpUnlockGuardExclusive *)v46,
                (struct CEResourceLock *)(this + 4),
                0LL);
              CTouchProcessor::SetManipulationInputTarget(
                (CTouchProcessor *)this,
                (unsigned int)Blink->SharedWaiters,
                v20,
                v5,
                0LL,
                (struct TELEMETRY_POINTER_FRAME_TIMES *)&Blink->ActiveEntries,
                0);
              CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v46);
              v29 = PtiCurrent(v28);
              v30 = v39[0];
              *((_QWORD *)v29 + 48) = v39[0];
              v40 = -1LL;
              v31 = PtiCurrent(v30);
              v32 = v41[0];
              *((_QWORD *)v31 + 48) = v41[0];
              v42 = -1LL;
              v33 = PtiCurrent(v32);
              v17 = v20 + v37;
              v37 += v20;
              *((_QWORD *)v33 + 48) = v43[0];
            }
            ExclusiveWaiters_low = LODWORD(Blink->ExclusiveWaiters);
            ++v18;
          }
          while ( v18 < (unsigned int)ExclusiveWaiters_low );
          v2 = v34;
        }
        if ( v17 != v35 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13414);
      }
      GreDeleteFastMutex((char *)v5);
    }
    if ( v8 )
      GreDeleteFastMutex(v8);
    Blink = (PERESOURCE)Blink->SystemResourcesList.Blink;
    CTouchProcessor::UnreferenceFrameInt(this, p_SpinLock);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v47);
}
