/*
 * XREFs of ??0CD3DResource@@IEAA@_N@Z @ 0x18006D76C
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18006D2F8 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18006EE8C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1801C7CD0 (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x1802C14AC (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1802D1AB4 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??0CMILPoolResource@@IEAA@PEAVIMILPoolManager@@@Z @ 0x18004310C (--0CMILPoolResource@@IEAA@PEAVIMILPoolManager@@@Z.c)
 */

CD3DResource *__fastcall CD3DResource::CD3DResource(CD3DResource *this, struct IMILPoolManager *a2)
{
  __int64 v2; // rcx
  CD3DResource *result; // rax
  char v4; // dl

  CMILPoolResource::CMILPoolResource(this, a2);
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_WORD *)(v2 + 117) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  result = (CD3DResource *)v2;
  *(_BYTE *)(v2 + 116) = v4;
  return result;
}
