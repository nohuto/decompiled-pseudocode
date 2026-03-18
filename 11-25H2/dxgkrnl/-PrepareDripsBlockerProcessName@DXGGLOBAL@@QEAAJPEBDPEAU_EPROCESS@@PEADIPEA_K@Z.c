/*
 * XREFs of ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402ECD18
 * Callers:
 *     ?DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z @ 0x1402ECCD0 (-DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402EDAAC (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PrepareDripsBlockerProcessName(
        DXGGLOBAL *this,
        const char *a2,
        struct _EPROCESS *a3,
        char *a4,
        unsigned int a5)
{
  DripsBlockerTrackingHelper *v7; // rcx
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 2064), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  LODWORD(a4) = DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v7, 0LL, a3, a4, a5, 0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return (unsigned int)a4;
}
