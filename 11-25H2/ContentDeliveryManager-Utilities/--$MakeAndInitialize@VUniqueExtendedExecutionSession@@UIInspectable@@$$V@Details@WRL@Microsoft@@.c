/*
 * XREFs of ??$MakeAndInitialize@VUniqueExtendedExecutionSession@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18008C2CC
 * Callers:
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18008DC18 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FF0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0UniqueExtendedExecutionSession@@QEAA@XZ @ 0x18008CAE4 (--0UniqueExtendedExecutionSession@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18008EB08 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UniqueExtendedExecutionSession,IInspectable,>(_QWORD *a1)
{
  void *v2; // rax
  int v3; // edi
  struct IUnknown *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = (struct IUnknown *)UniqueExtendedExecutionSession::UniqueExtendedExecutionSession((UniqueExtendedExecutionSession *)v2);
    v7 = v4;
    v6 = 0LL;
    v3 = UniqueExtendedExecutionSession::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      v3 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))v4->lpVtbl->QueryInterface)(
             v4,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
      ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
    }
    else if ( v4 )
    {
      ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v6);
  return (unsigned int)v3;
}
