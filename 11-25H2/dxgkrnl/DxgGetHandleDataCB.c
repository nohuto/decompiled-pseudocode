/*
 * XREFs of DxgGetHandleDataCB @ 0x140414440
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     Feature_1276945721__private_IsEnabledDeviceUsageNoInline @ 0x14006BAE0 (Feature_1276945721__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  ULONG_PTR Count; // rdi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  struct _EX_RUNDOWN_REF *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rbx
  __int64 v17; // r9
  unsigned int v19; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  struct _EX_RUNDOWN_REF *v26; // rdx
  int v27; // ecx
  int v28; // ecx
  struct _EX_RUNDOWN_REF *v29; // rbx
  __int64 v30; // r9
  struct _EX_RUNDOWN_REF *v31; // [rsp+50h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v32; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v33[24]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v34[56]; // [rsp+78h] [rbp-1h] BYREF

  Count = 0LL;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v34);
  Current = DXGPROCESS::GetCurrent(v3);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, Current);
  v5 = a1[1];
  if ( v5 != 1 )
  {
    if ( v5 != 2 )
    {
      WdLogSingleEntry1(3LL, (int)a1[1]);
      WdLogGlobalForLineNumber = 153;
      goto LABEL_56;
    }
    v19 = *a1;
    IsEnabledDeviceUsageNoInline = Feature_1276945721__private_IsEnabledDeviceUsageNoInline();
    v21 = *((_DWORD *)Current + 74);
    v22 = (v19 >> 6) & 0xFFFFFF;
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v22 < v21 )
      {
        v23 = *((_QWORD *)Current + 35);
        v24 = 2LL * v22;
        v25 = *(_DWORD *)(v23 + 16LL * v22 + 8);
        if ( ((v19 >> 25) & 0x60) == (v25 & 0x60) && ((v25 & 0x2000) == 0 || (v25 & 0x4000) != 0) && (v25 & 0x1F) == 4 )
          goto LABEL_35;
      }
    }
    else if ( v22 < v21 )
    {
      v23 = *((_QWORD *)Current + 35);
      v24 = 2LL * v22;
      v27 = *(_DWORD *)(v23 + 16LL * v22 + 8);
      if ( ((v19 >> 25) & 0x60) == (v27 & 0x60) && (v27 & 0x2000) == 0 )
      {
        v28 = v27 & 0x1F;
        if ( v28 )
        {
          if ( v28 == 4 )
          {
LABEL_35:
            v26 = *(struct _EX_RUNDOWN_REF **)(v23 + 8 * v24);
LABEL_43:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v32, v26);
            v29 = v32;
            if ( v32 )
            {
              if ( KeGetCurrentIrql() >= 2u )
              {
                v30 = *(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
                {
                  WdLogSingleEntry5(0LL, 275LL, 20LL, v30, 0LL, 0LL);
                  WdLogGlobalForLineNumber = 120;
                }
              }
              if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v29[1].Count + 16) + 16LL))
                && *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 131;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"WDDM2 driver calls WDDM1.x DDI!",
                  131LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else if ( (HIDWORD(v29->Ptr) & 1) != 0 )
              {
                Count = *(_QWORD *)(v29[7].Count + 16);
              }
              else
              {
                Count = v29[7].Count;
              }
            }
            else
            {
              WdLogSingleEntry1(3LL, *a1);
              WdLogGlobalForLineNumber = 147;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v32);
            goto LABEL_56;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v26 = 0LL;
    goto LABEL_43;
  }
  v6 = *a1;
  v7 = Feature_1276945721__private_IsEnabledDeviceUsageNoInline();
  v8 = *((_DWORD *)Current + 74);
  v9 = (v6 >> 6) & 0xFFFFFF;
  if ( v7 )
  {
    if ( v9 < v8 )
    {
      v10 = *((_QWORD *)Current + 35);
      v11 = 2LL * v9;
      v12 = *(_DWORD *)(v10 + 16LL * v9 + 8);
      if ( ((v6 >> 25) & 0x60) == (v12 & 0x60) && ((v12 & 0x2000) == 0 || (v12 & 0x4000) != 0) && (v12 & 0x1F) == 5 )
        goto LABEL_8;
    }
LABEL_15:
    v13 = 0LL;
    goto LABEL_16;
  }
  if ( v9 >= v8 )
    goto LABEL_15;
  v10 = *((_QWORD *)Current + 35);
  v11 = 2LL * v9;
  v14 = *(_DWORD *)(v10 + 16LL * v9 + 8);
  if ( ((v6 >> 25) & 0x60) != (v14 & 0x60) )
    goto LABEL_15;
  if ( (v14 & 0x2000) != 0 )
    goto LABEL_15;
  v15 = v14 & 0x1F;
  if ( !v15 )
    goto LABEL_15;
  if ( v15 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
LABEL_8:
  v13 = *(struct _EX_RUNDOWN_REF **)(v10 + 8 * v11);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v13);
  v16 = v31;
  if ( v31 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v16[1].Count + 16) + 16LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, v17, 0LL, 0LL);
        WdLogGlobalForLineNumber = 77;
      }
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16[1].Count + 16) + 16LL))
      && *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 88;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"WDDM2 driver calls WDDM1.x DDI!",
        88LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
      DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v34);
      return 0LL;
    }
    if ( (a1[2] & 1) != 0 )
      Count = v16[4].Count;
    else
      Count = *(_QWORD *)(v16[6].Count + 16);
  }
  else
  {
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 104;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
LABEL_56:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v34);
  return Count;
}
