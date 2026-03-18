/*
 * XREFs of ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x180146A68
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801469A0 (--0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18018F780 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18018F7D0 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x18018FA10 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18018FF90 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190634 (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18021F5C8 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 * Callees:
 *     ?AddRef@CEffectCompilationTask@@UEAAKXZ @ 0x180146320 (-AddRef@CEffectCompilationTask@@UEAAKXZ.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(CEffectCompilationTask **a1)
{
  CEffectCompilationTask *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = **(void (***)(void))v1;
    if ( (char *)v2 == (char *)CEffectCompilationTask::AddRef )
    {
      CEffectCompilationTask::AddRef(v1);
    }
    else if ( (char *)v2 == (char *)CMILRefCountImpl::AddReference )
    {
      CMILRefCountImpl::AddReference(v1);
    }
    else
    {
      v2();
    }
  }
}
