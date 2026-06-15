/*
 * XREFs of ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBV?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@Z @ 0x140038E54
 * Callers:
 *     ?SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache@@@Z @ 0x140038C74 (-SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache.c)
 * Callees:
 *     ??4?$ComPtr@UIWeakReference@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x140038F38 (--4-$ComPtr@UIWeakReference@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x140038F90 (-CreateNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@U.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::SetAt(
        __int64 a1,
        _WORD *a2,
        __int64 a3)
{
  _WORD *v4; // r10
  unsigned int v6; // r9d
  unsigned int v7; // esi
  __int64 i; // rbx
  unsigned __int16 *v10; // rax
  int v11; // edx
  int v12; // ecx

  v4 = a2;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = 0;
  while ( *a2 )
    v6 = (unsigned __int16)*a2++ + 33 * v6;
  v7 = v6 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (v6 % *(_DWORD *)(a1 + 16))); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == v6 )
      {
        v10 = *(unsigned __int16 **)i;
        do
        {
          v11 = *(unsigned __int16 *)((char *)v4 + (_QWORD)v10 - *(_QWORD *)i);
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        if ( !v12 )
          goto LABEL_7;
      }
    }
  }
  i = 0LL;
LABEL_7:
  if ( !i )
    i = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::CreateNode(
          a1,
          v4,
          v7);
  Microsoft::WRL::ComPtr<IWeakReference>::operator=(i + 8, a3);
  return i;
}
