/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1400C3F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1400C526C (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140205F48 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140206FEC (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::AdjustCaptureOnRetrieval(
        __int64 a1,
        const struct tagINPUTDEST *a2,
        int a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _BYTE v13[48]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v14[80]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-58h] BYREF
  int v16; // [rsp+BCh] [rbp-4Ch]

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v13, (struct CEResourceLock *)(a1 + 32), a4);
  if ( a6 )
  {
LABEL_2:
    if ( a8 && a6 && (a9 == 594 || a9 == 583) )
      CTouchProcessor::ReleasePointerCapture((CTouchProcessor *)a1, (unsigned __int64)a4, a7);
    goto LABEL_3;
  }
  if ( (a3 & 0x10000) == 0 )
  {
    if ( a9 == 593 )
    {
      CInputDest::CInputDest((CInputDest *)v14, a2);
      CTouchProcessor::SetPointerExplicitCapture(
        (CTouchProcessor *)a1,
        (unsigned __int64)a4,
        (const struct CInputDest *)v14,
        a5,
        a7);
      CInputDest::~CInputDest((CInputDest *)v14);
      goto LABEL_3;
    }
    goto LABEL_2;
  }
  CInputDest::CInputDest((CInputDest *)v14, a2);
  CTouchProcessor::SetPointerImplicitCapture(
    (CTouchProcessor *)a1,
    (unsigned __int64)a4,
    (const struct CInputDest *)v14,
    a5,
    a7);
  if ( v16 )
    HMAssignmentUnlock(&v15);
LABEL_3:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v13);
}
