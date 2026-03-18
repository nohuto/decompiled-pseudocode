/*
 * XREFs of ?GetHighestBitPos@@YAII@Z @ 0x1402D20F0
 * Callers:
 *     DxgkCreateContext @ 0x1401B8760 (DxgkCreateContext.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402D1554 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1402D17A0 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHighestBitPos(unsigned int a1)
{
  __int64 result; // rax

  for ( result = 0LL; ; result = (unsigned int)(result + 1) )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return result;
}
