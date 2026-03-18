/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1403289FC
 * Callers:
 *     DxgkShareObjectsInternal @ 0x14032A300 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1403F5DB0 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140076CD4 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x140229844 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1403BF960 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 */

__int64 __fastcall CreateSharedSyncNtObject(
        __int64 a1,
        int a2,
        unsigned int a3,
        DXGSYNCOBJECT *a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  int v7; // ebx
  __int64 v8; // r12
  struct DXGPROCESS *Current; // r15
  struct DXGDEVICESYNCOBJECT *v12; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // r13
  int v19; // edx
  int v20; // eax
  _DWORD *v21; // rsi
  PVOID v22; // rdx
  __int64 result; // rax
  __int64 v24; // r8
  int v25; // edx
  struct DXGGLOBAL *v26; // rax
  int NtSharedObject; // eax
  PVOID Object; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-11h] BYREF
  char v30; // [rsp+70h] [rbp-9h]
  _BYTE v31[32]; // [rsp+78h] [rbp-1h] BYREF
  char v32; // [rsp+C8h] [rbp+4Fh]

  v32 = a1;
  v7 = 0;
  v8 = a3;
  Object = 0LL;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 344;
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
    goto LABEL_49;
  }
  v12 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v29, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v29);
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, Current);
    v16 = *((_DWORD *)Current + 74);
    v17 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( a2 == 11 )
    {
      if ( v17 < v16 )
      {
        v18 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60)
          && (*(_DWORD *)(v18 + 16LL * v17 + 8) & 0x2000) == 0 )
        {
          v19 = *(_DWORD *)(v18 + 16LL * v17 + 8) & 0x1F;
          if ( v19 )
          {
            if ( v19 == 11 )
            {
              v12 = *(struct DXGDEVICESYNCOBJECT **)(v18 + 16LL * v17);
              if ( v12 )
              {
                a4 = (DXGSYNCOBJECT *)*((_QWORD *)v12 + 4);
LABEL_11:
                if ( !a4 )
                {
                  v7 = -1073741811;
                  WdLogSingleEntry2(3LL, v8, -1073741811LL);
                  WdLogGlobalForLineNumber = 388;
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
LABEL_48:
                  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v29);
LABEL_49:
                  v22 = Object;
                  if ( Object )
                  {
                    if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
                      DxgkSharedSyncObjectObDeleteProcedure(Object);
                    else
                      ObfDereferenceObject(Object);
                    v22 = 0LL;
                  }
                  goto LABEL_23;
                }
                if ( *((_DWORD *)a4 + 101) == 7 )
                  v20 = *((_DWORD *)a4 + 76);
                else
                  v20 = *((_DWORD *)a4 + 53);
                if ( (v20 & 2) != 0 )
                {
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
                  goto LABEL_16;
                }
                _InterlockedIncrement(&dword_14016022C);
                v7 = -1073741811;
                WdLogSingleEntry2(2LL, a4, -1073741811LL);
                WdLogGlobalForLineNumber = 399;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
                  (__int64)a4,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
LABEL_26:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
                if ( v30 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v29);
                goto LABEL_49;
              }
            }
            else
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Handle type mismatch",
                318LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
        }
      }
      v7 = -1073741811;
      WdLogSingleEntry2(3LL, v8, -1073741811LL);
      WdLogGlobalForLineNumber = 371;
      goto LABEL_26;
    }
    if ( v17 < v16 )
    {
      v24 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v17 + 8) & 0x60)
        && (*(_DWORD *)(v24 + 16LL * v17 + 8) & 0x2000) == 0 )
      {
        v25 = *(_DWORD *)(v24 + 16LL * v17 + 8) & 0x1F;
        if ( v25 )
        {
          if ( a2 == v25 )
          {
            a4 = *(DXGSYNCOBJECT **)(v24 + 16LL * v17);
            goto LABEL_11;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    a4 = 0LL;
    goto LABEL_11;
  }
LABEL_16:
  if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
  {
    Object = (PVOID)operator new(0x10uLL, 0x4B677844u, 256LL);
    v21 = Object;
    if ( Object )
      goto LABEL_19;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 433;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGSHAREDSYNCOBJECT",
      433LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v7 = -1073741801;
LABEL_43:
    if ( Object )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 439;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pObject == NULL", 439LL, 0LL, 0LL, 0LL, 0LL);
    }
    WdLogSingleEntry2(3LL, Current, v7);
    WdLogGlobalForLineNumber = 442;
    goto LABEL_48;
  }
  LOBYTE(v15) = a6;
  LOBYTE(v14) = v32;
  v7 = ObCreateObject(v14, g_pDxgkSharedSyncObjectType, a5, v15, 0LL, 16, 0, 0, &Object);
  if ( v7 < 0 )
    goto LABEL_43;
  v21 = Object;
LABEL_19:
  DXGSYNCOBJECT::AddReference(a4);
  v21[2] = 0;
  *(_QWORD *)v21 = a4;
  if ( (*((_DWORD *)a4 + 103) & 2) != 0 )
  {
    v26 = DXGGLOBAL::GetGlobal();
    NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                       *((DXG_GUEST_GLOBAL_VMBUS **)v26 + 210),
                       Current,
                       v8,
                       a4,
                       v12,
                       0LL);
    v21[2] = NtSharedObject;
    if ( !NtSharedObject )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 465;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmBusSendCreateNtSharedObject failed",
        465LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = -1073741823;
      goto LABEL_48;
    }
  }
  if ( v30 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v29);
  v22 = Object;
LABEL_23:
  result = (unsigned int)v7;
  *a7 = v22;
  return result;
}
