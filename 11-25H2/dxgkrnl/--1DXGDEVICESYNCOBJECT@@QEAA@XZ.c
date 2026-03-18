/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x14033BE70
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x140034A5C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004AA28 (-VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005DA14 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005F2BC (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1401869B4 (-UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022400C (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x140334FFC (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1403A6474 (-RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  DXGDEVICE **v1; // rsi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  DXGSYNCOBJECT *v5; // rcx
  VIDMM_EXPORT *v6; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  __int64 v8; // rdx
  DXGGLOBAL *Global; // rax
  struct DXGPROCESS *v10; // rbx
  struct DXGGLOBAL *v11; // rax
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (DXGDEVICE **)((char *)this + 16);
  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    DXGDEVICE::RemoveDeviceSyncObjectFromList(*v1, this);
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent(v3);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v12, Current);
    DXGPROCESS::FreeHandleUnsafe(Current, *((_DWORD *)this + 10));
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v5 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
    if ( (*((_DWORD *)v5 + 103) & 2) != 0 )
    {
      DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(this);
    }
    else
    {
      v6 = *(VIDMM_EXPORT **)(*((_QWORD *)*v1 + 2) + 760LL);
      CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(v5);
      v8 = *(_QWORD *)(*((_QWORD *)*v1 + 5) + 64LL);
      if ( v8 )
        v8 = *(_QWORD *)(v8 + 8);
      VIDMM_EXPORT::VidMmUnmapCpuVA(v6, (struct VIDMM_PROCESS *)v8, CurrentValueStorage);
    }
  }
  if ( *((_QWORD *)this + 4) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 4), 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v10 = DXGPROCESS::GetCurrent(v3);
    v11 = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v11 + 206),
      *((_DWORD *)v10 + 122),
      *((_DWORD *)this + 11));
  }
  *((_QWORD *)this + 2) = 0LL;
}
