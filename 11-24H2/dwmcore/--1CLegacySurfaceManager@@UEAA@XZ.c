/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18025E4F8
 * Callers:
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18025E458 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18003FF68 (-_Tidy@-$vector@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18018B058 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x1801CD700 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CLogicalSurfaceHandleMap@@@Z @ 0x1801EFC2C (-RemoveElement@-$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CL.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(char **this)
{
  int i; // edi
  struct _RTL_GENERIC_TABLE *j; // rbx
  PVOID v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems((CLegacySurfaceManager *)this);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    operator delete(*(void **)&this[13][16 * (i - 1) + 8]);
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 13), 0x10u);
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy(this + 29);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 22));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 18));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 13));
  *this = (char *)&CLogicalSurfaceHandleMap::`vftable';
  for ( j = (struct _RTL_GENERIC_TABLE *)(this + 1);
        ;
        CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::RemoveElement(j, v4) )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(j, &RestartKey);
    if ( !v4 )
      break;
  }
}
