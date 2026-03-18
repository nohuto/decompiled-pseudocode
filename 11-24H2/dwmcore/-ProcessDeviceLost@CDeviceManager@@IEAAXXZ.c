/*
 * XREFs of ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800F3500
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x1800ED598 (-ReleaseExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x1800ED658 (-AcquireExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x1800F3600 (-DeleteUnusedDevices@CDeviceManager@@AEAAXXZ.c)
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x18021CD6C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1802B78A0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1802B78D8 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_po.c)
 *     ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ @ 0x1802BD5E0 (-ProcessDeviceLost@CD3DDevice@@IEAAXXZ.c)
 */

void __fastcall CDeviceManager::ProcessDeviceLost(CDeviceManager *this)
{
  CD3DDevice **v1; // rsi
  CDeviceManager **v2; // rbp
  CDeviceManager **v3; // rdi
  CD3DDevice **v4; // rbx
  CDeviceManager *v5; // rcx
  CD3DDevice **v6; // rdi
  CD3DDevice **v7; // r14
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  CD3DDevice **v9; // [rsp+30h] [rbp-28h]
  CDeviceManager *v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = this;
  v1 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v2 = (CDeviceManager **)xmmword_1803FAAF0;
  v3 = (CDeviceManager **)qword_1803FAAE8;
  v4 = 0LL;
  while ( v3 != v2 )
  {
    v10 = *v3;
    if ( *((_DWORD *)v10 + 278) )
    {
      if ( v4 == v1 )
      {
        std::vector<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>::_Emplace_reallocate<CD3DDevice * &>(
          &v8,
          v4,
          &v10);
        v1 = v9;
        v4 = (CD3DDevice **)*((_QWORD *)&v8 + 1);
      }
      else
      {
        wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(v4++);
        *((_QWORD *)&v8 + 1) = v4;
      }
    }
    v3 += 2;
  }
  LeaveCriticalSection(&CriticalSection);
  v6 = (CD3DDevice **)v8;
  if ( (CD3DDevice **)v8 != v4 )
  {
    CTreeLock::AcquireExclusive((RTL_SRWLOCK *)g_pComposition + 713);
    v7 = v6;
    do
    {
      CD3DDevice::ProcessDeviceLost(*v7);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)v7++);
    }
    while ( v7 != v4 );
    CTreeLock::ReleaseExclusive((CGlobalComposition *)((char *)g_pComposition + 5704));
  }
  CDeviceManager::DeleteUnusedDevices(v5);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>>(v6, v4);
    std::_Deallocate<16,0>(v6, ((char *)v1 - (char *)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
