/*
 * XREFs of ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800CFF68
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D0C6C (-Unregister@SpectrumListener@@QEAAXXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009ADA4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC5E8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAK$$QEAK@Z @ 0x1800CEFA4 (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAK$$QEAK@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800D0028 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::RemoveDevice(MPCRawInputProvider *this, unsigned int a2)
{
  _BYTE *v4; // rdx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( GetCurrentThreadId() == *((_DWORD *)this + 22) && std::_Atomic_storage<bool,1>::load((__int64)this + 80) )
  {
    MPCRawInputProvider::RemoveDeviceImpl(this, a2);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    v4 = (_BYTE *)*((_QWORD *)this + 21);
    if ( v4 == *((_BYTE **)this + 22) )
    {
      std::vector<unsigned long>::_Emplace_reallocate<unsigned long>((const void **)this + 20, v4, &v6);
    }
    else
    {
      *(_DWORD *)v4 = a2;
      *((_QWORD *)this + 21) += 4LL;
    }
    wil::details::SetEvent(*((wil::details **)this + 9), v4);
    if ( this != (MPCRawInputProvider *)-96LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
  return 0LL;
}
