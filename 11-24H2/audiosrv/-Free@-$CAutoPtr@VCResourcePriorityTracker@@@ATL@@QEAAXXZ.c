/*
 * XREFs of ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x1800168E0
 * Callers:
 *     ??1SaDeviceParams@@QEAA@XZ @ 0x180016810 (--1SaDeviceParams@@QEAA@XZ.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180016A5C (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180057F0C (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x18006F2E8 (--1-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ.c)
 *     ?Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800F7AC0 (-Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 *     ?Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800F7B40 (-Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 * Callees:
 *     ??1CResourcePriorityTracker@@QEAA@XZ @ 0x1800169EC (--1CResourcePriorityTracker@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<CResourcePriorityTracker>::Free(CResourcePriorityTracker **a1)
{
  CResourcePriorityTracker *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CResourcePriorityTracker::~CResourcePriorityTracker(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x40);
  }
  *a1 = 0LL;
}
