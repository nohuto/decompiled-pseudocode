/*
 * XREFs of RtlpHpMetadataAlloc @ 0x140458A08
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140601B74 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpHeapAllocate @ 0x140602108 (RtlpHpHeapAllocate.c)
 *     ExpSecurePoolCreate @ 0x140656D00 (ExpSecurePoolCreate.c)
 *     ExpPrivatePoolCreate @ 0x1407C63A0 (ExpPrivatePoolCreate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpEnvTlsGetValue @ 0x14035F690 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14035FCA0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpVsContextAllocate @ 0x14036781C (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x14047EEF4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpHpLfhBlockBitmapAllocateNonAtomic @ 0x1404AE428 (RtlpHpLfhBlockBitmapAllocateNonAtomic.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F8530 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpLogHeapAllocateEvent @ 0x1405F08F8 (RtlpLogHeapAllocateEvent.c)
 *     RtlRunOnceExecuteOnce @ 0x1409473B0 (RtlRunOnceExecuteOnce.c)
 */

unsigned __int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // rbp
  _RTL_RUN_ONCE *v8; // r14
  unsigned __int64 Value; // r14
  unsigned int v10; // r13d
  int v11; // ebx
  __int64 v12; // rax
  __int64 *v13; // rdi
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // r8
  __int64 *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 Slow; // r12
  unsigned __int64 v22; // rdi
  struct _KTHREAD *CurrentThread; // r10
  __int64 v24; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // r8
  unsigned int NonAtomic; // eax
  int v30; // r13d
  signed __int64 v31; // rbx
  signed __int64 v32; // rax
  unsigned int v33; // r8d
  unsigned int v34; // edx
  unsigned __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  signed __int64 v38; // rax
  char v39; // dl
  int v40; // r11d
  unsigned __int64 v41; // rdx
  signed __int64 v42; // rtt
  __int64 v43; // r13
  __int64 *v44; // r10
  signed __int64 v45; // rax
  signed __int64 v46; // rax
  signed __int64 v47; // rtt
  __int64 v48; // rax
  __int64 v49; // rcx
  signed __int64 v51; // [rsp+30h] [rbp-78h]
  int v52; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v53; // [rsp+50h] [rbp-58h]
  __int128 Parameter[4]; // [rsp+60h] [rbp-48h] BYREF
  int v56; // [rsp+C8h] [rbp+20h]
  int v57; // [rsp+C8h] [rbp+20h]
  __int64 v58; // [rsp+C8h] [rbp+20h]
  unsigned __int8 v59; // [rsp+CCh] [rbp+24h]

  v4 = 0LL;
  v53 = *a4;
  BYTE3(v53) = 0;
  v7 = a1;
  v8 = (_RTL_RUN_ONCE *)&qword_140E6BD98[2 * (unsigned int)dword_14001EB70[(unsigned __int8)BYTE1(*a4)]];
  BYTE1(v53) = dword_14001EB70[(unsigned __int8)BYTE1(*a4)];
  Parameter[0] = v53;
  if ( !v8->Value && RtlRunOnceExecuteOnce(v8 + 1, RtlpHpMetadataHeapCreate, Parameter, 0LL) < 0 )
    return v4;
  Value = v8->Value;
  v10 = 3;
  if ( !a3 )
  {
    if ( v7 < *(unsigned __int16 *)(Value + 900) )
    {
      v13 = (__int64 *)(Value + 832);
      v14 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v7 + 15) >> 4)) - 1;
      v15 = RtlpHpEnvTlsGetValue(*(_DWORD *)(Value + 908));
      if ( !v15 )
        v15 = RtlpHpLfhThreadDataInitializeSet(Value + 832);
      v16 = &v13[8 * (unsigned __int16)v15];
      v59 = BYTE4(v15);
      v17 = *((unsigned __int16 *)v16 + v14);
      if ( *((_WORD *)v16 + v14) )
      {
LABEL_16:
        v19 = (__int64)v13 + (unsigned int)((_DWORD)v17 << 6);
        if ( *(_WORD *)(v19 + 4) )
        {
          v20 = *(_QWORD *)(v19 + 56);
          if ( (v20 & 0xFFF) != 0 )
          {
            v22 = v20 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(v19 + 56) = v20 - 1;
            CurrentThread = KeGetCurrentThread();
            v24 = (unsigned int)*(unsigned __int8 *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
            Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
            v26 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
            v56 = qword_140E28348 ^ *(_DWORD *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v20 & 0xFFFFFFFFFFFFF000uLL) >> 12);
            v27 = (__int64)Blink + v26;
            v28 = (unsigned __int64)Blink ^ v26;
            CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v28 ^ (v28 << 16) ^ __ROL8__(Blink, 24));
            CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v28, 37);
            NonAtomic = RtlpHpLfhBlockBitmapAllocateNonAtomic(
                          (v20 & 0xFFFFFFFFFFFFF000uLL) + 64,
                          v24,
                          *(unsigned __int8 *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x24),
                          BYTE4(v27),
                          *(unsigned __int8 *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x32),
                          1LL);
            *(_BYTE *)(v22 + 36) = NonAtomic >> 6;
            Slow = v22 + HIWORD(v56) + NonAtomic * (unsigned __int16)v56;
          }
          else
          {
            Slow = RtlpHpLfhSlotAllocateSlow(Value + 832, v19, v7, 0);
          }
LABEL_26:
          v34 = v7;
          if ( Slow != -1LL )
          {
            v10 = 2;
LABEL_52:
            v4 = Slow;
            goto LABEL_53;
          }
LABEL_44:
          if ( v7 > 0x20000 )
          {
            if ( v7 > *(unsigned int *)(Value + 528) )
            {
              v48 = RtlpHpLargeAlloc((__int128 *)Value, v7, v7, 0);
            }
            else
            {
              v49 = Value + 320;
              if ( v7 > *(unsigned int *)(Value + 336) )
                v49 = Value + 512;
              v48 = RtlpHpSegAlloc(v49, v7, v7, v7, 0);
            }
          }
          else
          {
            v48 = RtlpHpVsContextAllocate((_BYTE *)(Value + 704), v34, v34, 0);
          }
          Slow = v48;
          goto LABEL_52;
        }
        v30 = 0;
        _m_prefetchw((const void *)(v19 + 56));
        v31 = *(_QWORD *)(v19 + 56);
        if ( (v31 & 0xFFF) != 0 )
        {
          while ( 1 )
          {
            v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 56), v31 - 1, v31);
            if ( v31 == v32 )
              break;
            v30 = 1;
            v31 = v32;
            if ( (v32 & 0xFFF) == 0 )
              goto LABEL_23;
          }
          v33 = v7;
          v35 = v31 & 0xFFFFFFFFFFFFF000uLL;
          if ( v35 )
          {
            Slow = RtlpHpLfhSubsegmentAllocateBlockShared(Value + 832, v35, v7, 0);
            if ( !Slow )
            {
              v38 = *(_QWORD *)(v35 + 16);
              v36 = 1LL;
              v37 = v35;
              do
              {
                v51 = v38;
                v39 = BYTE6(v38);
                v40 = v30;
                v52 = HIDWORD(v38);
                v57 = v30;
                if ( BYTE6(v38) == 1 )
                  v39 = 2;
                WORD1(v51) = WORD1(v38) + 1;
                BYTE6(v51) = v39;
                v41 = (unsigned __int64)*(unsigned __int16 *)(v35 + 44) << 6;
                v42 = v38;
                v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 16), v51, v38);
              }
              while ( v42 != v38 );
              v7 = a1;
              if ( !*((_BYTE *)v13 + v41 + 92) )
              {
                *((_BYTE *)v13 + v41 + 92) = 1;
                v43 = *v13;
                if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(*(_QWORD *)(*v13 + 56), v41, 1LL, v35) )
                  RtlpHpEnvCompactionSchedule(*(_QWORD **)(v43 + 56));
                v40 = v57;
                v37 = v35;
                v36 = 1LL;
              }
              v30 = v40;
              if ( BYTE2(v52) == 1 )
              {
                v44 = &v13[8 * (unsigned __int16)v52];
                _m_prefetchw(v44 + 1);
                v36 = *(_QWORD *)(v37 + 24);
                v37 = 4095LL;
                v45 = v44[1];
                v58 = v36;
                *(_QWORD *)(v35 + 24) = v36 ^ (v45 ^ v36) & 0xFFFFFFFFFFFFF000uLL;
                v47 = v45;
                v46 = _InterlockedCompareExchange64(v44 + 1, v35 | v45 & 0xFFF, v45);
                if ( v47 != v46 )
                {
                  do
                  {
                    v36 = v46;
                    *(_QWORD *)(v35 + 24) = v58 ^ (v58 ^ v46) & 0xFFFFFFFFFFFFF000uLL;
                    v46 = _InterlockedCompareExchange64(v44 + 1, v35 | v46 & 0xFFF, v46);
                  }
                  while ( v46 != v36 );
                }
              }
            }
            if ( v30 )
              RtlpHpLfhBucketUpdateAffinityMapping(
                v13,
                &v13[8 * (unsigned __int64)*(unsigned __int16 *)(v19 + 2)],
                v36,
                v37);
            goto LABEL_25;
          }
        }
        else
        {
LABEL_23:
          v33 = v7;
        }
        Slow = RtlpHpLfhSlotAllocateSlow(Value + 832, v19, v33, 0);
LABEL_25:
        v10 = 3;
        goto LABEL_26;
      }
      if ( RtlpHpLfhBucketCheckAndUpdate(Value + 832, v14, v17) )
      {
        v18 = &v13[32 * (unsigned __int64)v59 + 184];
        LODWORD(v17) = *((unsigned __int16 *)v18 + v14);
        if ( v16 != v18 )
          *((_WORD *)v16 + v14) = *((_WORD *)v18 + v14);
        goto LABEL_16;
      }
    }
    v34 = v7;
    goto LABEL_44;
  }
  v11 = a3 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      goto LABEL_53;
    v12 = RtlpHpVsContextAllocate((_BYTE *)(Value + 704), a2, a2, 0);
  }
  else
  {
    v12 = RtlpHpSegAlloc(
            Value + (*(unsigned int *)(Value + 336) < v7 ? 512LL : 320LL),
            v7,
            v7,
            a2,
            a2 < v7 ? 0x4000000 : 0);
  }
  v4 = v12;
LABEL_53:
  if ( (*(_DWORD *)(Value + 20) & 0x80u) != 0 )
    RtlpLogHeapAllocateEvent(Value, v4, v7, v10);
  return v4;
}
