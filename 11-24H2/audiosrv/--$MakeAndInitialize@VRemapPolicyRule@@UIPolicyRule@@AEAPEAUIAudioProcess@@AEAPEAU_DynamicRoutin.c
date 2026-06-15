/*
 * XREFs of ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180124828
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x180124EFC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0RemapPolicyRule@@QEAA@XZ @ 0x180124AC4 (--0RemapPolicyRule@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<RemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  int v7; // edi
  RemapPolicyRule *v8; // rbx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  RemapPolicyRule *v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v11 = (RemapPolicyRule *)v6;
  if ( v6 )
  {
    v8 = RemapPolicyRule::RemapPolicyRule((RemapPolicyRule *)v6);
    v11 = v8;
    v10 = 0LL;
    v7 = (*(__int64 (__fastcall **)(RemapPolicyRule *, _QWORD, _QWORD))(*(_QWORD *)v8 + 136LL))(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(RemapPolicyRule *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
             a1);
      (*(void (__fastcall **)(RemapPolicyRule *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(RemapPolicyRule *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v10);
  return (unsigned int)v7;
}
