/*
 * XREFs of ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180191250
 * Callers:
 *     ?RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z @ 0x18018D4E8 (-RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?attach@?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z @ 0x180097950 (-attach@-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z.c)
 *     ??$?9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800C8240 (--$-9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ?RemoveInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801883D0 (-RemoveInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     ?Haptics@PenInterface@@QEAA?AV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180190CF0 (-Haptics@PenInterface@@QEAA-AV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDevice::RemoveInterface(_QWORD *a1, __int64 *a2)
{
  __int64 *v4; // rsi
  __int64 *v5; // rax
  __int64 *i; // rbx
  __int64 v7; // rdx
  PenHapticDevice **v8; // rcx
  PenHapticDevice *v9; // rbx
  __int64 *v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+10h]

  v13 = a2;
  v4 = (__int64 *)a1[11];
  v5 = (__int64 *)a1[10];
  if ( v5 != v4 )
  {
    do
    {
      if ( *v5 == *a2 )
        break;
      ++v5;
    }
    while ( v5 != v4 );
    if ( v5 != v4 )
    {
      for ( i = v5 + 1; i != v4; ++i )
      {
        v7 = *i;
        *i = 0LL;
        wil::com_ptr_t<PenInterface,wil::err_exception_policy>::attach(i - 1, v7);
      }
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a1[11] - 8LL));
      a1[11] -= 8LL;
    }
  }
  if ( wil::operator!=<PenHapticDevice,wil::err_exception_policy>(a1 + 13) )
  {
    v9 = *v8;
    v10 = PenInterface::Haptics(*a2, &v12);
    PenHapticDevice::RemoveInterface(v9, v10);
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
