/*
 * XREFs of ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x18004DEFC
 * Callers:
 *     ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18004DE34 (--0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1801ADB88 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1801AE108 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AE7AC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AF3D0 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18022AAF8 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 * Callees:
 *     ?AddRef@CEffectCompilationTask@@UEAAKXZ @ 0x18004DE20 (-AddRef@CEffectCompilationTask@@UEAAKXZ.c)
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
