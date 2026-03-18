/*
 * XREFs of DxgGetHandleParentCB @ 0x1401B9760
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v3; // edx
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // edx
  int v7; // edx
  struct DXGALLOCATION *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v14[56]; // [rsp+70h] [rbp-48h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v14);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v13, Current);
  v3 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v3 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v4 = *((_QWORD *)Current + 35);
  v5 = 2LL * v3;
  v6 = *(_DWORD *)(v4 + 16LL * v3 + 8);
  if ( (((unsigned int)v1 >> 25) & 0x60) != (v6 & 0x60) )
    goto LABEL_7;
  if ( (v6 & 0x2000) != 0 )
    goto LABEL_7;
  v7 = v6 & 0x1F;
  if ( !v7 )
    goto LABEL_7;
  if ( v7 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v8 = 0LL;
    goto LABEL_8;
  }
  v8 = *(struct DXGALLOCATION **)(v4 + 8 * v5);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v12, v8);
  if ( !v12 )
  {
    WdLogSingleEntry1(3LL, v1);
    WdLogGlobalForLineNumber = 43;
    goto LABEL_13;
  }
  v9 = *(_QWORD *)(v12 + 40);
  if ( !v9 )
  {
LABEL_13:
    v10 = 0;
    goto LABEL_14;
  }
  v10 = *(_DWORD *)(v9 + 16);
LABEL_14:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v12);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v14);
  return v10;
}
