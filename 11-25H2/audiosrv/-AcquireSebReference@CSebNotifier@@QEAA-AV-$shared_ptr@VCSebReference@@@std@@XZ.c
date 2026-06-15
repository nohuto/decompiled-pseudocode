/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180017410
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180016D04 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18006F2B0 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18008BB30 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
volatile signed __int32 **__fastcall CSebNotifier::AcquireSebReference(
        CSebNotifier *this,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v2; // rsi
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // r15
  int v7; // r13d
  std::_Ref_count_base *v8; // rcx
  int v10; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<CSebReference>::`vftable';
    *((_QWORD *)v4 + 2) = this;
  }
  else
  {
    v5 = 0LL;
  }
  try
  {
    v6 = v5 + 4;
    std::_Mutex_base::lock((CSebNotifier *)((char *)this + 8));
    v7 = (*(_DWORD *)this)++;
    if ( !v7 )
      CSebNotifier::PublishSebEvent(this, 1u);
    _Mtx_unlock((CSebNotifier *)((char *)this + 8));
    if ( !v7 )
      CSebNotifier::CancelDeferredSebReferenceRelease(this);
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v6 = v5 + 4;
    }
    *v2 = v6;
    v8 = (std::_Ref_count_base *)v2[1];
    v2[1] = v5;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x212,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)0x8007000ELL,
      v10);
    return a2;
  }
  return v2;
}
