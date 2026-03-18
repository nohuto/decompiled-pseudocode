/*
 * XREFs of ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1403D2234
 * Callers:
 *     DxgkUnpinFrameBufferForSaveCB @ 0x140010350 (DxgkUnpinFrameBufferForSaveCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14001F310 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140020110 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x140048890 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UnpinFrameBufferForSave(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  struct _MDL *v4; // rbp
  struct _DXGK_ADL *v5; // rdx
  char *v6; // rbx

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 74) )
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 11627;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"UnpinFrameBufferForSave Invalid physical adapter index. Index=%u",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v3 = *((_QWORD *)this + 374) + 344LL * a2;
    v4 = *(struct _MDL **)(v3 + 72);
    if ( !v4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 11633;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pMdl != nullptr", 11633LL, 0LL, 0LL, 0LL, 0LL);
    }
    v5 = *(struct _DXGK_ADL **)(v3 + 80);
    if ( v5 )
      SysMmFreeAdl(*(struct SYSMM_ADAPTER_OBJECT **)(v3 + 96), v5);
    SysMmClosePhysicalObject(*(struct SYSMM_ADAPTER_OBJECT **)(v3 + 96));
    SysMmUnreferencePhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)(v3 + 88));
    v6 = (char *)v4->StartVa + v4->ByteOffset;
    MmUnlockPages(v4);
    IoFreeMdl(v4);
    MmUnmapViewInSystemSpace(v6);
    *(_QWORD *)(v3 + 88) = 0LL;
    *(_QWORD *)(v3 + 96) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_QWORD *)(v3 + 80) = 0LL;
    return 0LL;
  }
}
