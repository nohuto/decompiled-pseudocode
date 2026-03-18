/*
 * XREFs of ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1403B711C
 * Callers:
 *     DxgkPinFrameBufferForSaveCB @ 0x1400102C0 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPinFrameBufferForSave2CB @ 0x140010300 (DxgkPinFrameBufferForSave2CB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14001EE9C (-SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_O.c)
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14001F310 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140020110 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x14003A6E0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x140048890 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::PinFrameBufferForSave(
        DXGADAPTER *this,
        unsigned int a2,
        ULONG_PTR a3,
        unsigned int a4,
        struct _MDL **a5,
        struct _DXGK_ADL **a6)
{
  char v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rsi
  struct _MDL *v9; // r14
  struct _DXGK_ADL *v10; // r12
  __int64 v11; // r15
  PMDL Mdl; // rax
  int PhysicalObjectForExistingMdl; // eax
  struct _DXGK_ADL **v15; // rbx
  int v16; // eax
  struct _DXGK_ADL *v17; // rax
  const wchar_t *v18; // r9
  struct SYSMM_ADAPTER_OBJECT *v19; // [rsp+58h] [rbp-70h] BYREF
  struct _DXGK_ADL *v20; // [rsp+60h] [rbp-68h] BYREF
  struct SYSMM_PHYSICAL_OBJECT *v21; // [rsp+68h] [rbp-60h] BYREF
  PVOID VirtualAddress[11]; // [rsp+70h] [rbp-58h] BYREF
  ULONG_PTR Length; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+E8h] [rbp+20h]

  v25 = a4;
  Length = a3;
  v6 = 0;
  if ( a2 >= *((_DWORD *)this + 74) )
  {
    v7 = a2;
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 11472;
    v18 = L"PinFrameBufferForSave Invalid physical adapter index. Index=%u";
    goto LABEL_16;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL, a3);
    WdLogGlobalForLineNumber = 11478;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PinFrameBufferForSave CommitSize (%I64u) is not a multiple of PAGE_SIZE",
      Length,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v7 = a2;
  v8 = *((_QWORD *)this + 374) + 344LL * a2;
  VirtualAddress[1] = (PVOID)v8;
  if ( *(_QWORD *)(v8 + 88) )
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 11486;
    v18 = L"Frame buffer save area already pinned for PhysicalAdapterIndex %u. PinFrameBufferForSave cannot be called agai"
           "n without first calling Unpin.";
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v18, v7, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v21 = 0LL;
  v19 = 0LL;
  VirtualAddress[0] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  LODWORD(v11) = MmMapViewInSystemSpace(*(PVOID *)(v8 + 64), VirtualAddress, &Length);
  if ( (int)v11 < 0 )
  {
    WdLogSingleEntry1(3LL, Length);
    WdLogGlobalForLineNumber = 11504;
  }
  else
  {
    Mdl = IoAllocateMdl(VirtualAddress[0], Length, 0, 0, 0LL);
    v9 = Mdl;
    VirtualAddress[2] = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      v6 = 1;
      PhysicalObjectForExistingMdl = SysMmCreatePhysicalObjectForExistingMdl(
                                       *((struct SYSMM_ADAPTER **)this + 28),
                                       (__int64)v9,
                                       (__int64)this,
                                       8,
                                       (__int64)&v21,
                                       (__int64)&v19);
      v11 = PhysicalObjectForExistingMdl;
      if ( PhysicalObjectForExistingMdl < 0 )
      {
        WdLogSingleEntry1(6LL, PhysicalObjectForExistingMdl);
        WdLogGlobalForLineNumber = 11547;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to add iommu memory tracker for frame buffer save area, Status=0x%.8x",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        *(_QWORD *)(v8 + 72) = v9;
        if ( a5 )
        {
          *a5 = v9;
LABEL_9:
          *(_QWORD *)(v8 + 88) = v21;
          *(_QWORD *)(v8 + 96) = v19;
          return 0LL;
        }
        v15 = a6;
        if ( !a6 )
          goto LABEL_9;
        v16 = SysMmCreateAdl(v19, 0LL, Length, v25, &v20);
        LODWORD(v11) = v16;
        if ( v16 >= 0 )
        {
          v17 = v20;
          *(_QWORD *)(v8 + 80) = v20;
          *v15 = v17;
          goto LABEL_9;
        }
        WdLogSingleEntry1(3LL, v16);
        WdLogGlobalForLineNumber = 11567;
        v10 = v20;
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 11511;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for Mdl.",
        11511LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v11) = -1073741801;
    }
  }
  if ( v10 )
    SysMmFreeAdl(v19, v10);
  if ( v21 )
  {
    SysMmClosePhysicalObject(v19);
    SysMmUnreferencePhysicalObject(v21);
  }
  if ( v6 )
    MmUnlockPages(v9);
  if ( v9 )
    IoFreeMdl(v9);
  if ( VirtualAddress[0] )
    MmUnmapViewInSystemSpace(VirtualAddress[0]);
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 80) = 0LL;
  return (unsigned int)v11;
}
