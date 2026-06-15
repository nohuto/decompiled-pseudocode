/*
 * XREFs of ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18011C9EC
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D27C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0PolicyRule@@QEAA@XZ @ 0x18011CDD8 (--0PolicyRule@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AvoidEndpointPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
        _QWORD *a1,
        struct IAudioProcess **a2,
        struct _DynamicRoutingRule **a3)
{
  AvoidEndpointPolicyRule *v6; // rax
  AvoidEndpointPolicyRule *v7; // rbx
  int v8; // edi
  AvoidEndpointPolicyRule *v10; // [rsp+40h] [rbp+8h] BYREF
  AvoidEndpointPolicyRule *v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (AvoidEndpointPolicyRule *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v10 = v6;
  v11 = v6;
  if ( v6 )
  {
    PolicyRule::PolicyRule(v6);
    *(_QWORD *)v7 = &AvoidEndpointPolicyRule::`vftable';
    v11 = v7;
    v10 = 0LL;
    v8 = AvoidEndpointPolicyRule::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(AvoidEndpointPolicyRule *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
             a1);
    (*(void (__fastcall **)(AvoidEndpointPolicyRule *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>((void **)&v10);
  return (unsigned int)v8;
}
