/*
 * XREFs of HvlDmaUnmapDeviceSparsePages @ 0x1404740A0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceSparsePages(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // r11
  _DWORD *v5; // r10
  PSLIST_ENTRY Next; // rdi
  __int64 result; // rax
  unsigned __int8 v8; // si
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  int v11; // r15d
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rcx
  unsigned int v14; // r8d
  char v15; // r9
  _QWORD *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int16 v21; // bx
  __int64 HypercallCachedPages; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct _KPRCB *v25; // rbx
  PSLIST_ENTRY v26; // rax
  bool v27; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v29; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  __int64 v33; // [rsp+38h] [rbp-89h]
  __int128 v34; // [rsp+40h] [rbp-81h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+50h] [rbp-71h]
  __int16 v38; // [rsp+74h] [rbp-4Dh]
  _BYTE v39[112]; // [rsp+78h] [rbp-49h] BYREF

  v34 = 0LL;
  v4 = a2;
  *(_OWORD *)ListEntry = 0LL;
  v5 = (_DWORD *)a1;
  if ( !*(_BYTE *)(a1 + 4) )
  {
    Next = 0LL;
    result = 0LL;
    v8 = 0;
    v9 = 0LL;
    v10 = 0;
    v11 = 200;
    while ( 1 )
    {
      v12 = *a3;
      if ( !*a3 )
      {
LABEL_15:
        *a3 = v9;
        return result;
      }
      if ( v12 > 0xB )
        break;
      v13 = v39;
      if ( v12 >= 0xB )
        v14 = 11;
      else
        v14 = *a3;
      v15 = 1;
      v11 |= 0x10000u;
LABEL_8:
      *((_QWORD *)v13 + 1) = 0LL;
      *((_QWORD *)v13 + 2) = 0LL;
      *(_QWORD *)v13 = -1LL;
      *((_DWORD *)v13 + 4) &= 0xFFFFFFF0;
      LODWORD(v33) = v11;
      *((_DWORD *)v13 + 5) = *v5;
      if ( v14 )
      {
        v16 = v13 + 24;
        v17 = v4 + 8 * v9 - 24 - (_QWORD)v13;
        v18 = v14;
        do
        {
          *v16 = *(_QWORD *)((char *)v16 + v17) << 12;
          ++v16;
          --v18;
        }
        while ( v18 );
      }
      v10 = v14 & 0xFFF | v10 & 0xFFFFF000;
      HIDWORD(v33) = v10;
      if ( v15 )
      {
        v24 = HvcallFastExtended(v33, (__int64)v39, 8 * v14 + 24, 0LL, 0);
        v21 = v24;
        v38 = WORD2(v24);
      }
      else
      {
        v19 = HvcallInitiateHypercall(v11);
        v21 = v19;
        v38 = WORD2(v19);
        HypercallCachedPages = 0LL;
        if ( (v34 & 1) != 0 )
        {
          ListEntry[0][1].Next = Next;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)&v34 + 1) + 35776LL), ListEntry[0]);
        }
        else if ( (v34 & 2) != 0 )
        {
          if ( v8 < 2u )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v20) = v8;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
            }
            __writecr8(v8);
          }
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (BYTE12(v34) & 1) != 0 )
          {
            HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages;
          }
          else if ( (BYTE12(v34) & 2) != 0 )
          {
            HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages + 4096;
          }
          v8 = BYTE8(v34);
          Next = ListEntry[1];
          *(PSLIST_ENTRY *)(HypercallCachedPages + 16) = ListEntry[1];
          if ( BYTE8(v34) )
          {
            v29 = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)v29->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v31 = *SchedulerAssist;
              do
              {
                v32 = v31;
                v31 = _InterlockedCompareExchange(SchedulerAssist, v31 & 0xFFDFFFFF, v31);
              }
              while ( v32 != v31 );
              if ( (v31 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v29);
            }
            _enable();
            Next = ListEntry[1];
            v8 = BYTE8(v34);
          }
        }
      }
      v23 = v38 & 0xFFF;
      *a3 -= v23;
      v9 += v23;
      result = HvlpHvToNtStatus(v21);
      v5 = (_DWORD *)a1;
      v4 = a2;
      if ( (int)result < 0 )
        goto LABEL_15;
    }
    if ( (HvlpFlags & 8) != 0 )
    {
      v25 = KeGetCurrentPrcb();
      v26 = RtlpInterlockedPopEntrySList(&v25->HypercallPageList);
      v13 = v26;
      if ( v26 )
      {
        Next = v26[1].Next;
        v5 = (_DWORD *)a1;
        v4 = a2;
        LOBYTE(v34) = 1;
        *((_QWORD *)&v34 + 1) = v25;
        ListEntry[0] = v26;
LABEL_20:
        ListEntry[1] = Next;
        if ( *a3 >= 0x1FD )
          v14 = 509;
        else
          v14 = *(_DWORD *)a3;
        v8 = BYTE8(v34);
        v15 = 0;
        v11 &= ~0x10000u;
        goto LABEL_8;
      }
      LOBYTE(v34) = 4;
      v27 = KeDisableInterrupts();
      v5 = (_DWORD *)a1;
      v4 = a2;
    }
    else
    {
      LOBYTE(v34) = 4;
      v27 = KeDisableInterrupts();
    }
    BYTE8(v34) = v27;
    HIDWORD(v34) = 1;
    v13 = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PSLIST_ENTRY)*((_QWORD *)v13 + 2);
    goto LABEL_20;
  }
  return 3221225659LL;
}
