/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x14026E010
 * Callers:
 *     IommupHvMapDeviceLogical @ 0x14026DF34 (IommupHvMapDeviceLogical.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x14026E3F0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14026E418 (HvlpHvToNtStatus.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlpHandleInsufficientMemory @ 0x14057FA24 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlDmaMapDeviceLogicalRange(
        __int64 a1,
        int a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        char a6)
{
  unsigned __int64 *v6; // r14
  int v7; // r10d
  _DWORD *v8; // r9
  PSLIST_ENTRY Next; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // si
  unsigned int v12; // r12d
  unsigned __int64 v13; // r13
  unsigned int v14; // ebx
  int v15; // r15d
  char v16; // r11
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rcx
  unsigned int v19; // r8d
  int v20; // eax
  int v21; // eax
  unsigned __int64 *v22; // rdx
  __int64 v23; // r9
  char *v24; // r10
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 HypercallCachedPages; // rax
  __int64 v34; // rdx
  char v35; // al
  int v36; // r11d
  struct _KPRCB *v37; // rcx
  struct _KPRCB *v38; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  unsigned int v42; // [rsp+38h] [rbp-D0h]
  __int128 v44; // [rsp+48h] [rbp-C0h]
  PSLIST_ENTRY ListEntry_8[2]; // [rsp+58h] [rbp-B0h]
  __int16 v47; // [rsp+74h] [rbp-94h]
  __int64 v48; // [rsp+78h] [rbp-90h]
  _BYTE v50[112]; // [rsp+98h] [rbp-70h] BYREF

  v6 = a5;
  v7 = a2;
  v8 = (_DWORD *)a1;
  v44 = 0LL;
  v48 = a3;
  *(_OWORD *)ListEntry_8 = 0LL;
  if ( !*(_BYTE *)(a1 + 4) )
  {
    Next = 0LL;
    result = 0LL;
    v11 = 0;
    v12 = 0;
    v13 = 0LL;
    v14 = 0;
    v15 = 179;
    v42 = 0;
LABEL_3:
    v16 = 1;
    while ( 1 )
    {
      v17 = *v6;
      if ( !*v6 )
      {
LABEL_24:
        *v6 = v13;
        return result;
      }
      if ( v17 <= 9 )
      {
        v18 = v50;
        if ( v17 >= 9 )
          v19 = 9;
        else
          v19 = *v6;
        v15 |= 0x10000u;
        goto LABEL_9;
      }
      if ( (HvlpFlags & 8) == 0 )
        break;
      CurrentPrcb = KeGetCurrentPrcb();
      v30 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
      v18 = v30;
      if ( !v30 )
      {
        LOBYTE(v44) = 4;
        v35 = KeDisableInterrupts(0LL, v31, v32);
        v14 = v42;
        v8 = (_DWORD *)a1;
        v7 = a2;
        HIDWORD(v44) = 1;
        goto LABEL_49;
      }
      Next = v30[1].Next;
      v8 = (_DWORD *)a1;
      v7 = a2;
      *((_QWORD *)&v44 + 1) = CurrentPrcb;
      v14 = v42;
      LOBYTE(v44) = 1;
      ListEntry_8[0] = v30;
LABEL_29:
      ListEntry_8[1] = Next;
      if ( *v6 >= 0x1FB )
        v19 = 507;
      else
        v19 = *(_DWORD *)v6;
      v11 = BYTE8(v44);
      v16 = 0;
      v15 &= ~0x10000u;
LABEL_9:
      *((_QWORD *)v18 + 1) = 0LL;
      *((_QWORD *)v18 + 2) = 0LL;
      *((_QWORD *)v18 + 3) = 0LL;
      *((_QWORD *)v18 + 4) = 0LL;
      *(_QWORD *)v18 = -1LL;
      *((_DWORD *)v18 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v18 + 5) = *v8;
      *((_QWORD *)v18 + 4) = v48;
      if ( v7 )
      {
        v20 = (v7 & 1) != 0;
        if ( (v7 & 2) != 0 )
          v20 |= 2u;
        v21 = v12 | v20;
      }
      else
      {
        v21 = 0x10000;
      }
      *((_DWORD *)v18 + 7) = v21;
      if ( v19 )
      {
        v22 = (unsigned __int64 *)(v18 + 40);
        v23 = 0LL;
        v24 = (char *)a4 + 8 * v13 - 40 - (_QWORD)v18;
        v25 = v19;
        do
        {
          if ( a2 )
          {
            if ( a6 )
              v26 = v13 + v23 + *a4;
            else
              v26 = *(unsigned __int64 *)((char *)v22 + (_QWORD)v24);
          }
          else
          {
            v26 = 0LL;
          }
          *v22 = v26;
          ++v23;
          ++v22;
          --v25;
        }
        while ( v25 );
        v6 = a5;
      }
      v42 = v19 & 0xFFF | v14 & 0xFFFFF000;
      if ( v16 )
      {
        v27 = HvcallFastExtended(v15, (unsigned int)v50, 8 * v19 + 40, 0, 0);
        v47 = WORD2(v27);
      }
      else
      {
        v27 = HvcallInitiateHypercall(v15);
        v47 = WORD2(v27);
        HypercallCachedPages = 0LL;
        v34 = 1LL;
        if ( (v44 & 1) != 0 )
        {
          ListEntry_8[0][1].Next = Next;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)&v44 + 1) + 35776LL), ListEntry_8[0]);
        }
        else if ( (v44 & 2) != 0 )
        {
          if ( v11 < 2u )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v34) = v11;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
            }
            __writecr8(v11);
          }
        }
        else
        {
          v37 = KeGetCurrentPrcb();
          if ( (BYTE12(v44) & 1) != 0 )
          {
            HypercallCachedPages = (__int64)v37->HypercallCachedPages;
          }
          else if ( (BYTE12(v44) & 2) != 0 )
          {
            HypercallCachedPages = (__int64)v37->HypercallCachedPages + 4096;
          }
          v11 = BYTE8(v44);
          Next = ListEntry_8[1];
          *(PSLIST_ENTRY *)(HypercallCachedPages + 16) = ListEntry_8[1];
          if ( BYTE8(v44) )
          {
            v38 = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)v38->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v40 = *SchedulerAssist;
              do
              {
                v41 = v40;
                v40 = _InterlockedCompareExchange(SchedulerAssist, v40 & 0xFFDFFFFF, v40);
              }
              while ( v41 != v40 );
              if ( (v40 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v38);
            }
            _enable();
            Next = ListEntry_8[1];
            v11 = BYTE8(v44);
          }
        }
      }
      v28 = v47 & 0xFFF;
      *v6 -= v28;
      v13 += v28;
      v48 += (unsigned __int16)(v47 & 0xFFF) << 12;
      if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory((unsigned __int16)v27) )
      {
        result = HvlpHvToNtStatus((unsigned __int16)v27);
        if ( (int)result < 0 )
          goto LABEL_24;
        v14 = v42;
        v8 = (_DWORD *)a1;
        v7 = a2;
        goto LABEL_3;
      }
      result = HvlpHandleInsufficientMemory((unsigned __int16)v27);
      v14 = v42;
      v16 = 1;
      v8 = (_DWORD *)a1;
      v7 = a2;
      if ( (int)result < 0 )
      {
        if ( v12 == 0x80000000 )
          goto LABEL_24;
        result = 0LL;
        v12 = 0x80000000;
      }
    }
    LOBYTE(v44) = 4;
    v35 = KeDisableInterrupts(a1, v17, a3);
    HIDWORD(v44) = v36;
LABEL_49:
    BYTE8(v44) = v35;
    v18 = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PSLIST_ENTRY)*((_QWORD *)v18 + 2);
    goto LABEL_29;
  }
  return 3221225659LL;
}
