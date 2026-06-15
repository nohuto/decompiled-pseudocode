/*
 * XREFs of ??$construct@UDisplacedStreamGroup@@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@UDisplacedStreamGroup@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@UDisplacedStreamGroup@@PEAX@std@@@1@QEAUDisplacedStreamGroup@@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800DAA8C
 * Callers:
 *     ??$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA?A_TAEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800DABCC (--$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_Flist_node<DisplacedStreamGroup,void *>>>::construct<DisplacedStreamGroup,Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  v14 = *a3;
  v7 = v14;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  *a2 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *a4;
  *a4 = 0LL;
  a2[1] = v8;
  v9 = a5;
  v10 = a5[2];
  a5[2] = 0LL;
  v11 = v9[1];
  v9[1] = 0LL;
  v12 = *v9;
  *v9 = 0LL;
  a2[2] = v12;
  a2[3] = v11;
  a2[4] = v10;
  return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v14);
}
