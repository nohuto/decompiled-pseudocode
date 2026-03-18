/*
 * XREFs of ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ @ 0x1802BD5E0
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800F3500 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1801CA704 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?CleanupDelayUnpin@CD3DDevice@@AEAAXXZ @ 0x1802B8E94 (-CleanupDelayUnpin@CD3DDevice@@AEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1802C5F48 (-_Erase@-$_Tree@V-$_Tmap_traits@U_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Window.c)
 */

void __fastcall CD3DDevice::ProcessDeviceLost(CD3DDevice *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 1498) )
  {
    *((_BYTE *)this + 1498) = 1;
    CD3DDevice::DestroyAllResources(this);
    CD3DDevice::CleanupDelayUnpin(this);
    v2 = qword_1803FABB0;
    v3 = qword_1803FABB0;
    v4 = *(_QWORD *)(qword_1803FABB0 + 8);
    v5 = v4;
    if ( !*(_BYTE *)(v4 + 25) )
    {
      v6 = *((_QWORD *)this + 117);
      do
      {
        if ( *(_QWORD *)(v5 + 32) >= v6 )
        {
          if ( *(_BYTE *)(v3 + 25) && v6 < *(_QWORD *)(v5 + 32) )
            v3 = v5;
          v2 = v5;
          v5 = *(_QWORD *)v5;
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 16);
        }
      }
      while ( !*(_BYTE *)(v5 + 25) );
    }
    if ( !*(_BYTE *)(v3 + 25) )
      v4 = *(_QWORD *)v3;
    while ( !*(_BYTE *)(v4 + 25) )
    {
      if ( *((_QWORD *)this + 117) >= *(_QWORD *)(v4 + 32) )
      {
        v4 = *(_QWORD *)(v4 + 16);
      }
      else
      {
        v3 = v4;
        v4 = *(_QWORD *)v4;
      }
    }
    v7[1] = v3;
    v7[0] = v2;
    std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::_Erase(
      &qword_1803FABB0,
      v7);
  }
}
