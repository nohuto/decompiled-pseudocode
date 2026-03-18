/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140346914
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218FB0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkRender @ 0x1403444D0 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14035A2D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct DXGPROCESS *Current; // r13
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int i; // edi
  __int64 hAllocation; // r14
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // edx
  struct _EX_RUNDOWN_REF *v14; // rsi
  unsigned int v16; // [rsp+54h] [rbp-64h]
  _BYTE v17[80]; // [rsp+68h] [rbp-50h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v17, Current);
  v7 = *a1;
  v16 = *a1;
  v8 = 0;
  for ( i = 0; i < v7; ++i )
  {
    hAllocation = a2->hAllocation;
    if ( !(_DWORD)hAllocation )
      goto LABEL_15;
    v11 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
    if ( v11 >= *((_DWORD *)Current + 74) )
      goto LABEL_20;
    v12 = *((_QWORD *)Current + 35);
    if ( (((unsigned int)hAllocation >> 25) & 0x60) != (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60) )
      goto LABEL_20;
    if ( (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) != 0 )
      goto LABEL_20;
    v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
    if ( !v13 )
      goto LABEL_20;
    if ( v13 != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_20:
      v14 = 0LL;
      goto LABEL_10;
    }
    v14 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * v11);
LABEL_10:
    if ( !v14 )
    {
      WdLogSingleEntry1(3LL, hAllocation);
      WdLogGlobalForLineNumber = 14187;
      v8 = -1071775468;
      break;
    }
    if ( a4 && *(_QWORD *)(*((_QWORD *)a4 + 2) + 16LL) != *(_QWORD *)(*(_QWORD *)(v14[1].Count + 16) + 16LL) )
    {
      WdLogSingleEntry1(3LL, hAllocation);
      WdLogGlobalForLineNumber = 14209;
      v8 = -1071775467;
      break;
    }
    if ( !ExAcquireRundownProtection(v14 + 11) )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v14, 0LL, 0LL);
      WdLogGlobalForLineNumber = 14069;
    }
    a3[i] = (struct DXGALLOCATION *)v14;
    v7 = v16;
LABEL_15:
    ++a2;
  }
  *a1 = i;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17);
  return v8;
}
