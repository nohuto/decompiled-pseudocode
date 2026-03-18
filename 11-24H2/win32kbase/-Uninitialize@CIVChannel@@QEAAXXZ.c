/*
 * XREFs of ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021B4FC
 * Callers:
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1400D0420 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1400D0470 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x140188DB0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     IVWorkerThread @ 0x140217C48 (IVWorkerThread.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CIVChannel::Uninitialize(CIVChannel *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  void (__fastcall *v4)(_QWORD); // rax

  if ( isChildPartition((__int64)this) )
  {
    v3 = *((_DWORD *)this + 2);
    v4 = *(void (__fastcall **)(_QWORD))(W32GetUserSessionState(v2) + 19608);
    if ( v4 )
      v4(v3);
  }
}
