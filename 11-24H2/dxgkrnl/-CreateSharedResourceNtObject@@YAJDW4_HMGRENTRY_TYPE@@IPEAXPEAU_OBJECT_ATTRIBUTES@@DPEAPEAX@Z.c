/*
 * XREFs of ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x14032B210
 * Callers:
 *     DxgkShareObjectsInternal @ 0x14032A300 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1403F5DB0 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047224 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140047B14 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x140229844 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall CreateSharedResourceNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  char v10; // r12
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  struct DXGPROCESS *v14; // r14
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // edx
  struct DXGRESOURCE *v18; // rdx
  struct DXGRESOURCE *v19; // rbx
  __int64 v20; // rbx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int v23; // eax
  struct _LIST_ENTRY *v24; // rsi
  PVOID v25; // rcx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  struct DXGGLOBAL *Global; // rax
  int NtSharedObject; // eax
  struct DXGRESOURCE *v31; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  struct DXGRESOURCE *v33; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v34[24]; // [rsp+68h] [rbp-18h] BYREF

  v7 = a3;
  LODWORD(v8) = 0;
  Object = 0LL;
  v10 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v14 = Current;
  if ( !Current )
  {
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 50;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *a7 = 0LL;
    return (unsigned int)v8;
  }
  v31 = 0LL;
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, Current);
    v15 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)v14 + 74) )
    {
      v16 = *((_QWORD *)v14 + 35);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60)
        && (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) == 0 )
      {
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
        if ( v17 )
        {
          if ( v17 == 4 )
          {
            v18 = *(struct DXGRESOURCE **)(v16 + 16LL * v15);
LABEL_9:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v33, v18);
            v19 = v33;
            v31 = v33;
            v33 = 0LL;
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v33);
            if ( v19 )
            {
              if ( (*((_DWORD *)v19 + 1) & 1) != 0 && (v20 = *((_QWORD *)v19 + 7)) != 0 )
              {
                if ( (*(_DWORD *)(v20 + 12) & 8) != 0 )
                {
                  _m_prefetchw((const void *)(v20 + 68));
                  v21 = *(_DWORD *)(v20 + 68);
                  while ( v21 )
                  {
                    v22 = v21;
                    v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 68), v21 + 1, v21);
                    if ( v22 == v21 )
                    {
                      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
                      goto LABEL_17;
                    }
                  }
                  LODWORD(v8) = -1073741811;
                  WdLogSingleEntry2(3LL, v7, -1073741811LL);
                  WdLogGlobalForLineNumber = 106;
                }
                else
                {
                  LODWORD(v8) = -1073741811;
                  WdLogSingleEntry2(3LL, v20, -1073741811LL);
                  WdLogGlobalForLineNumber = 90;
                }
              }
              else
              {
                LODWORD(v8) = -1073741811;
                WdLogSingleEntry2(3LL, v7, -1073741811LL);
                WdLogGlobalForLineNumber = 81;
              }
            }
            else
            {
              LODWORD(v8) = -1073741811;
              WdLogSingleEntry2(3LL, v7, -1073741811LL);
              WdLogGlobalForLineNumber = 71;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
            goto LABEL_27;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v18 = 0LL;
    goto LABEL_9;
  }
  v20 = *(_QWORD *)(a4 + 16);
  _m_prefetchw((const void *)(v20 + 68));
  v27 = *(_DWORD *)(v20 + 68);
  do
  {
    if ( !v27 )
      break;
    v12 = (unsigned int)(v27 + 1);
    v28 = v27;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 68), v12, v27);
  }
  while ( v28 != v27 );
LABEL_17:
  if ( (*((_DWORD *)v14 + 102) & 0x10) != 0 )
  {
    Object = (PVOID)operator new(0x30uLL, 0x4B677844u, 256LL);
    v24 = (struct _LIST_ENTRY *)Object;
    if ( !Object )
    {
      LODWORD(v8) = -1073741801;
      WdLogSingleEntry2(3LL, v14, -1073741801LL);
      WdLogGlobalForLineNumber = 157;
      DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v20, 0LL, 0);
LABEL_27:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v31);
LABEL_28:
      v25 = Object;
      if ( Object )
      {
        if ( (*((_DWORD *)v14 + 102) & 0x10) != 0 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Object);
        else
          ObfDereferenceObject(Object);
        v25 = 0LL;
      }
      goto LABEL_23;
    }
  }
  else
  {
    LOBYTE(v13) = a6;
    LOBYTE(v12) = v10;
    v23 = ObCreateObject(v12, g_pDxgkSharedAllocationObjectType, a5, v13, 0LL, 48, 0, 0, &Object);
    v8 = v23;
    if ( v23 < 0 )
    {
      if ( Object )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 140;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pObject == NULL", 140LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(3LL, v14, v8);
      WdLogGlobalForLineNumber = 143;
      DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v20, 0LL, 0);
      goto LABEL_21;
    }
    v24 = (struct _LIST_ENTRY *)Object;
  }
  ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(v20 + 80), v24);
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 64));
  v24[1].Flink = (struct _LIST_ENTRY *)v20;
  v24[1].Blink = 0LL;
  v24[2].Flink = 0LL;
  LODWORD(v24[2].Blink) = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 80) + 16LL) + 209LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                       *((DXG_GUEST_GLOBAL_VMBUS **)Global + 210),
                       v14,
                       0,
                       0LL,
                       0LL,
                       v31);
    LODWORD(v24[2].Blink) = NtSharedObject;
    if ( !NtSharedObject )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 187;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmBusSendCreateNtSharedObject failed",
        187LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v8) = -1073741823;
      goto LABEL_27;
    }
  }
LABEL_21:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v31);
  if ( (int)v8 < 0 )
    goto LABEL_28;
  v25 = Object;
LABEL_23:
  *a7 = v25;
  return (unsigned int)v8;
}
