/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801AAB90
 * Callers:
 *     ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x1801A9ED0 (-ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_PROPERTI.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801AA26C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801AA8F8 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall DynArray<unsigned char,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + a3;
  if ( (unsigned int)v3 + a3 < (unsigned int)v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 <= *(_DWORD *)(a1 + 20) )
    {
      memcpy_0((void *)(*(_QWORD *)a1 + v3), a2, a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
    else
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 1, a3, a2);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC0u, 0LL);
    }
  }
  return v6;
}
