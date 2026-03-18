/*
 * XREFs of DxgGetHandleDataCB @ 0x1404111E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v4; // rcx
  ULONG_PTR Count; // rbx
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // ecx
  struct _EX_RUNDOWN_REF *v10; // rdx
  KIRQL v11; // al
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *v14; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  struct _EX_RUNDOWN_REF *v20; // rdx
  KIRQL CurrentIrql; // al
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // r9
  struct _EX_RUNDOWN_REF *v24; // rdx
  struct _EX_RUNDOWN_REF *v25; // [rsp+58h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v27[24]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v28[56]; // [rsp+80h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v28);
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, Current);
  v4 = (int)a1[1];
  Count = 0LL;
  if ( (_DWORD)v4 != 1 )
  {
    if ( (_DWORD)v4 != 2 )
    {
      WdLogSingleEntry1(3LL, v4);
      WdLogGlobalForLineNumber = 153;
      goto LABEL_45;
    }
    v16 = *a1;
    v17 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *((_DWORD *)Current + 74)
      && (v18 = *((_QWORD *)Current + 35),
          v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
          ((v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
      && ((v19 & 0x2000) == 0 || (v19 & 0x4000) != 0)
      && (v19 & 0x1F) != 0
      && (*(_BYTE *)(v18 + 16LL * ((v16 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4 )
    {
      v20 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * ((v16 >> 6) & 0xFFFFFF));
    }
    else
    {
      v20 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v26, v20);
    if ( v26 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v22 = v26;
      if ( CurrentIrql >= 2u )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(v26[1].Count + 16) + 16LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry5(0LL, 275LL, 20LL, v23, 0LL, 0LL);
          v22 = v26;
          WdLogGlobalForLineNumber = 120;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v22[1].Count + 16) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 131;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"WDDM2 driver calls WDDM1.x DDI!",
            131LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_43:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
          goto LABEL_45;
        }
        v24 = v26;
      }
      if ( (HIDWORD(v24->Ptr) & 1) != 0 )
        Count = *(_QWORD *)(v24[7].Count + 16);
      else
        Count = v24[7].Count;
      goto LABEL_43;
    }
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 147;
    goto LABEL_43;
  }
  v6 = (*a1 >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)Current + 74)
    && (v7 = *((_QWORD *)Current + 35),
        v8 = 2LL * v6,
        v9 = *(_DWORD *)(v7 + 16LL * v6 + 8),
        ((*a1 >> 25) & 0x60) == (v9 & 0x60))
    && ((v9 & 0x2000) == 0 || (v9 & 0x4000) != 0)
    && (v9 & 0x1F) == 5 )
  {
    v10 = *(struct _EX_RUNDOWN_REF **)(v7 + 8 * v8);
  }
  else
  {
    v10 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v25, v10);
  if ( v25 )
  {
    v11 = KeGetCurrentIrql();
    v12 = v25;
    if ( v11 >= 2u )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, v13, 0LL, 0LL);
        v12 = v25;
        WdLogGlobalForLineNumber = 77;
      }
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v12[1].Count + 16) + 16LL)) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 88;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"WDDM2 driver calls WDDM1.x DDI!",
          88LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
        DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v28);
        return 0LL;
      }
      v14 = v25;
    }
    if ( (a1[2] & 1) != 0 )
      Count = v14[4].Count;
    else
      Count = *(_QWORD *)(v14[6].Count + 16);
  }
  else
  {
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 104;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
LABEL_45:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v28);
  return Count;
}
