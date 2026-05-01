/*
 * XREFs of ??$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Z @ 0x1800651B8
 * Callers:
 *     ?HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x180065090 (-HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateChangeHandler@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800707EC (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18007249C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBackgroundAccessStateChangedListener,IBackgroundAccessStateChangeHandler,_HOST_ACTIVITY_MANAGER * &,unsigned long &>(
        _QWORD *a1,
        __int64 *a2,
        _DWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx

  *a1 = 0LL;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>(v6);
  *v7 = &CBackgroundAccessStateChangedListener::`vftable';
  v9 = Microsoft::WRL::Details::ModuleBase::module_;
  v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IBackgroundAccessStateChangeHandler>::`vftable'{for `IBackgroundAccessStateChangeHandler'};
  v7[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IBackgroundAccessStateChangeHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( v9 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL))(v9);
  *v7 = &CBackgroundAccessStateChangedListener::`vftable';
  v7[1] = &CBackgroundAccessStateChangedListener::`vftable'{for `IBackgroundAccessStateChangeHandler'};
  v7[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IBackgroundAccessStateChangeHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v10 = *a2;
  *((_DWORD *)v7 + 12) = *a3;
  v7[5] = v10;
  v11 = ((__int64 (__fastcall *)(_QWORD *, GUID *, _QWORD *))CBackgroundAccessStateChangedListener::`vftable')(
          v7,
          &GUID_43c6b434_c1be_4ad2_af03_c0deaccebd1f,
          a1);
  (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v11;
}
