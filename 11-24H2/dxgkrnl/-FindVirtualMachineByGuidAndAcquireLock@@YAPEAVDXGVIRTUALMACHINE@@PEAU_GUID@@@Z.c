/*
 * XREFs of ?FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z @ 0x1401EC7F0
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E129C (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

struct DXGVIRTUALMACHINE *__fastcall FindVirtualMachineByGuidAndAcquireLock(struct _GUID *a1)
{
  struct DXGGLOBAL *Global; // rax
  _QWORD *v3; // rbx
  struct DXGGLOBAL *v4; // rax
  _QWORD **v5; // r8
  _QWORD *i; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h]

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, (struct _KTHREAD **)Global + 57);
  v3 = 0LL;
  v4 = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, (struct _KTHREAD **)v4 + 61);
  v5 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 1688);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = *(_QWORD *)&a1->Data1;
    v8 = i - 1;
    v9 = i[35];
    v15 = 0LL;
    v10 = v9 - v7;
    if ( !v10 )
      v10 = v8[37] - *(_QWORD *)a1->Data4;
    if ( !v10 )
      goto LABEL_10;
    v11 = v7 - v15;
    if ( !v11 )
      v11 = *(_QWORD *)a1->Data4 - *((_QWORD *)&v15 + 1);
    if ( !v11 )
    {
LABEL_10:
      WdLogSingleEntry1(4LL, i - 1);
      WdLogGlobalForLineNumber = 6421;
      v3 = v8;
      break;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  if ( v3 )
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v3 + 8));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return (struct DXGVIRTUALMACHINE *)v3;
}
