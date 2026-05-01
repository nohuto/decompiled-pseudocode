/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_scalar_deleting_destructor_ @ 0x1806CC0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141EC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141EC0.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CRunnableTask@@MEAA@XZ @ 0x1806CBAA4 (--1CRunnableTask@@MEAA@XZ.c)
 */

CRunnableTask *__fastcall shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_scalar_deleting_destructor_(
        CRunnableTask *this,
        volatile int *a2)
{
  char v3; // di
  __int64 v4; // rcx

  v3 = (char)a2;
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::Release(
      v4,
      a2);
  }
  CRunnableTask::~CRunnableTask(this);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
