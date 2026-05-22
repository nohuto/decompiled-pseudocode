/*
 * XREFs of ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x180093B88
 * Callers:
 *     ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x180084FF4 (--$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGestu.c)
 * Callees:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000D544 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??4?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180093C10 (--4-$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellGesturesProcessor::RuntimeClassInitialize(ShellGesturesProcessor *this)
{
  struct KernelContextProvider *Instance; // rax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx

  Instance = KernelContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<InputConfigContextProvider>::operator=((char *)this + 24, Instance);
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  if ( *(ShellGesturesProcessor **)(v4 + 80) != this )
  {
    if ( this )
      (*(void (__fastcall **)(ShellGesturesProcessor *))(*(_QWORD *)this + 8LL))(this);
    v5 = *(_QWORD *)(v4 + 80);
    *(_QWORD *)(v4 + 80) = this;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return 0LL;
}
