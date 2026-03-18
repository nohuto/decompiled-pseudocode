/*
 * XREFs of ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x14007BD80
 * Callers:
 *     EtwTraceDWMGetDirtyRegion @ 0x14007A500 (EtwTraceDWMGetDirtyRegion.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x14007BA4C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     EtwTraceLifetimeAccum @ 0x14007C070 (EtwTraceLifetimeAccum.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14007BDF8 (-RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 */

__int64 __fastcall RGNOBJ::sizeSave(RGNOBJ *this, const struct REGION_CORE *a2)
{
  Win32kRS *v2; // rax
  int v3; // ebx
  int i; // edx
  _DWORD *v7; // r8

  v2 = (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    return Win32kRS::RegionCore_sizeSave(v2, a2);
  }
  else
  {
    v3 = *(_DWORD *)(((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)) + 0x18);
    v7 = *(_DWORD **)v2;
    for ( i = 0; v3; --v3 )
    {
      i += *v7 >> 1;
      v7 = (_DWORD *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
    }
    return (unsigned int)(16 * i);
  }
}
