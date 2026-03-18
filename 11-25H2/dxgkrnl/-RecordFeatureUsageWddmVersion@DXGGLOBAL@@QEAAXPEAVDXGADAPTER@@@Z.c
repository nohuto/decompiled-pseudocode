/*
 * XREFs of ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D12D0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1401CDFB4 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403FB908 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

void __fastcall DXGGLOBAL::RecordFeatureUsageWddmVersion(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rax

  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(this, a2) )
  {
    v4 = *(_DWORD *)(v3 + 3004);
    if ( v4 > *((_DWORD *)this + 76292) )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RecordFeatureUsage(Global, 11LL, v4);
      *((_DWORD *)this + 76292) = v4;
    }
    if ( v4 < *((_DWORD *)this + 76291) )
    {
      v6 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RecordFeatureUsage(v6, 10LL, v4);
      *((_DWORD *)this + 76291) = v4;
    }
  }
}
