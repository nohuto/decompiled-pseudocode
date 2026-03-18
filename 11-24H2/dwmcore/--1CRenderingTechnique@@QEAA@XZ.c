/*
 * XREFs of ??1CRenderingTechnique@@QEAA@XZ @ 0x180045474
 * Callers:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180045448 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ @ 0x180044C10 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CRenderingTechnique::~CRenderingTechnique(CRenderingTechnique *this)
{
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>((CRenderingTechnique *)((char *)this + 24));
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((char *)this + 16);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((char *)this + 8);
}
