/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180268434
 * Callers:
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180268394 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180069EE8 (-_Tidy@-$vector@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1801AA688 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x1801DADD0 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CLogicalSurfaceHandleMap@@@Z @ 0x1801FBE6C (-RemoveElement@-$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CL.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(CLegacySurfaceManager *this)
{
  int i; // edi
  struct _RTL_GENERIC_TABLE *j; // rbx
  PVOID v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  CLegacySurfaceManager::ReleaseCaptureBitsResponse(this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems(this);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    operator delete(*(void **)(*((_QWORD *)this + 13) + 16LL * (unsigned int)(i - 1) + 8));
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 104, 0x10u);
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy((__int64)this + 232);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 144);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 104);
  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  for ( j = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
        ;
        CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::RemoveElement(j, v4) )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(j, &RestartKey);
    if ( !v4 )
      break;
  }
}
