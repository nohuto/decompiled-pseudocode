/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x14040B520
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D800 (DpiQueryIntegratedDescriptorWrapper.c)
 *     ?Acquire@CHILD_RELATIONS_AUTO_LOCK@@QEAAXXZ @ 0x140064468 (-Acquire@CHILD_RELATIONS_AUTO_LOCK@@QEAAXXZ.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140084D80 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     DpiPdoRemovePdoObjects @ 0x14024EA98 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x14024EF2C (DpiGdoDestroyGdiObjects.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1402521D8 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402BA104 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402BD2E0 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x140375560 (DpiFdoInvalidateChildRelations.c)
 *     DpiGdoCreateGdiObjects @ 0x1403F7D4C (DpiGdoCreateGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4)
{
  __int64 v4; // rbx
  unsigned int v9; // r8d
  struct _LUID v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r8
  __int16 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h]
  unsigned __int8 v20; // [rsp+70h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v4 + 4041) & 4) == 0 )
    goto LABEL_11;
  if ( *(_DWORD *)(v4 + 6032) == 1 )
  {
    if ( *(_BYTE *)(v4 + 6393) )
    {
      v9 = *(_DWORD *)(v4 + 6376);
      v10 = *(struct _LUID *)(v4 + 6036);
      v20 = 0;
      if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_14015E3C0, v10, v9, &v20, 0LL) >= 0 && !v20 )
        goto LABEL_11;
    }
  }
  v18 = 0;
  v19 = v4;
  CHILD_RELATIONS_AUTO_LOCK::Acquire((CHILD_RELATIONS_AUTO_LOCK *)&v18);
  LODWORD(v14) = DpiQueryIntegratedDescriptorWrapper(a1, v11, v12, v13);
  if ( (int)v14 >= 0 )
  {
    if ( (_BYTE)v18 )
    {
      ExReleaseResourceLite((PERESOURCE)(v19 + 3440));
      KeLeaveCriticalRegion();
      LOBYTE(v18) = 0;
    }
LABEL_11:
    LODWORD(v14) = DpiFdoInvalidateChildRelations(a1, 6u, a4);
    if ( (int)v14 >= 0 )
    {
      if ( (*(_BYTE *)(v4 + 4040) & 1) == 0 )
        return (unsigned int)v14;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 4032), 2, v15);
      v14 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 4032));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 4032), 2u, v16);
      if ( (int)v14 >= 0 )
      {
        LODWORD(v14) = DpiGdoCreateGdiObjects(a1, a2, a3);
        if ( (int)v14 >= 0 )
          return (unsigned int)v14;
      }
      else
      {
        WdLogSingleEntry1(2LL, v14);
        WdLogGlobalForLineNumber = 1583;
      }
    }
    DpiGdoDestroyGdiObjects(a1);
    DpiPdoRemovePdoObjects(a1, 1, (__int64)a4);
    return (unsigned int)v14;
  }
  if ( (_BYTE)v18 )
  {
    ExReleaseResourceLite((PERESOURCE)(v19 + 3440));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v14;
}
