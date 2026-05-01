/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z @ 0x1804B60AC
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFilteredCollection@@AEAPEAUIObservableObjectArray@@@Z @ 0x1804B4F04 (--$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEAVSwitchItemFilteredCollection@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@AEAPEAVSwitchItemFilteredCollection@@@Z @ 0x1804B4D3C (--$MakeAndInitialize@V-$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEA.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x1804B5B84 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x1804B5C54 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1804B5C54.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804BFF00 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::RuntimeClassInitialize(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArray *a2)
{
  _QWORD *v4; // rbx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v9; // r15
  unsigned int i; // esi
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, SwitchItemFilteredCollection **); // rbx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v16; // [rsp+60h] [rbp+30h] BYREF
  SwitchItemFilteredCollection *v17; // [rsp+70h] [rbp+40h] BYREF

  v4 = (_QWORD *)((char *)this + 336);
  v17 = this;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 42);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<SwitchItemFilteredCollection>,WeakReference::CWeakReference<SwitchItemFilteredCollection>,SwitchItemFilteredCollection * &>(
         v4,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v5);
    v7 = 479LL;
    goto LABEL_3;
  }
  v6 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register(
         (_QWORD *)this + 36,
         (__int64)a2);
  if ( v6 < 0 )
  {
    v7 = 481LL;
    goto LABEL_3;
  }
  v6 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register(
         (_QWORD *)this + 38,
         (__int64)a2);
  if ( v6 < 0 )
  {
    v7 = 482LL;
    goto LABEL_3;
  }
  v9 = (_QWORD *)((char *)this + 184);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 23, (__int64)a2);
  v16 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 24LL))(*v9, &v16);
  if ( v6 < 0 )
  {
    v7 = 487LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  for ( i = 0; i < v16; ++i )
  {
    v17 = 0LL;
    v11 = *v9;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, SwitchItemFilteredCollection **))(*(_QWORD *)*v9 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    v13 = v12(v11, i, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v17);
    v6 = v13;
    if ( v13 < 0 )
    {
      v14 = 491LL;
      goto LABEL_18;
    }
    v13 = ObservableObjectArray::_AddItem(this, &v17, 2LL);
    v6 = v13;
    if ( v13 < 0 )
    {
      v14 = 492LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      return (unsigned int)v6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  }
  return 0LL;
}
