/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1402BC5C0
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140285A10 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x140332940 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x140053C4C (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(struct DXGDEVICE *a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  void *v5; // rcx
  void *v6; // rcx
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  char v14; // [rsp+50h] [rbp-10h]
  struct DXGDEVICE *v15; // [rsp+80h] [rbp+20h] BYREF
  char v16; // [rsp+90h] [rbp+30h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1568), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 389) != 4 && *((_DWORD *)DXGGLOBAL::GetGlobal() + 389) )
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
  v5 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 181);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 181) = 0LL;
  }
  v6 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 195);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 195) = 0LL;
  }
  v15 = 0LL;
  if ( a1 )
  {
    v8 = a1;
    v15 = a1;
  }
  else
  {
    if ( !a2 )
      goto LABEL_8;
    Current = DXGPROCESS::GetCurrent((__int64)v6);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v16, a2, Current, &v15);
    v8 = v15;
    if ( v15 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 8);
      v8 = v15;
    }
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v16);
  }
  if ( v8 )
  {
    v9 = *((_QWORD *)v8 + 235);
    if ( v9 )
    {
      v13 = *((_QWORD *)v8 + 235);
      v14 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      v8 = v15;
      if ( *(_DWORD *)(v9 + 200) == 1 && *((_BYTE *)v15 + 1936) )
      {
        VIDSCH_EXPORT::VidSchControlVSyncDevice(
          *(_QWORD *)(*(_QWORD *)(v9 + 3128) + 736LL),
          *((_QWORD *)v15 + 100),
          3LL,
          0,
          0xFFFFFFFD);
        *((_BYTE *)v8 + 1936) = 0;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    }
    if ( !a1 && _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
  }
LABEL_8:
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 389) = 4;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return 0LL;
}
