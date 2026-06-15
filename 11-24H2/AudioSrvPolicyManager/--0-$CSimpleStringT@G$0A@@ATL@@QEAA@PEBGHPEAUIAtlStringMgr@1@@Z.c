/*
 * XREFs of ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180044F40
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180045BBC (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001E904 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800211E6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800432D4 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     memcpy_0 @ 0x180048BAC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
        __int64 *a1,
        const void *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, _QWORD, __int64))
{
  __int64 v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  void *v9; // rcx
  size_t v10; // r8

  v4 = (int)a3;
  if ( !a4 )
    ATL::AtlThrowImpl(-2147467259);
  if ( !a2 && a3 )
    ATL::AtlThrowImpl(-2147024809);
  v7 = (**a4)(a4, a3, 2LL);
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  *a1 = v7 + 24;
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v4);
  v9 = (void *)*a1;
  v10 = 2 * v4;
  if ( 2 * v4 )
  {
    if ( v9 )
    {
      if ( a2 )
      {
        memcpy_0(v9, a2, v10);
        return a1;
      }
      memset_0(v9, 0, v10);
    }
    *(_DWORD *)_o__errno(v9, v8, v10) = 22;
    invalid_parameter_noinfo();
  }
  return a1;
}
