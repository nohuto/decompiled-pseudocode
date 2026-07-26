/*
 * XREFs of ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140012CC0
 * Callers:
 *     NdisCmCloseAddressFamilyComplete @ 0x1400068E0 (NdisCmCloseAddressFamilyComplete.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009C708 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140013860 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

_BOOL8 __fastcall ndisDereferenceMiniportRef(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  ULONG_PTR v3; // rbx
  KIRQL v4; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r10
  KIRQL v6; // bp
  __int64 v7; // r8
  bool v8; // zf
  bool v9; // bl
  unsigned __int8 j; // al
  _BYTE *v12; // rdx
  char v13; // cl
  unsigned int ReferenceCount; // edx
  NDIS_REFCOUNT_HANDLE__ *v15; // r14
  unsigned int v16; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rbx

  v3 = a2;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v6 = v4;
  if ( RefCountTracker && (unsigned __int64)RefCountTracker - 2 > 1 )
  {
    if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( (_BYTE)v3 == 0xFF )
    {
      if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)a1->RefCountTracker, 0xFFuLL);
      *(_BYTE *)RefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v3 >= *((_BYTE *)RefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)a1->RefCountTracker, v3);
      if ( *((_BYTE *)RefCountTracker + 1) )
      {
        if ( *((_BYTE *)RefCountTracker + 1) == 1 )
        {
          v15 = RefCountTracker + 16 * v3;
          v16 = *((_DWORD *)v15 + 16);
          if ( v16 >> 17 < 0x3FFE && (unsigned __int16)v16 >> 1 == (v16 >> 17) + 1 )
          {
            for ( i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v15 + 1);
                  i;
                  i = (struct _NDIS_REFCOUNT_STACK_BLOCK *)*((_QWORD *)v15 + 1) )
            {
              *((_QWORD *)v15 + 1) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 2));
            *((_DWORD *)v15 + 16) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v16 >> 1) && (v16 & 1) == 0 )
              goto LABEL_19;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 2), 0);
          }
        }
      }
      else
      {
        v7 = *((_QWORD *)RefCountTracker + 1);
        if ( !v7 )
        {
LABEL_8:
          if ( _bittestandreset((signed __int32 *)RefCountTracker + 4, v3) )
            goto LABEL_9;
LABEL_19:
          ndisReportRefcountImbalance((ULONG_PTR)RefCountTracker, v3);
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *((_BYTE *)RefCountTracker + 3) )
            goto LABEL_8;
          v12 = (_BYTE *)(v7 + 2LL * j);
          if ( *v12 == (_BYTE)v3 )
          {
            v13 = v12[1];
            if ( v13 )
              break;
          }
        }
        v12[1] = v13 - 1;
      }
    }
  }
LABEL_9:
  v8 = a1->Ref.ReferenceCount-- == 1;
  v9 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ReferenceCount = a1->Ref.ReferenceCount;
    LOBYTE(ReferenceCount) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ReferenceCount,
      20,
      14,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v6);
  return v9;
}
