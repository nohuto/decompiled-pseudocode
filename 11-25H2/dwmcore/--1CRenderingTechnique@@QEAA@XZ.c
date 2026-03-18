/*
 * XREFs of ??1CRenderingTechnique@@QEAA@XZ @ 0x18006F0C4
 * Callers:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18006F098 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ @ 0x18006E860 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ.c)
 */

void __fastcall CRenderingTechnique::~CRenderingTechnique(CRenderingTechnique *this)
{
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>((CRenderingTechnique *)((char *)this + 24));
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 2);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((char *)this + 8);
}
