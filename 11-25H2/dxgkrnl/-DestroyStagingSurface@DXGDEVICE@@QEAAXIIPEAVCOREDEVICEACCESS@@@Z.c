/*
 * XREFs of ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1401B749C
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BC6E8 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1403C7274 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403C7634 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::DestroyStagingSurface(
        ADAPTER_RENDER **this,
        unsigned int a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  struct DXGPROCESS *Current; // rsi
  struct DXGRESOURCE *v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 v11; // r15
  unsigned int v12; // ecx
  int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // r8
  unsigned int v20; // edx
  struct DXGALLOCATION *v21; // rax
  unsigned int v22; // ecx
  struct DXGALLOCATION **v23; // r8
  struct DXGRESOURCE *v24; // r9
  unsigned int v25; // edx
  struct DXGALLOCATION *v26; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v27[80]; // [rsp+58h] [rbp-50h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8943;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8943LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8951;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess != NULL", 8951LL, 0LL, 0LL, 0LL, 0LL);
  }
  v26 = 0LL;
  v7 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v27, Current);
  v8 = *((_DWORD *)Current + 74);
  if ( a3 )
  {
    v9 = (a3 >> 6) & 0xFFFFFF;
    v10 = a3 >> 30;
    if ( v9 < v8 )
    {
      v11 = *((_QWORD *)Current + 35);
      v12 = *(_DWORD *)(v11 + 16LL * v9 + 8);
      if ( v10 == ((v12 >> 5) & 3) && (v12 & 0x2000) == 0 )
      {
        v13 = v12 & 0x1F;
        if ( v13 )
        {
          if ( v13 == 4 )
          {
            v7 = *(struct DXGRESOURCE **)(v11 + 16LL * v9);
            if ( v7 )
              goto LABEL_15;
            goto LABEL_14;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v7 = 0LL;
LABEL_14:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8962;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pResource != NULL", 8962LL, 0LL, 0LL, 0LL, 0LL);
LABEL_15:
    if ( v9 >= *((_DWORD *)Current + 74) )
      goto LABEL_36;
    v14 = *((_QWORD *)Current + 35);
    v15 = *(_DWORD *)(v14 + 16LL * v9 + 8);
    if ( v10 != ((v15 >> 5) & 3) || (v15 & 0x2000) != 0 || (v15 & 0x1F) == 0 )
      goto LABEL_36;
    v16 = a3;
    goto LABEL_35;
  }
  v17 = a2 >> 30;
  v18 = (a2 >> 6) & 0xFFFFFF;
  if ( v18 >= v8 )
    goto LABEL_24;
  v19 = *((_QWORD *)Current + 35);
  v20 = *(_DWORD *)(v19 + 16LL * v18 + 8);
  if ( v17 != ((v20 >> 5) & 3) || (v20 & 0x2000) != 0 || (v20 & 0x1F) == 0 )
    goto LABEL_24;
  if ( (*(_BYTE *)(v19 + 16LL * ((a2 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_24:
    v21 = 0LL;
    goto LABEL_28;
  }
  v21 = *(struct DXGALLOCATION **)(v19 + 16LL * ((a2 >> 6) & 0xFFFFFF));
LABEL_28:
  v26 = v21;
  if ( !v21 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8968;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pAllocation != NULL", 8968LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v18 < *((_DWORD *)Current + 74) )
  {
    v14 = *((_QWORD *)Current + 35);
    v22 = *(_DWORD *)(v14 + 16LL * v18 + 8);
    if ( v17 == ((v22 >> 5) & 3) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
    {
      v16 = a2;
LABEL_35:
      *(_DWORD *)(v14 + 16 * ((v16 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
LABEL_36:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  if ( a3 )
  {
    v23 = 0LL;
    v24 = v7;
    v25 = 0;
  }
  else
  {
    v24 = 0LL;
    v23 = &v26;
    v25 = 1;
  }
  DXGDEVICE::DestroyAllocationInternal(
    (DXGDEVICE *)this,
    v25,
    v23,
    v24,
    a4,
    (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
}
