/*
 * XREFs of ??0CProcessMemoryReport@System@Windows@@QEAA@XZ @ 0x1800102C4
 * Callers:
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x1800101EC (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180010344 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@Sy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

Windows::System::CProcessMemoryReport *__fastcall Windows::System::CProcessMemoryReport::CProcessMemoryReport(
        Windows::System::CProcessMemoryReport *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>();
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::`vftable';
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &Windows::System::CProcessMemoryReport::`vftable';
  *((_QWORD *)this + 1) = &Windows::System::CProcessMemoryReport::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::System::CProcessMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  return this;
}
