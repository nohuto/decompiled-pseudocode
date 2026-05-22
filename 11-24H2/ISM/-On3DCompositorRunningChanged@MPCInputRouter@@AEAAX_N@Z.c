/*
 * XREFs of ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FE290
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18004F794 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18004E6D8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18004E71C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FD7A0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FE9E4 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 */

void __fastcall MPCInputRouter::On3DCompositorRunningChanged(MPCInputRouter *this, char a2)
{
  __int64 *v2; // rdi
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax

  v2 = (__int64 *)((char *)this + 672);
  if ( a2 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(v2, (__int64)PostProcessor);
    MPCInputRouter::Initialize3DComponents(this);
  }
  else
  {
    MPCInputRouter::UnInitialize3DComponents(this);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  }
}
