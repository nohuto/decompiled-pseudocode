/*
 * XREFs of ?_AcquireReadWrite@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEAUClockingSection@@@Z @ 0x140008AA8
 * Callers:
 *     ?Acquire@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x1400089F8 (-Acquire@ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReade.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireReadWrite(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 *v4; // r8
  unsigned __int32 v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int32 v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v14; // [rsp+28h] [rbp-20h]
  __int16 v15; // [rsp+2Ch] [rbp-1Ch]
  int v16; // [rsp+30h] [rbp-18h]
  __int16 v17; // [rsp+34h] [rbp-14h]

  v4 = *(volatile signed __int32 **)(a1 + 56);
  v14 = 131330;
  v15 = 1;
  v16 = 33554945;
  v17 = 256;
  v5 = _InterlockedCompareExchange(v4, 0, 0);
  v6 = v5 & 0xFFFFFFF7;
  v7 = (unsigned int)v6;
  v8 = *((unsigned __int8 *)&v14 + v6);
  if ( (v5 & 8) != 0 )
    v9 = *((unsigned __int8 *)&v16 + v7);
  else
    v9 = v5 >> 1;
  v10 = *(_QWORD *)(a1 + 56);
  v11 = 100 * v8;
  v12 = 100LL * v9;
  *(_OWORD *)(v11 + v10 + 4) = *(_OWORD *)(v12 + v10 + 4);
  *(_OWORD *)(v11 + v10 + 20) = *(_OWORD *)(v12 + v10 + 20);
  *(_OWORD *)(v11 + v10 + 36) = *(_OWORD *)(v12 + v10 + 36);
  *(_OWORD *)(v11 + v10 + 52) = *(_OWORD *)(v12 + v10 + 52);
  *(_OWORD *)(v11 + v10 + 68) = *(_OWORD *)(v12 + v10 + 68);
  *(_OWORD *)(v11 + v10 + 84) = *(_OWORD *)(v12 + v10 + 84);
  *(_DWORD *)(v11 + v10 + 100) = *(_DWORD *)(v12 + v10 + 100);
  *a2 = v11 + *(_QWORD *)(a1 + 56) + 4LL;
  return 0LL;
}
