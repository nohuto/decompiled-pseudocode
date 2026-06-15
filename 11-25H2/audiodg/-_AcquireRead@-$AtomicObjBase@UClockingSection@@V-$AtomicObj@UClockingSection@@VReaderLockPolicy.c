/*
 * XREFs of ?_AcquireRead@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEBUClockingSection@@AEA_N@Z @ 0x14008F728
 * Callers:
 *     ??0ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14008DEB8 (--0ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireRead(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3)
{
  volatile signed __int32 *v6; // r9
  signed __int32 v7; // edx
  signed __int32 v8; // ecx
  bool v9; // zf
  signed __int32 v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  __int16 v13; // [rsp+24h] [rbp-24h]

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v6 = *(volatile signed __int32 **)(a1 + 56);
  v7 = _InterlockedCompareExchange(v6, 0, 0);
  if ( v7 == *(_DWORD *)(a1 + 48) )
  {
    *a3 = 0;
  }
  else
  {
    *a3 = 1;
    v12 = 83887106;
    v13 = 769;
    do
    {
      v8 = *((unsigned __int8 *)&v12 + (v7 & 0xFFFFFFF7));
      v10 = _InterlockedCompareExchange(v6, v8, v7);
      v9 = v7 == v10;
      v7 = v10;
    }
    while ( !v9 );
    *(_DWORD *)(a1 + 48) = v8;
  }
  *a2 = &v6[25 * ((unsigned __int64)*(unsigned int *)(a1 + 48) >> 1) + 1];
  return 0LL;
}
