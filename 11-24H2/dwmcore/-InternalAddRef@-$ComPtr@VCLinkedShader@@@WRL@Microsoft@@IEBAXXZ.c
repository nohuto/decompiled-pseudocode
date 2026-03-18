/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEBAXXZ @ 0x180192790
 * Callers:
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x18019268C (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CLinkedShader>::InternalAddRef(__int64 *a1)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = *a1;
  if ( *a1 )
  {
    if ( _InterlockedAdd((volatile signed __int32 *)(result + 8), 1u) <= 0 )
      return wil::details::in1diag3::Log_Hr(
               retaddr,
               (void *)0x18,
               (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
               (const char *)0x8007029CLL,
               v2);
  }
  return result;
}
