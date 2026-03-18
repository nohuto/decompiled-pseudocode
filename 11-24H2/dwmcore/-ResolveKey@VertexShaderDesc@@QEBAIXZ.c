/*
 * XREFs of ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x1801C2334
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1801C1680 (InitializeShaderLinkingInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertexShaderDesc::ResolveKey(VertexShaderDesc *this)
{
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // ecx
  __int64 result; // rax

  if ( *((_DWORD *)this + 1) == -1 )
    return 0x80000000LL;
  v2 = *(_BYTE *)this != 0 ? 4 : 0;
  v3 = v2 | 8;
  if ( !*((_BYTE *)this + 1) )
    v3 = v2;
  v4 = v3 | 2;
  if ( !*((_BYTE *)this + 2) )
    v4 = v3;
  result = v4 | 1;
  if ( *((_DWORD *)this + 1) != 4 )
    return v4;
  return result;
}
