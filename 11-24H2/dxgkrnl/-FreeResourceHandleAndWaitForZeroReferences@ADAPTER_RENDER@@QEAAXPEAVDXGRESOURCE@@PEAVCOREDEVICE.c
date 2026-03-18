/*
 * XREFs of ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033A190
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1401B1230 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A0C0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034FAE8 (-ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINAT.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x14040B038 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x140335510 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGRESOURCE *a2,
        PERESOURCE **a3)
{
  struct DXGPROCESS *Current; // r15
  unsigned int v6; // r9d
  _QWORD *v7; // r14
  unsigned int v8; // ecx
  int v9; // edx
  char v10; // di
  const char *v11; // rdx
  unsigned int v12; // ebx
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v13, Current);
  v6 = *((_DWORD *)a2 + 4);
  v7 = (_QWORD *)((char *)Current + 280);
  v8 = (v6 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)Current + 74) )
  {
    v9 = *(_DWORD *)(*v7 + 16LL * v8 + 8);
    if ( ((v6 >> 25) & 0x60) == (v9 & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
      *(_DWORD *)(*v7 + 16 * (((unsigned __int64)v6 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)a2 + 9);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  v10 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]) )
  {
    v10 = 1;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 9);
  if ( v10 )
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3, v11);
  v12 = *((_DWORD *)a2 + 4);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), v12);
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
}
