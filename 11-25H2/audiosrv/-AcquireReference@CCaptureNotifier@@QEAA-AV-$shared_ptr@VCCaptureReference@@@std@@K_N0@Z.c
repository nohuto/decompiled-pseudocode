/*
 * XREFs of ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800750A0
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180016D04 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800751D4 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 *     ??$_Construct_in_place@VCCaptureReference@@PEAVCCaptureNotifier@@AEAKAEA_NAEA_N@std@@YAXAEAVCCaptureReference@@$$QEAPEAVCCaptureNotifier@@AEAKAEA_N3@Z @ 0x1800A3F0C (--$_Construct_in_place@VCCaptureReference@@PEAVCCaptureNotifier@@AEAKAEA_NAEA_N@std@@YAXAEAVCCap.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall CCaptureNotifier::AcquireReference(
        std::_Mutex_base *this,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5)
{
  volatile signed __int32 **v7; // rdi
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // r14
  __int64 v12; // r9
  std::_Ref_count_base *v13; // rcx
  const char *v14; // r9
  int v16; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  std::_Mutex_base *v18; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+98h] [rbp+10h]
  unsigned int v20; // [rsp+A0h] [rbp+18h] BYREF
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v7 = (volatile signed __int32 **)a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v18 = this;
  v9 = (volatile signed __int32 *)operator new(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 1;
    *((_DWORD *)v9 + 3) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj2<CCaptureReference>::`vftable';
    std::_Construct_in_place<CCaptureReference,CCaptureNotifier *,unsigned long &,bool &,bool &>(
      (_DWORD)v9 + 16,
      (unsigned int)&v18,
      (unsigned int)&v20,
      (unsigned int)&v21,
      (__int64)&a5);
  }
  else
  {
    v10 = 0LL;
  }
  try
  {
    v11 = v10 + 4;
    std::_Mutex_base::lock(this);
    LOBYTE(v16) = a5;
    LOBYTE(v12) = a4;
    CCaptureNotifier::UpdateAudioCaptureStatus(this, 0LL, a3, v12, v16);
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v11 = v10 + 4;
    }
    *v7 = v11;
    v13 = (std::_Ref_count_base *)v7[1];
    v7[1] = v10;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    _Mtx_unlock(this);
    if ( v10 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2FD,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v14);
    return (volatile signed __int32 **)v19;
  }
  return v7;
}
