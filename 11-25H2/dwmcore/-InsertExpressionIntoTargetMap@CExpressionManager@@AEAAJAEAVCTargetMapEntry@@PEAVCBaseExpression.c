/*
 * XREFs of ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x1801E51AC
 * Callers:
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800F78C8 (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CExpressionManager::InsertExpressionIntoTargetMap(
        CExpressionManager *this,
        struct CTargetMapEntry *a2,
        struct CBaseExpression *a3,
        struct SubchannelMaskInfo *a4)
{
  unsigned int v4; // esi
  struct _RTL_GENERIC_TABLE *v5; // rbp
  _QWORD *v9; // rax
  void *v10; // rdi
  _QWORD *inserted; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v13; // rax
  void *v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-68h]
  __int128 v17; // [rsp+30h] [rbp-58h]
  __int128 Buffer; // [rsp+40h] [rbp-48h] BYREF
  void *v19; // [rsp+50h] [rbp-38h]
  unsigned __int8 NewElement; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (struct _RTL_GENERIC_TABLE *)((char *)this + 320);
  v19 = 0LL;
  NewElement = 0;
  *(_QWORD *)&v17 = *(_QWORD *)a2;
  DWORD2(v17) = *((_DWORD *)a2 + 2);
  Buffer = v17;
  v9 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 320), &Buffer);
  v10 = v19;
  inserted = v9;
  while ( v10 )
  {
    v15 = v10;
    v10 = (void *)*((_QWORD *)v10 + 2);
    operator delete(v15, 0x18uLL);
  }
  if ( !inserted )
  {
    inserted = RtlInsertElementGenericTable(v5, a2, 0x18u, &NewElement);
    if ( !inserted )
    {
      v16 = 1030;
      goto LABEL_9;
    }
  }
  ProcessHeap = GetProcessHeap();
  v13 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( !v13 )
  {
    v16 = 1034;
LABEL_9:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v16, 0LL);
    return v4;
  }
  v13[2] = 0LL;
  *v13 = a4;
  v13[1] = a3;
  v13[2] = inserted[2];
  inserted[2] = v13;
  return v4;
}
