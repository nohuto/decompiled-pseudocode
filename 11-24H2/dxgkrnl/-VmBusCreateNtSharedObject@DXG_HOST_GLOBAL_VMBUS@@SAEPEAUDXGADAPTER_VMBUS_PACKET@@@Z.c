/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404253E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059048 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140076CD4 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DxgkShareObjectsInternal @ 0x14032A300 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14032AEB8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x14032CC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8358 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(struct DXGPROCESS **a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r15
  char v2; // bl
  struct _EX_RUNDOWN_REF *v3; // rsi
  __int64 v4; // rax
  DXGSHAREDVMOBJECT *v5; // rdi
  __int64 v6; // r12
  DXGSYNCOBJECT *v7; // r15
  char *v8; // r12
  struct _EX_RUNDOWN_REF *v9; // r8
  unsigned int v10; // edx
  int v11; // r10d
  int EntryType; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  ULONG_PTR v15; // r8
  int v16; // edx
  __int64 v17; // r15
  unsigned int v18; // eax
  ULONG_PTR Count; // r9
  int v20; // ecx
  const wchar_t *v21; // r9
  unsigned int v22; // eax
  ULONG_PTR v23; // rdx
  int v24; // ecx
  struct _EX_RUNDOWN_REF *v25; // rdx
  int v26; // eax
  __int64 Src; // [rsp+20h] [rbp-99h]
  __int64 v29; // [rsp+50h] [rbp-69h] BYREF
  __int64 v30; // [rsp+58h] [rbp-61h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v32[24]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v33[4]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-19h]
  _BYTE v35[96]; // [rsp+B0h] [rbp-9h] BYREF
  int v37; // [rsp+128h] [rbp+6Fh]
  int v38; // [rsp+130h] [rbp+77h] BYREF
  struct _EX_RUNDOWN_REF *Current; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
  v2 = 0;
  Current = (struct _EX_RUNDOWN_REF *)DXGPROCESS::GetCurrent((__int64)a1);
  v38 = 0;
  v3 = Current;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v31, 0LL);
  v4 = operator new(0x20uLL, 0x4B677844u, 256LL);
  v5 = (DXGSHAREDVMOBJECT *)v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_DWORD *)(v4 + 24) = 1;
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)v1);
    if ( !v6 )
      goto LABEL_56;
    v30 = 0LL;
    v7 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v32,
      (struct DXGPROCESS *)v3);
    v8 = (char *)(v6 + 24);
    v9 = v3 + 35;
    v10 = (*(_DWORD *)v8 >> 6) & 0xFFFFFF;
    if ( v10 >= LODWORD(v3[37].Count)
      || (v11 = *(_DWORD *)(v9->Count + 16LL * v10 + 8),
          ((*(_DWORD *)v8 >> 25) & 0x60) != (*(_BYTE *)(v9->Count + 16LL * v10 + 8) & 0x60))
      || (v11 & 0x2000) != 0
      || (v11 & 0x1F) == 0 )
    {
      v13 = *(_DWORD *)v8;
      goto LABEL_50;
    }
    EntryType = HMGRTABLE::GetEntryType((__int64)v9, v10);
    v37 = EntryType;
    if ( EntryType != 4 )
    {
      if ( EntryType == 8 )
      {
        v18 = (*(_DWORD *)v8 >> 6) & 0xFFFFFF;
        if ( v18 < LODWORD(Current[37].Count) )
        {
          Count = Current[35].Count;
          if ( ((*(_DWORD *)v8 >> 25) & 0x60) == (*(_BYTE *)(Count + 16LL * v18 + 8) & 0x60)
            && (*(_DWORD *)(Count + 16LL * v18 + 8) & 0x2000) == 0 )
          {
            v20 = *(_DWORD *)(Count + 16LL * v18 + 8) & 0x1F;
            if ( v20 )
            {
              if ( v20 == 8 )
              {
                v7 = *(DXGSYNCOBJECT **)(Count + 16LL * v18);
                if ( v7 && (*((_DWORD *)v7 + 53) & 2) != 0 )
                {
                  DXGSYNCOBJECT::AddReference(v7);
                  goto LABEL_41;
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
        WdLogSingleEntry1(2LL, *(unsigned int *)v8);
        WdLogGlobalForLineNumber = 7504;
        goto LABEL_27;
      }
      v13 = *(_DWORD *)v8;
      if ( EntryType == 11 )
      {
        v14 = (v13 >> 6) & 0xFFFFFF;
        if ( v14 >= LODWORD(Current[37].Count) )
          goto LABEL_16;
        v15 = Current[35].Count;
        if ( ((v13 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60) )
          goto LABEL_16;
        if ( (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) != 0 )
          goto LABEL_16;
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F;
        if ( !v16 )
          goto LABEL_16;
        if ( v16 != 11 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
          WdLogSingleEntry1(2LL, *(unsigned int *)v8);
          WdLogGlobalForLineNumber = 7516;
LABEL_27:
          v21 = L"Invalid sync object handle: 0x%I64x";
LABEL_28:
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v21, *(unsigned int *)v8, 0LL, 0LL, 0LL, 0LL);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
LABEL_29:
          v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
          goto LABEL_52;
        }
        v17 = *(_QWORD *)(v15 + 16LL * v14);
        if ( !v17 || (*(_DWORD *)(v17 + 72) & 2) == 0 )
          goto LABEL_16;
        v7 = *(DXGSYNCOBJECT **)(v17 + 32);
        DXGSYNCOBJECT::AddReference(v7);
LABEL_41:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
        v26 = v37;
        if ( v37 == 4 )
        {
          v33[0] = 48LL;
          v33[3] = 512LL;
          v33[1] = 0LL;
          v33[2] = 0LL;
          v34 = 0LL;
          v29 = 0LL;
          if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, v8, (__int64)v33, 0x10000000u, &v30, (PVOID *)&v29) < 0 )
          {
            WdLogSingleEntry1(2LL, *(unsigned int *)v8);
            Src = *(unsigned int *)v8;
            WdLogGlobalForLineNumber = 7543;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Fail to create Nt Shareed object, handle: 0x%I64x",
              Src,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_29;
          }
          v7 = (DXGSYNCOBJECT *)v29;
          v26 = 4;
        }
        *((_QWORD *)v5 + 1) = v7;
        v1 = (struct DXGADAPTER_VMBUS_PACKET *)a1;
        *(_DWORD *)v5 = v26;
        *((_QWORD *)v5 + 2) = v30;
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35, a1[12]);
        v38 = HMGRTABLE::AllocHandle((unsigned int *)a1[12] + 70, (__int64)v5, 13, 0, 0);
        if ( !v38 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 7569;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to allocate NT shared object handle",
            7569LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
        goto LABEL_52;
      }
LABEL_50:
      WdLogSingleEntry1(2LL, v13);
      v21 = L"Invalid object handle: 0x%I64x";
      WdLogGlobalForLineNumber = 7529;
      goto LABEL_28;
    }
    v22 = (*(_DWORD *)v8 >> 6) & 0xFFFFFF;
    if ( v22 < LODWORD(Current[37].Count) )
    {
      v23 = Current[35].Count;
      if ( ((*(_DWORD *)v8 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60)
        && (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) == 0 )
      {
        v24 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
        if ( v24 )
        {
          if ( v24 == 4 )
          {
            v25 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * v22);
            goto LABEL_40;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v25 = 0LL;
LABEL_40:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Current, v25);
    DXGRESOURCEREFERENCE::MoveAssign(&v31, &Current);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&Current);
    goto LABEL_41;
  }
  v5 = 0LL;
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 7481;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocate DXGSHAREDVMOBJECT",
    7481LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_52:
  if ( !v38 && v5 )
    DXGSHAREDVMOBJECT::ReleaseReference(v5);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), &v38, 4u);
  v2 = 1;
LABEL_56:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
  return v2;
}
