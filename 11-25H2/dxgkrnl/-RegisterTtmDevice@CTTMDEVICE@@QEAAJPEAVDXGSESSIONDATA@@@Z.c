/*
 * XREFs of ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1401F48B0
 * Callers:
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1401F3BC0 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403ED2BC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsTtmDeviceListLockOwner@DXGSESSIONMGR@@QEAAEXZ @ 0x140078D50 (-IsTtmDeviceListLockOwner@DXGSESSIONMGR@@QEAAEXZ.c)
 */

__int64 __fastcall CTTMDEVICE::RegisterTtmDevice(CTTMDEVICE *this, struct DXGSESSIONDATA *a2)
{
  struct DXGGLOBAL *Global; // rax
  char v5; // si
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rsi
  struct DXGSESSIONDATA **v11; // rdx
  struct DXGSESSIONDATA *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  _QWORD v15[4]; // [rsp+50h] [rbp-28h] BYREF

  v15[1] = 0LL;
  v15[3] = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  if ( !DXGSESSIONMGR::IsTtmDeviceListLockOwner(*((DXGSESSIONMGR **)Global + 118)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6430;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->GetSessionMgr()->IsTtmDeviceListLockOwner()",
      6430LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  v5 = *((_BYTE *)this + 912);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    WdLogSingleEntry2(4LL, this, -1073741130LL);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 6451;
  }
  else
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
    *((_DWORD *)this + 2 * v7 + 157) = 0x40000000;
    v15[0] = CTTMDEVICE::CloseCallback;
    *((_DWORD *)this + 2 * (unsigned int)v7 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    v8 = *((unsigned int *)this + 21);
    v15[2] = &CTTMDEVICE::SetDisplayStateCallback;
    v9 = TtmNotifyDeviceArrival(1LL, this, v15, v8, (char *)this + 608);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = (struct DXGSESSIONDATA **)*((_QWORD *)a2 + 2328);
      v12 = (CTTMDEVICE *)((char *)this + 16);
      if ( *v11 != (struct DXGSESSIONDATA *)((char *)a2 + 18616) )
        __fastfail(3u);
      *(_QWORD *)v12 = (char *)a2 + 18616;
      *((_QWORD *)this + 3) = v11;
      *v11 = v12;
      *((_QWORD *)a2 + 2328) = v12;
      *((_QWORD *)this + 4) = a2;
    }
    else
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 20), *((_QWORD *)this + 8), v9);
      v14 = *((_QWORD *)this + 8);
      v13 = *((unsigned int *)this + 20);
      WdLogGlobalForLineNumber = 6480;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to report TTM device for target 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
        v13,
        v14,
        v10,
        0LL,
        0LL);
    }
    return (unsigned int)v10;
  }
  return result;
}
