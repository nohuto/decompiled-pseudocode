/*
 * XREFs of ?CreateCompositionFrameCollection@CTokenManager@@UEAAJPEAPEAUICompositionFrameCollection@@@Z @ 0x14009A260
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CTokenManager::CreateCompositionFrameCollection(
        CTokenManager *this,
        struct ICompositionFrameCollection **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = -1073741801;
  v4 = operator new(0x30uLL, 0x63634D54u, 256LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CCompositionFrameCollection::`vftable';
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_BYTE *)(v4 + 40) = 0;
    v3 = 0;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    *a2 = (struct ICompositionFrameCollection *)v4;
  }
  return v3;
}
