/*
 * XREFs of ?GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z @ 0x140064CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14002F41C (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetSpatialResourcePoolSize(
        CAudioDeviceGraph *this,
        unsigned int *a2,
        unsigned int *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  CPipeInstance *v9; // rcx
  unsigned int v10; // ebx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-28h] BYREF
  struct IAdaptiveSpatialAudioRenderer *v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v9 = (CPipeInstance *)*((_QWORD *)this + 20);
  v13 = 0LL;
  v12 = v4;
  v10 = -2147467262;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(v9, &v13) >= 0 )
    v10 = (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, unsigned int *, unsigned int *, int *))(*(_QWORD *)v13 + 56LL))(
            v13,
            a2,
            a3,
            a4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
  CSAutoLock<1>::~CSAutoLock<1>(&v12);
  return v10;
}
