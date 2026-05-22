/*
 * XREFs of ?EnsureBamoCallbacks@MPCConstantManagerClient@@AEAAJXZ @ 0x18016D20C
 * Callers:
 *     ?add_ConstantChanged@MPCConstantManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180171D10 (-add_ConstantChanged@MPCConstantManagerClient@@UEAAJPEAU-$ITypedEventHandler@PEAVMPCConstantMana.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??0MPCConstantManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCConstantManagerClient@@@Z @ 0x1801739C0 (--0MPCConstantManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCConstantManage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCConstantManagerClient::EnsureBamoCallbacks(struct MPCManagerClientConnection **this)
{
  MPCConstantManagerClientPrincipal *v3; // rax
  struct MPCManagerClientConnection *v4; // rcx
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCConstantManagerClientPrincipal *v7; // [rsp+30h] [rbp+8h]

  if ( *((_QWORD *)this[4] + 31) )
  {
    if ( !this[5] )
    {
      v7 = (MPCConstantManagerClientPrincipal *)operator new(0x40uLL);
      v3 = MPCConstantManagerClientPrincipal::MPCConstantManagerClientPrincipal(
             v7,
             this[4],
             (struct MPCConstantManagerClient *)this);
      v4 = this[5];
      this[5] = v3;
      if ( v4 )
        (*(void (__fastcall **)(struct MPCManagerClientConnection *))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[4] + 31) + 88LL))(*((_QWORD *)this[4] + 31));
      (*(void (__fastcall **)(__int64, struct MPCManagerClientConnection *))(*(_QWORD *)(v5 + 8) + 80LL))(
        v5 + 8,
        this[5]);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
