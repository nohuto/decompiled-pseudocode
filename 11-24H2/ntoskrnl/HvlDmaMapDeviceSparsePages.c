/*
 * XREFs of HvlDmaMapDeviceSparsePages @ 0x140468D00
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x14039CBE0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlpHandleInsufficientMemory @ 0x140580554 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlDmaMapDeviceSparsePages(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // rbx
  int v6; // r11d
  _DWORD *v7; // r9
  PSLIST_ENTRY Next; // rdi
  __int64 result; // rax
  unsigned __int8 v10; // si
  unsigned __int64 v11; // r12
  unsigned int v12; // r13d
  int v13; // r15d
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rcx
  unsigned int v16; // r8d
  char v17; // r10
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // r9
  __int64 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int16 v24; // bx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v29; // rbx
  PSLIST_ENTRY v30; // rax
  bool v31; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v33; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  __int64 v38; // [rsp+40h] [rbp-91h]
  __int128 v39; // [rsp+48h] [rbp-89h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+58h] [rbp-79h]
  __int16 v43; // [rsp+7Ch] [rbp-55h]
  _BYTE v44[112]; // [rsp+88h] [rbp-49h] BYREF

  v4 = a3;
  v39 = 0LL;
  v6 = a2;
  v7 = (_DWORD *)a1;
  *(_OWORD *)ListEntry = 0LL;
  if ( !*(_BYTE *)(a1 + 4) )
  {
    Next = 0LL;
    result = 0LL;
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
    v13 = 199;
    while ( 1 )
    {
      v14 = *a4;
      if ( !*a4 )
      {
LABEL_18:
        *a4 = v11;
        return result;
      }
      if ( v14 > 5 )
        break;
      v15 = v44;
      if ( v14 >= 5 )
        v16 = 5;
      else
        v16 = *a4;
      v17 = 1;
      v13 |= 0x10000u;
LABEL_8:
      *((_QWORD *)v15 + 1) = 0LL;
      *((_QWORD *)v15 + 2) = 0LL;
      *((_QWORD *)v15 + 3) = 0LL;
      *(_QWORD *)v15 = -1LL;
      *((_DWORD *)v15 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v15 + 5) = *v7;
      v18 = 0x10000;
      if ( v6 )
        v18 = v6;
      LODWORD(v38) = v13;
      *((_DWORD *)v15 + 7) = v18;
      if ( v16 )
      {
        v19 = v15 + 40;
        v20 = v16;
        v21 = (__int64 *)(v4 + 8 * v11);
        do
        {
          *(v19 - 1) = *v21 << 12;
          v22 = *v21++;
          *v19 = v22;
          v19 += 2;
          --v20;
        }
        while ( v20 );
      }
      v12 = v16 & 0xFFF | v12 & 0xFFFFF000;
      HIDWORD(v38) = v12;
      if ( v17 )
      {
        v23 = HvcallFastExtended(v38, (__int64)v44, 16 * (v16 + 2), 0LL, 0);
        v24 = v23;
        v43 = WORD2(v23);
      }
      else
      {
        v26 = HvcallInitiateHypercall(v13);
        v24 = v26;
        v43 = WORD2(v26);
        HypercallCachedPages = 0LL;
        if ( (v39 & 1) != 0 )
        {
          ListEntry[0][1].Next = Next;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)&v39 + 1) + 35776LL), ListEntry[0]);
        }
        else if ( (v39 & 2) != 0 )
        {
          if ( v10 < 2u )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v27) = v10;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
            }
            __writecr8(v10);
          }
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (BYTE12(v39) & 1) != 0 )
          {
            HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages;
          }
          else if ( (BYTE12(v39) & 2) != 0 )
          {
            HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages + 4096;
          }
          v10 = BYTE8(v39);
          Next = ListEntry[1];
          *(PSLIST_ENTRY *)(HypercallCachedPages + 16) = ListEntry[1];
          if ( BYTE8(v39) )
          {
            v33 = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)v33->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v35 = *SchedulerAssist;
              do
              {
                v36 = v35;
                v35 = _InterlockedCompareExchange(SchedulerAssist, v35 & 0xFFDFFFFF, v35);
              }
              while ( v36 != v35 );
              if ( (v35 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v33);
            }
            _enable();
            Next = ListEntry[1];
            v10 = BYTE8(v39);
          }
        }
      }
      v25 = v43 & 0xFFF;
      *a4 -= v25;
      v11 += v25;
      if ( HvlpHvStatusIsInsufficientMemory(v24) )
        result = HvlpHandleInsufficientMemory(v24);
      else
        result = HvlpHvToNtStatus(v24);
      v7 = (_DWORD *)a1;
      v6 = a2;
      v4 = a3;
      if ( (int)result < 0 )
        goto LABEL_18;
    }
    if ( (HvlpFlags & 8) != 0 )
    {
      v29 = KeGetCurrentPrcb();
      v30 = RtlpInterlockedPopEntrySList(&v29->HypercallPageList);
      v15 = v30;
      if ( v30 )
      {
        Next = v30[1].Next;
        v7 = (_DWORD *)a1;
        v6 = a2;
        *((_QWORD *)&v39 + 1) = v29;
        v4 = a3;
        LOBYTE(v39) = 1;
        ListEntry[0] = v30;
LABEL_24:
        ListEntry[1] = Next;
        if ( *a4 < 0xFE )
          v16 = *(_DWORD *)a4;
        else
          v16 = 254;
        v10 = BYTE8(v39);
        v17 = 0;
        v13 &= ~0x10000u;
        goto LABEL_8;
      }
      LOBYTE(v39) = 4;
      v31 = KeDisableInterrupts();
      v7 = (_DWORD *)a1;
      v6 = a2;
      v4 = a3;
    }
    else
    {
      LOBYTE(v39) = 4;
      v31 = KeDisableInterrupts();
    }
    BYTE8(v39) = v31;
    HIDWORD(v39) = 1;
    v15 = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PSLIST_ENTRY)*((_QWORD *)v15 + 2);
    goto LABEL_24;
  }
  return 3221225659LL;
}
