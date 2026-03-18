/*
 * XREFs of GetExpectedVertexShaderDesc @ 0x1801D42FC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801D3728 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     HasLighting @ 0x1801D4D64 (HasLighting.c)
 */

__int64 __fastcall GetExpectedVertexShaderDesc(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, char a5)
{
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // [rsp+40h] [rbp+18h]

  BYTE3(v10) = 0;
  if ( a5 || (HIDWORD(v10) = 2, a4 > 2) )
    HIDWORD(v10) = 4;
  if ( *(_DWORD *)(a3 + 128) != -1 || (unsigned __int8)((__int64 (*)(void))HasLighting)() )
    goto LABEL_4;
  v8 = (_QWORD *)a2[1];
  v9 = &v8[*a2];
  while ( v8 != v9 )
  {
    if ( (unsigned __int8)HasLighting(*v8) )
      goto LABEL_4;
    ++v8;
  }
  LOBYTE(v10) = 0;
  if ( a5 )
LABEL_4:
    LOBYTE(v10) = 1;
  *(_WORD *)((char *)&v10 + 1) = *(_WORD *)(a3 + 133);
  return v10;
}
