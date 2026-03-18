/*
 * XREFs of ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1801C231C
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x1801C1F68 (UseFragmentsModuleNoRef.c)
 *     AppendLights @ 0x18022AA74 (AppendLights.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180289650 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CShaderLinkingGraphBuilder::UseLibrary(
        CShaderLinkingGraphBuilder *this,
        struct ID3D11ModuleInstance *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID3D11ModuleInstance *))(**(_QWORD **)this + 32LL))(
           *(_QWORD *)this,
           a2);
}
