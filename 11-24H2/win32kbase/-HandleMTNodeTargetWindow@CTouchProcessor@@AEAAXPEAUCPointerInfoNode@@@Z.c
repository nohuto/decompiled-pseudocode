/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x140200CCC
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x140200EE0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1400949B4 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400C3A98 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F4710 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x140192AE0 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F32F4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F359C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140206FEC (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(PERESOURCE *this, struct CPointerInfoNode *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  struct tagWND *UserWindow; // rax
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // r8
  __int128 v11; // xmm1
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  PERESOURCE *v18[6]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v19[56]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v20[8]; // [rsp+A0h] [rbp-60h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11743);
  v5 = *((unsigned int *)PtiCurrent(v4) + 340);
  if ( (v5 & 0x2000) == 0 && (*((_QWORD *)PtiCurrent(v5) + 170) & 0x2000000000LL) == 0 )
  {
    v6 = *((_DWORD *)a2 + 1);
    if ( (v6 & 0x200) != 0
      && (*(_DWORD *)a2 & 0x400) != 0
      && (v6 & 0x80u) != 0
      && *((_DWORD *)a2 + 111)
      && CInputDest::IsEqualByWindowHandle((__int64)a2 + 352, *((_QWORD *)a2 + 24), 1) )
    {
      if ( *((_DWORD *)a2 + 111) == 1 )
      {
        v9 = (*(_BYTE *)(*((_QWORD *)a2 + 54) + 39LL) & 8) == 0;
      }
      else
      {
        if ( *((_DWORD *)a2 + 111) != 2 )
        {
LABEL_17:
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v19,
              (struct CPointerInfoNode *)((char *)a2 + 352));
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v18,
              (struct CEResourceLock *)(this + 4),
              *((void **)a2 + 2));
            v10 = *((_QWORD *)a2 + 2);
            v11 = *((_OWORD *)a2 + 23);
            v12 = *((unsigned __int16 *)a2 + 72);
            v20[0] = *((_OWORD *)a2 + 22);
            v13 = *((_OWORD *)a2 + 24);
            v20[1] = v11;
            v14 = *((_OWORD *)a2 + 25);
            v20[2] = v13;
            v15 = *((_OWORD *)a2 + 26);
            v20[3] = v14;
            v16 = *((_OWORD *)a2 + 27);
            v20[4] = v15;
            v17 = *((_OWORD *)a2 + 28);
            v20[5] = v16;
            v20[6] = v17;
            ApiSetEditionPointerActivate(v20, v12, v10, (__int64)a2 + 160);
            CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v18);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v19);
          }
          return;
        }
        UserWindow = CInputDest::GetUserWindow((struct CPointerInfoNode *)((char *)a2 + 352));
        v9 = (unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled((__int64)UserWindow, v8) == 0;
      }
      if ( !v9 )
      {
        v9 = (*((_DWORD *)a2 + 45) & 0x10000) == 0;
        *((_DWORD *)a2 + 36) = -2;
        if ( !v9 )
        {
          CInputDest::CInputDest((CInputDest *)v20, (struct CPointerInfoNode *)((char *)a2 + 352));
          CTouchProcessor::SetPointerImplicitCapture(
            (CTouchProcessor *)this,
            *((_QWORD *)a2 + 2),
            (const struct CInputDest *)v20,
            -2,
            0);
          CInputDest::~CInputDest((CInputDest *)v20);
        }
        return;
      }
      goto LABEL_17;
    }
  }
}
