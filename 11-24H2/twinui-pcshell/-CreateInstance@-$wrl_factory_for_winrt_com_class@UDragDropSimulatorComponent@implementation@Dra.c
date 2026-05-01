/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180579010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1801FFD44 (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18029A70C (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _QWORD *v6; // r12
  char v7; // r8
  char v8; // r10
  char v9; // r11
  char v10; // bl
  char v11; // di
  char v12; // si
  char v13; // r14
  char v14; // r15
  __int16 v15; // dx
  __int16 v16; // cx
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v19; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+38h] [rbp-40h] BYREF
  __int16 v22; // [rsp+3Ch] [rbp-3Ch]
  __int16 v23; // [rsp+3Eh] [rbp-3Ah]
  char v24; // [rsp+40h] [rbp-38h]
  char v25; // [rsp+41h] [rbp-37h]
  char v26; // [rsp+42h] [rbp-36h]
  char v27; // [rsp+43h] [rbp-35h]
  char v28; // [rsp+44h] [rbp-34h]
  char v29; // [rsp+45h] [rbp-33h]
  char v30; // [rsp+46h] [rbp-32h]
  char v31; // [rsp+47h] [rbp-31h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v20 = a4;
  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v6 = operator new(0x70uLL);
    memset_0(v6, 0, 0x70uLL);
    wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>((winrt::immersive_shell_component *)v6);
    *v6 = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
    v6[1] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
    v6[2] = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
    v6[4] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::`vftable';
    v19 = v6;
    v7 = *((_BYTE *)a3 + 8);
    v8 = *((_BYTE *)a3 + 9);
    v9 = *((_BYTE *)a3 + 10);
    v10 = *((_BYTE *)a3 + 11);
    v11 = *((_BYTE *)a3 + 12);
    v12 = *((_BYTE *)a3 + 13);
    v13 = *((_BYTE *)a3 + 14);
    v14 = *((_BYTE *)a3 + 15);
    v15 = *((_WORD *)a3 + 3);
    v16 = *((_WORD *)a3 + 2);
    v21 = *a3;
    v22 = v16;
    v23 = v15;
    v24 = v7;
    v25 = v8;
    v26 = v9;
    v27 = v10;
    v28 = v11;
    v29 = v12;
    v30 = v13;
    v31 = v14;
    v17 = *winrt::com_ptr<IObjectWithSite>::as(&v19, &v18, (__int64)&v21, (__int64)v20);
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v19);
    return v17;
  }
}
