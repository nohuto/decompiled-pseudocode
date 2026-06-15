/*
 * XREFs of ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x1800175D4
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180016D04 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??$_Construct_in_place@VCPlaybackReference@@PEAVCPlaybackNotifier@@AEAPEBG@std@@YAXAEAVCPlaybackReference@@$$QEAPEAVCPlaybackNotifier@@AEAPEBG@Z @ 0x180016200 (--$_Construct_in_place@VCPlaybackReference@@PEAVCPlaybackNotifier@@AEAPEBG@std@@YAXAEAVCPlayback.c)
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180016224 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall CPlaybackNotifier::AcquireReference(
        std::_Mutex_base *this,
        _QWORD *a2,
        __int64 a3)
{
  volatile signed __int32 **v4; // rdi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // r14
  std::_Ref_count_base *v10; // rcx
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  std::_Mutex_base *v14; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+10h]
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF
  std::_Mutex_base *v17; // [rsp+88h] [rbp+20h]

  v16 = a3;
  v15 = a2;
  v4 = (volatile signed __int32 **)a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v14 = this;
  ProcessHeap = GetProcessHeap();
  v7 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x88uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<CPlaybackReference>::`vftable';
    std::_Construct_in_place<CPlaybackReference,CPlaybackNotifier *,unsigned short const * &>(
      (__int64)(v7 + 4),
      &v14,
      &v16);
  }
  else
  {
    v8 = 0LL;
  }
  try
  {
    v9 = v8 + 4;
    v17 = this;
    std::_Mutex_base::lock(this);
    CPlaybackNotifier::UpdateAudioPlaybackStatus(this, 0, a3);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v9 = v8 + 4;
    }
    *v4 = v9;
    v10 = (std::_Ref_count_base *)v4[1];
    v4[1] = v8;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    _Mtx_unlock(this);
    if ( v8 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x269,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v11);
    return (volatile signed __int32 **)v15;
  }
  return v4;
}
