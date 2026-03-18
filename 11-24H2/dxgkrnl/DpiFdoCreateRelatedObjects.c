/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x140404094
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D260 (DpiQueryIntegratedDescriptorWrapper.c)
 *     ?Acquire@CHILD_RELATIONS_AUTO_LOCK@@QEAAXXZ @ 0x140064088 (-Acquire@CHILD_RELATIONS_AUTO_LOCK@@QEAAXXZ.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140085410 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     DpiPdoRemovePdoObjects @ 0x1402558C8 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x140255D5C (DpiGdoDestroyGdiObjects.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x140259010 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402CA614 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031DC40 (DpiFdoInvalidateChildRelations.c)
 *     DpiGdoCreateGdiObjects @ 0x1403F1B3C (DpiGdoCreateGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4)
{
  __int64 v4; // rbx
  unsigned int v9; // r8d
  struct _LUID v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r8
  __int16 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h]
  unsigned __int8 v17; // [rsp+70h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v4 + 4041) & 4) == 0 )
    goto LABEL_11;
  if ( *(_DWORD *)(v4 + 6032) == 1 )
  {
    if ( *(_BYTE *)(v4 + 6393) )
    {
      v9 = *(_DWORD *)(v4 + 6376);
      v10 = *(struct _LUID *)(v4 + 6036);
      v17 = 0;
      if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_140161380, v10, v9, &v17, 0LL) >= 0 && !v17 )
        goto LABEL_11;
    }
  }
  v15 = 0;
  v16 = v4;
  CHILD_RELATIONS_AUTO_LOCK::Acquire((CHILD_RELATIONS_AUTO_LOCK *)&v15);
  LODWORD(v11) = DpiQueryIntegratedDescriptorWrapper(a1);
  if ( (int)v11 >= 0 )
  {
    if ( (_BYTE)v15 )
    {
      ExReleaseResourceLite((PERESOURCE)(v16 + 3440));
      KeLeaveCriticalRegion();
      LOBYTE(v15) = 0;
    }
LABEL_11:
    LODWORD(v11) = DpiFdoInvalidateChildRelations(a1, 6u, a4);
    if ( (int)v11 >= 0 )
    {
      if ( (*(_BYTE *)(v4 + 4040) & 1) == 0 )
        return (unsigned int)v11;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 4032), 2, v12);
      v11 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 4032));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 4032), 2u, v13);
      if ( (int)v11 >= 0 )
      {
        LODWORD(v11) = DpiGdoCreateGdiObjects(a1, a2, a3);
        if ( (int)v11 >= 0 )
          return (unsigned int)v11;
      }
      else
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 1663;
      }
    }
    DpiGdoDestroyGdiObjects(a1);
    DpiPdoRemovePdoObjects(a1, 1, (__int64)a4);
    return (unsigned int)v11;
  }
  if ( (_BYTE)v15 )
  {
    ExReleaseResourceLite((PERESOURCE)(v16 + 3440));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v11;
}
