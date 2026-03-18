/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1401B9550
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // ecx
  int v8; // ecx
  struct DXGRESOURCE *v9; // rdx
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v16[56]; // [rsp+78h] [rbp+17h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v16);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, Current);
  v3 = 0;
  v4 = (*a1 >> 6) & 0xFFFFFF;
  if ( v4 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v5 = *((_QWORD *)Current + 35);
  v6 = 2LL * v4;
  v7 = *(_DWORD *)(v5 + 16LL * v4 + 8);
  if ( ((*a1 >> 25) & 0x60) != (v7 & 0x60) )
    goto LABEL_7;
  if ( (v7 & 0x2000) != 0 )
    goto LABEL_7;
  v8 = v7 & 0x1F;
  if ( !v8 )
    goto LABEL_7;
  if ( v8 != 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v9 = 0LL;
    goto LABEL_8;
  }
  v9 = *(struct DXGRESOURCE **)(v5 + 8 * v6);
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v14, v9);
  if ( v14 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL) + 16LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, v11, 0LL, 0LL);
        WdLogGlobalForLineNumber = 402;
      }
    }
    v12 = 0;
    v13 = *(_QWORD *)(v14 + 24);
    while ( v12 < a1[1] )
    {
      if ( !v13 )
        goto LABEL_20;
      v13 = *(_QWORD *)(v13 + 64);
      ++v12;
    }
    if ( v13 )
      v3 = *(_DWORD *)(v13 + 16);
LABEL_20:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v14);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v16);
    return v3;
  }
  else
  {
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 391;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v14);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v16);
    return 0LL;
  }
}
