/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426890
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059588 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     Feature_4067989817__private_IsEnabledDeviceUsageNoInline @ 0x1400685E0 (Feature_4067989817__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShareObjectsInternal @ 0x14029DC00 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14029E7B4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402E0234 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(struct DXGPROCESS **a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // rsi
  char v2; // bl
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 v4; // r9
  __int64 v5; // rax
  DXGSHAREDVMOBJECT *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rsi
  char *v9; // r12
  struct _EX_RUNDOWN_REF *v10; // r9
  unsigned int v11; // edx
  int v12; // r10d
  int EntryType; // eax
  int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // eax
  ULONG_PTR v17; // r9
  int v18; // ecx
  __int64 v19; // rsi
  unsigned int v20; // eax
  ULONG_PTR Count; // r10
  int v22; // edx
  const wchar_t *v23; // r9
  unsigned int v24; // eax
  ULONG_PTR v25; // r10
  int v26; // ecx
  struct _EX_RUNDOWN_REF *v27; // rdx
  int v28; // eax
  __int64 Src; // [rsp+20h] [rbp-99h]
  __int64 v31; // [rsp+50h] [rbp-69h] BYREF
  __int64 v32; // [rsp+58h] [rbp-61h] BYREF
  struct _EX_RUNDOWN_REF *v33; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v34[24]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v35[4]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-19h]
  _BYTE v37[96]; // [rsp+B0h] [rbp-9h] BYREF
  int v39; // [rsp+128h] [rbp+6Fh]
  int v40; // [rsp+130h] [rbp+77h] BYREF
  struct _EX_RUNDOWN_REF *Current; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
  v2 = 0;
  Current = (struct _EX_RUNDOWN_REF *)DXGPROCESS::GetCurrent((__int64)a1);
  v40 = 0;
  v3 = Current;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v33, 0LL);
  v5 = operator new(0x20uLL, 0x4B677844u, 256LL, v4);
  v6 = (DXGSHAREDVMOBJECT *)v5;
  if ( v5 )
  {
    *(_DWORD *)v5 = 0;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 24) = 1;
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)v1);
    if ( !v7 )
      goto LABEL_57;
    v32 = 0LL;
    v8 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v34,
      (struct DXGPROCESS *)v3);
    v9 = (char *)(v7 + 24);
    v10 = v3 + 35;
    v11 = (*(_DWORD *)v9 >> 6) & 0xFFFFFF;
    if ( v11 >= LODWORD(v3[37].Count)
      || (v12 = *(_DWORD *)(v10->Count + 16LL * v11 + 8),
          ((*(_DWORD *)v9 >> 25) & 0x60) != (*(_BYTE *)(v10->Count + 16LL * v11 + 8) & 0x60))
      || (v12 & 0x2000) != 0
      || (v12 & 0x1F) == 0 )
    {
      v15 = *(unsigned int *)v9;
      goto LABEL_51;
    }
    EntryType = HMGRTABLE::GetEntryType((__int64)&v3[35], v11);
    v39 = EntryType;
    v14 = EntryType;
    if ( EntryType != 4 )
    {
      if ( EntryType == 8 )
      {
        v20 = (*(_DWORD *)v9 >> 6) & 0xFFFFFF;
        if ( v20 < LODWORD(Current[37].Count) )
        {
          Count = Current[35].Count;
          if ( ((*(_DWORD *)v9 >> 25) & 0x60) == (*(_BYTE *)(Count + 16LL * v20 + 8) & 0x60)
            && (*(_DWORD *)(Count + 16LL * v20 + 8) & 0x2000) == 0 )
          {
            v22 = *(_DWORD *)(Count + 16LL * v20 + 8) & 0x1F;
            if ( v22 )
            {
              if ( v22 == 8 )
              {
                v8 = *(_QWORD *)(Count + 16LL * v20);
                if ( v8 && (*(_DWORD *)(v8 + 212) & 2) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v8 + 24));
                  v39 = v14;
                  goto LABEL_42;
                }
              }
              else
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
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
        WdLogSingleEntry1(2LL, *(unsigned int *)v9);
        WdLogGlobalForLineNumber = 7477;
        goto LABEL_27;
      }
      v15 = *(unsigned int *)v9;
      if ( EntryType == 11 )
      {
        v16 = ((unsigned int)v15 >> 6) & 0xFFFFFF;
        if ( v16 >= LODWORD(Current[37].Count) )
          goto LABEL_16;
        v17 = Current[35].Count;
        if ( (((unsigned int)v15 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60) )
          goto LABEL_16;
        if ( (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) != 0 )
          goto LABEL_16;
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F;
        if ( !v18 )
          goto LABEL_16;
        if ( v18 != 11 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
          WdLogSingleEntry1(2LL, *(unsigned int *)v9);
          WdLogGlobalForLineNumber = 7489;
LABEL_27:
          v23 = L"Invalid sync object handle: 0x%I64x";
LABEL_28:
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v23, *(unsigned int *)v9, 0LL, 0LL, 0LL, 0LL);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
LABEL_29:
          v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
          goto LABEL_53;
        }
        v19 = *(_QWORD *)(v17 + 16LL * v16);
        if ( !v19 || (*(_DWORD *)(v19 + 72) & 2) == 0 )
          goto LABEL_16;
        v8 = *(_QWORD *)(v19 + 32);
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 24));
LABEL_42:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
        v28 = v39;
        if ( v39 == 4 )
        {
          v35[0] = 48LL;
          v35[3] = 512LL;
          v35[1] = 0LL;
          v35[2] = 0LL;
          v36 = 0LL;
          v31 = 0LL;
          if ( (int)DxgkShareObjectsInternal(
                      0LL,
                      0,
                      0LL,
                      1u,
                      v9,
                      (__int64)v35,
                      0x10000000u,
                      (HANDLE *)&v32,
                      (PVOID *)&v31) < 0 )
          {
            WdLogSingleEntry1(2LL, *(unsigned int *)v9);
            Src = *(unsigned int *)v9;
            WdLogGlobalForLineNumber = 7519;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Fail to create Nt Shareed object, handle: 0x%I64x",
              Src,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_29;
          }
          v8 = v31;
          v28 = 4;
        }
        *((_QWORD *)v6 + 1) = v8;
        v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
        *(_DWORD *)v6 = v28;
        *((_QWORD *)v6 + 2) = v32;
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v37, a1[12]);
        v40 = HMGRTABLE::AllocHandle((unsigned int *)a1[12] + 70, (__int64)v6, 13, 0, 0);
        if ( !v40 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 7545;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to allocate NT shared object handle",
            7545LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
        goto LABEL_53;
      }
LABEL_51:
      WdLogSingleEntry1(2LL, v15);
      v23 = L"Invalid object handle: 0x%I64x";
      WdLogGlobalForLineNumber = 7505;
      goto LABEL_28;
    }
    if ( !(unsigned int)Feature_4067989817__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_42;
    v24 = (*(_DWORD *)v9 >> 6) & 0xFFFFFF;
    if ( v24 < LODWORD(Current[37].Count) )
    {
      v25 = Current[35].Count;
      if ( ((*(_DWORD *)v9 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60)
        && (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x2000) == 0 )
      {
        v26 = *(_DWORD *)(v25 + 16LL * v24 + 8) & 0x1F;
        if ( v26 )
        {
          if ( v26 == 4 )
          {
            v27 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * v24);
            goto LABEL_41;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v27 = 0LL;
LABEL_41:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Current, v27);
    DXGRESOURCEREFERENCE::MoveAssign(&v33, &Current);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&Current);
    goto LABEL_42;
  }
  v6 = 0LL;
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 7454;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate DXGSHAREDVMOBJECT",
    7454LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_53:
  if ( !v40 && v6 )
    DXGSHAREDVMOBJECT::ReleaseReference(v6);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), &v40, 4u);
  v2 = 1;
LABEL_57:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v33);
  return v2;
}
