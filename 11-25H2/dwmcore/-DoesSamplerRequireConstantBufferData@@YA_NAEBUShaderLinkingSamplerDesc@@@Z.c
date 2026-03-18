/*
 * XREFs of ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x1801D4B60
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801D3728 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoesSamplerRequireConstantBufferData(const struct ShaderLinkingSamplerDesc *a1)
{
  return *((_BYTE *)a1 + 23) || *((_BYTE *)a1 + 18) || *((_BYTE *)a1 + 19);
}
