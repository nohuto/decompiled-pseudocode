/*
 * XREFs of ?HasPendingScribble@CScribbleSwapChain@@UEBA_NXZ @ 0x1801D1110
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x1800657E0 (-GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z.c)
 *     ?GetBufferCount@CDDisplaySwapChain@@UEBAIXZ @ 0x1801D1250 (-GetBufferCount@CDDisplaySwapChain@@UEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CScribbleSwapChain::HasPendingScribble(CScribbleSwapChain *this)
{
  __int64 v1; // rdi
  unsigned int *v2; // rbx
  unsigned int (__fastcall *v3)(CDDisplaySwapChain *__hidden); // rax
  unsigned int BufferCount; // eax
  struct ISwapChainBuffer *(__fastcall *v5)(CDDisplaySwapChain *, unsigned int); // rax
  __int64 v6; // rcx
  struct ISwapChainBuffer *v7; // rcx
  __int64 (*v8)(void); // rax
  _QWORD *v9; // rsi
  struct ISwapChainBuffer *v11; // rax
  char v12; // al

  v1 = 0LL;
  v2 = (unsigned int *)((char *)this - 232);
  while ( 1 )
  {
    v3 = *(unsigned int (__fastcall **)(CDDisplaySwapChain *__hidden))(*(_QWORD *)v2 + 88LL);
    if ( v3 == CLegacySwapChain::GetBufferCount )
    {
      BufferCount = v2[118];
    }
    else if ( v3 == CDDisplaySwapChain::GetBufferCount )
    {
      BufferCount = CDDisplaySwapChain::GetBufferCount((CDDisplaySwapChain *)v2);
    }
    else
    {
      BufferCount = v3((CDDisplaySwapChain *)v2);
    }
    if ( (unsigned int)v1 >= BufferCount )
      return 0;
    v5 = *(struct ISwapChainBuffer *(__fastcall **)(CDDisplaySwapChain *, unsigned int))(*(_QWORD *)v2 + 208LL);
    if ( v5 == CLegacySwapChain::GetPhysicalBuffer )
    {
      v6 = *((_QWORD *)v2 + 44);
      v7 = (unsigned int)v1 >= (unsigned __int64)((*((_QWORD *)v2 + 45) - v6) >> 3)
         ? 0LL
         : *(struct ISwapChainBuffer **)(v6 + 8 * v1);
    }
    else
    {
      v11 = v5 == CDDisplaySwapChain::GetPhysicalBuffer
          ? CDDisplaySwapChain::GetPhysicalBuffer((CDDisplaySwapChain *)v2, v1)
          : v5((CDDisplaySwapChain *)v2, v1);
      v7 = v11;
    }
    if ( v7 )
    {
      v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 144LL);
      if ( (char *)v8 == (char *)CSwapChainBuffer::HasPendingScribble )
      {
        v9 = (_QWORD *)((char *)v7 + 112);
        if ( !wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v7 + 14) )
          goto LABEL_11;
        v12 = *(_BYTE *)(*v9 + 256LL);
      }
      else
      {
        v12 = v8();
      }
      if ( v12 )
        return 1;
    }
LABEL_11:
    v1 = (unsigned int)(v1 + 1);
  }
}
