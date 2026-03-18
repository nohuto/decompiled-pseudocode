/*
 * XREFs of ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x1801DCBF4
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180042F34 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802DC1F4 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

CLinkedShader *__fastcall CLinkedShader::CLinkedShader(CLinkedShader *this, struct ID3D10Blob *a2, int a3)
{
  __int64 *v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CLinkedShader::`vftable';
  v4 = (__int64 *)((char *)this + 16);
  *v4 = (__int64)a2;
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v4);
  *((_DWORD *)this + 6) = a3;
  *((_QWORD *)this + 4) = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
  *((_QWORD *)this + 5) = this;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_QWORD *)this + 7) = (char *)this + 72;
  *((_QWORD *)this + 8) = (char *)this + 88;
  return this;
}
