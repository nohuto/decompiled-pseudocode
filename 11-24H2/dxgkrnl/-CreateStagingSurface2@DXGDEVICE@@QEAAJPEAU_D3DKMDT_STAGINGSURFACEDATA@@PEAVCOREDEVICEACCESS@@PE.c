/*
 * XREFs of ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403BBC84
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BF068 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1403BB8C4 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1401B9A4C (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1403D937C (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateStagingSurface2(
        ADAPTER_RENDER **this,
        struct _D3DKMDT_STAGINGSURFACEDATA *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  char v9; // al
  __int64 result; // rax
  struct COREDEVICEACCESS *v11; // r8
  int AllocationResident; // edi
  _QWORD v13[54]; // [rsp+50h] [rbp-B0h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9126;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      9126LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v13, 0, 424);
  *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = v13[51];
  HIDWORD(v13[0]) = 0;
  LODWORD(v13[2]) = 3;
  v13[3] = a2;
  if ( !a5 )
    v9 = 1;
  LOBYTE(v13[51]) = v9;
  result = DXGDEVICE::CreateStandardAllocation((DXGDEVICE *)this, (struct _D3DKM_CREATESTANDARDALLOCATION *)v13, a3);
  if ( (int)result >= 0 )
  {
    AllocationResident = DXGDEVICE::MakeAllocationResident((DXGDEVICE *)this, HIDWORD(v13[6]), v11);
    if ( AllocationResident >= 0 )
    {
      *a4 = HIDWORD(v13[6]);
      if ( a5 )
        *a5 = v13[1];
    }
    else
    {
      DXGDEVICE::DestroyStagingSurface(this, HIDWORD(v13[6]), v13[1], a3);
    }
    return (unsigned int)AllocationResident;
  }
  return result;
}
