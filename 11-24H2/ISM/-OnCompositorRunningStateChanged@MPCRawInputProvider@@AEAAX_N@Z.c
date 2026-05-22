/*
 * XREFs of ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800CFC20
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18004DAB4 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC5E8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@@Z @ 0x1800CEC40 (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSpect.c)
 *     ??R?$default_delete@VMPCHeadMovementDetector@@@std@@QEBAXPEAVMPCHeadMovementDetector@@@Z @ 0x1800CF510 (--R-$default_delete@VMPCHeadMovementDetector@@@std@@QEBAXPEAVMPCHeadMovementDetector@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFAAC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D0C6C (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x1800D0E94 (--0MPCHeadMovementDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCRawInputProvider::OnCompositorRunningStateChanged(MPCRawInputProvider *this)
{
  _BYTE *v2; // rsi
  char v3; // al
  char v4; // dl
  SpectrumListener *v5; // rcx
  volatile int **v6; // rax
  volatile int *v7; // rcx
  MPCHeadMovementDetector *v8; // rax
  __int64 v9; // rcx
  MPCHeadMovementDetector *v10; // rdx
  __int64 v11; // rcx
  MPCHeadMovementDetector *v12; // rdx
  volatile int *v13; // [rsp+20h] [rbp-28h] BYREF
  MPCHeadMovementDetector *v14; // [rsp+28h] [rbp-20h]
  struct MPCRawInputProvider *v15; // [rsp+60h] [rbp+18h] BYREF
  volatile int *v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = (char *)this + 80;
  v3 = std::_Atomic_storage<bool,1>::load((__int64)this + 80);
  if ( v4 )
  {
    if ( !v3 )
    {
      v5 = (SpectrumListener *)*((_QWORD *)this + 6);
      if ( v5 )
        SpectrumListener::Unregister(v5);
      v15 = this;
      v6 = (volatile int **)Microsoft::WRL::Details::Make<SpectrumListener,MPCRawInputProvider *>((__int64 *)&v16, &v15);
      v7 = 0LL;
      if ( &v13 != v6 )
      {
        v7 = *v6;
        *v6 = 0LL;
      }
      v13 = (volatile int *)*((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = v7;
      Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(&v16);
      v14 = (MPCHeadMovementDetector *)operator new(0xB8uLL);
      v8 = MPCHeadMovementDetector::MPCHeadMovementDetector(v14);
      v10 = (MPCHeadMovementDetector *)*((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = v8;
      if ( v10 )
        std::default_delete<MPCHeadMovementDetector>::operator()(v9, v10);
      *v2 = 1;
    }
  }
  else if ( v3 )
  {
    if ( *((_QWORD *)this + 6) )
      SpectrumListener::Unregister(*((SpectrumListener **)this + 6));
    Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 6);
    v12 = (MPCHeadMovementDetector *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v12 )
      std::default_delete<MPCHeadMovementDetector>::operator()(v11, v12);
    *v2 = 0;
  }
  MPCRawInputProvider::FlushQueuedDeviceChanges(this);
}
