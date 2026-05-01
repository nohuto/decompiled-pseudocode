/*
 * XREFs of ??1CImmersiveShellCreationBehavior@@EEAA@XZ @ 0x1803DFF34
 * Callers:
 *     ??_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z @ 0x1803EBBF0 (--_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEAVCThreadRefHost@@@Z @ 0x18018A030 (-reset@-$unique_ptr@VCThreadRefHost@@U-$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEA.c)
 *     ??1ComponentCreator@@QEAA@XZ @ 0x1803DFF80 (--1ComponentCreator@@QEAA@XZ.c)
 */

void __fastcall CImmersiveShellCreationBehavior::~CImmersiveShellCreationBehavior(
        CImmersiveShellCreationBehavior *this)
{
  *(_QWORD *)this = &CImmersiveShellCreationBehavior::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveShellCreationBehavior>>'};
  *((_QWORD *)this + 4) = &CImmersiveShellCreationBehavior::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellCreationBehavior>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveShellCreationBehavior>>'};
  ComponentCreator::~ComponentCreator((CImmersiveShellCreationBehavior *)((char *)this + 72));
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 7,
    0LL);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)this);
}
