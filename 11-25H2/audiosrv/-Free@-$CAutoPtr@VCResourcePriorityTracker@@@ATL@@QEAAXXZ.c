/*
 * XREFs of ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x180027AA4
 * Callers:
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18002752C (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1SaDeviceParams@@QEAA@XZ @ 0x180027A34 (--1SaDeviceParams@@QEAA@XZ.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18006723C (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x180081FB0 (--1-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ.c)
 *     ?Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800F2A90 (-Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 *     ?Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800F2B10 (-Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 * Callees:
 *     ??1CResourcePriorityTracker@@QEAA@XZ @ 0x180027BB0 (--1CResourcePriorityTracker@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
