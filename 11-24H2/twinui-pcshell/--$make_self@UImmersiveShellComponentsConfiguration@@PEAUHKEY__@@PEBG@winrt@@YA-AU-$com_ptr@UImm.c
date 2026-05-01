/*
 * XREFs of ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1803DF808
 * Callers:
 *     ?FromWinLogon@ImmersiveShellComponentsConfiguration@@SA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@winrt@@XZ @ 0x180212E58 (-FromWinLogon@ImmersiveShellComponentsConfiguration@@SA-AU-$com_ptr@UImmersiveShellComponentsCon.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803DFDA4 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
ImmersiveShellComponentsConfiguration **__fastcall winrt::make_self<ImmersiveShellComponentsConfiguration,HKEY__ *,unsigned short const *>(
        ImmersiveShellComponentsConfiguration **a1,
        HKEY *a2,
        const unsigned __int16 **a3)
{
  ImmersiveShellComponentsConfiguration *v7; // [rsp+40h] [rbp+8h]

  v7 = (ImmersiveShellComponentsConfiguration *)operator new(0x80uLL);
  ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration(v7, *a2, *a3);
  *(_QWORD *)v7 = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::producers_base<ImmersiveShellComponentsConfiguration,std::tuple<IImmersiveShellCreationBehavior>>'};
  *((_QWORD *)v7 + 1) = &ImmersiveShellComponentsConfiguration::`vftable'{for `winrt::impl::root_implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>'};
  *a1 = v7;
  return a1;
}
