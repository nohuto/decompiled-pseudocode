/*
 * XREFs of ?clear_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180071CFC
 * Callers:
 *     ??1?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180071CC8 (--1-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V-.c)
 * Callees:
 *     ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x180072028 (--$destruct_range@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@de.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@_J@Z @ 0x1800721E0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext.c)
 *     ??4?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802E8538 (--4-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@QEAAAEAV01@$$QEAV01.c)
 */

unsigned __int64 __fastcall detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 *v7; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // rbx
  unsigned __int64 result; // rax
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = (unsigned __int64 *)(a1 + 1);
  v9 = a1[1];
  v10 = *a1;
  v11 = (v9 - v10) >> 6;
  if ( a3 > v11 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_9;
  }
  v5 = v10 + (v11 << 6);
  v4 = a3 << 6;
  if ( a3 == v11 )
  {
    v12 = v7;
  }
  else
  {
    v14[2] = 0LL;
    v3 = v4 + v10;
    v14[1] = v11;
    v14[0] = v10;
    v6 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *> &,__int64>(
           v14,
           (__int64)((v11 << 6) - v4) >> 6)
       - (v4
        + v10);
    while ( v3 != v5 )
    {
LABEL_9:
      std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>::operator=(v6 + v3, v3);
      v3 += 64LL;
    }
    v12 = (unsigned __int64 *)(a1 + 1);
  }
  detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(v5 - v4, v5);
  result = *v7 - v4;
  *v12 = result;
  return result;
}
