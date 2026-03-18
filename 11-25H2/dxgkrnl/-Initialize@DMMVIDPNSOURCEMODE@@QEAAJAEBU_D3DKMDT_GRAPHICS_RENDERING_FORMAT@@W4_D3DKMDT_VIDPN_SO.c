/*
 * XREFs of ?Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x140038418
 * Callers:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14008D2BC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?_ValidateDdiGraphicsRenderingFormat@DMMVIDPNSOURCEMODE@@CAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@@Z @ 0x140038494 (-_ValidateDdiGraphicsRenderingFormat@DMMVIDPNSOURCEMODE@@CAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORM.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::Initialize(
        DMMVIDPNSOURCEMODE *this,
        const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *a2,
        enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE a3)
{
  int v6; // esi
  __int64 result; // rax

  v6 = DMMVIDPNSOURCEMODE::_ValidateDdiGraphicsRenderingFormat(a2);
  if ( v6 < 0 )
  {
    WdLogSingleEntry0(3LL);
    result = (unsigned int)v6;
    WdLogGlobalForLineNumber = 79;
  }
  else
  {
    *((_DWORD *)this + 18) = a3;
    result = 0LL;
    *(_OWORD *)((char *)this + 76) = *(_OWORD *)&a2->PrimSurfSize.cx;
    *(_OWORD *)((char *)this + 92) = *(_OWORD *)&a2->Stride;
  }
  return result;
}
