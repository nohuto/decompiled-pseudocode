/*
 * XREFs of KiAdjustRescheduleContextForProcessorAddition @ 0x1405C54F8
 * Callers:
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B3F5C (KiFinalizeCoreControlBlockAssignment.c)
 * Callees:
 *     ?KiStartRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KTHREAD@@@Z @ 0x140285600 (-KiStartRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAT_KISOLATION.c)
 *     KiIsPrcbThread @ 0x1402A6700 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 */

char __fastcall KiAdjustRescheduleContextForProcessorAddition(unsigned __int8 *a1, struct _KPRCB *a2, __int64 a3)
{
  union _KISOLATION_UNIT_LOCK_HANDLE *v4; // r8
  unsigned __int8 *v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  char v12; // al
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // al
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  int v21; // ecx
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v25; // [rsp+40h] [rbp+18h] BYREF

  v25 = a3;
  v4 = (union _KISOLATION_UNIT_LOCK_HANDLE *)(unsigned __int8)(*a1 + 1);
  v5 = &a1[40 * *a1];
  *a1 = (unsigned __int8)v4;
  KiStartRescheduleContextEntry((struct _KI_RESCHEDULE_CONTEXT_ENTRY *)(v5 + 16), a2, v4, 0LL);
  v6 = *((_QWORD *)v5 + 5);
  v25 = 0LL;
  v7 = v6 - 1;
  if ( *((_DWORD *)a1 + 1) )
  {
    v8 = *((_QWORD *)a1 + 4);
    v9 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 36480LL);
    if ( v7 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v6) )
    {
      if ( (v5[49] & 1) != 0 )
        *(_DWORD *)(v10 + 116) |= 2u;
      *(_BYTE *)(v10 + 565) = 1;
      KiInsertDeferredReadyList(&v25, v10);
    }
    v11 = v5[48] & 0xFE;
    *((_QWORD *)v5 + 4) = v8;
    v5[48] = v11;
    v12 = (v11 & 0xFD ^ (2 * ((*(_DWORD *)(v8 + 120) & 2) != 0))) & 0xE3 | 4;
    v13 = v12 | 0x20;
    v14 = v12 & 0xDF;
    if ( v8 == v9 )
      v13 = v14;
    v5[48] = v13;
    v5[49] &= ~1u;
    *((_QWORD *)v5 + 5) = v9;
    LOBYTE(v15) = KiIsPrcbThread(v9);
    if ( !(_BYTE)v15 )
    {
      v15 = *(_DWORD *)(v16 + 36);
      *(_DWORD *)(v17 + 536) = v15;
    }
  }
  else
  {
    v18 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 24LL);
    if ( v7 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v6) )
    {
      if ( (v5[49] & 1) != 0 )
        *(_DWORD *)(v19 + 116) |= 2u;
      *(_BYTE *)(v19 + 565) = 1;
      KiInsertDeferredReadyList(&v25, v19);
    }
    v20 = v5[48] | 1;
    *((_QWORD *)v5 + 4) = v18;
    v5[48] = v20;
    v21 = *(_DWORD *)(v18 + 120);
    v5[49] &= ~1u;
    *((_QWORD *)v5 + 5) = v18;
    v5[48] = (v20 & 0xFD ^ (2 * ((v21 & 2) != 0))) & 0xC3 | 4;
    LOBYTE(v15) = KiIsPrcbThread(v18);
    if ( !(_BYTE)v15 )
    {
      v15 = *(_DWORD *)(v23 + 36);
      *(_DWORD *)(v22 + 536) = v15;
    }
  }
  return v15;
}
