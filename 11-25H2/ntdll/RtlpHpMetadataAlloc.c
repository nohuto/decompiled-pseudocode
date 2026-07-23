/*
 * XREFs of RtlpHpMetadataAlloc @ 0x18004F990
 * Callers:
 *     RtlpFlsHeapAlloc @ 0x18000A748 (RtlpFlsHeapAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x18002DE84 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpHeapAllocate @ 0x1800349E4 (RtlpHpHeapAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DCF34 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpAllocateHeapMetadata @ 0x1800F1BE0 (RtlpAllocateHeapMetadata.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800F3F6C (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpTagRunOnceInit @ 0x18010D670 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x18014CEC0 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x18014CF20 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014D350 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpAllocateHeapBackend @ 0x18000CF74 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegAlloc @ 0x18000D080 (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18002DB5C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpVsContextAllocate @ 0x18002DD2C (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x18002FDE0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpLogHeapAllocateEvent @ 0x180119438 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180143DB4 (RtlpHpEnvCompactionIsScheduled.c)
 */

unsigned __int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  unsigned __int64 Slow; // rdi
  _RTL_RUN_ONCE *v8; // rbx
  __int64 Value; // rsi
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned int v15; // ecx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rbx
  int v20; // r8d
  __int64 v21; // rbp
  signed __int64 i; // rbx
  signed __int64 v23; // rax
  struct _TEB *v24; // r9
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rcx
  int v27; // r10d
  unsigned int v28; // r11d
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdx
  volatile signed __int64 *v33; // rcx
  volatile signed __int64 *v34; // r8
  signed __int64 v35; // r9
  int v37; // r13d
  __int64 v40; // rax
  signed __int64 v41; // rcx
  signed __int64 v42; // rax
  __int64 v43; // r8
  unsigned int v44; // ecx
  unsigned int v45; // r14d
  unsigned __int64 v46; // rdx
  __int16 v47; // cx
  unsigned int v48; // edx
  __int64 HeapBackend; // rax
  unsigned __int64 v50; // r9
  unsigned int v53; // eax
  unsigned __int64 v55; // rax
  unsigned int v56; // eax
  void **TlsExpansionSlots; // rdx
  unsigned __int64 v59; // rcx
  signed __int64 v60; // rax
  unsigned __int64 v61; // rdx
  signed __int64 v62; // rtt
  __int64 v63; // r10
  signed __int64 v64; // rax
  __int64 v65; // r11
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  signed __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // r13
  unsigned __int64 v71; // rbx
  struct _TEB *v72; // r9
  int v73; // r10d
  unsigned __int64 v74; // rdi
  int v75; // eax
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rbp
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rdx
  __int16 v81; // r14
  _DWORD *v82; // r8
  int v86; // r8d
  __int16 v87; // cx
  int v88; // [rsp+30h] [rbp-98h]
  unsigned int v89; // [rsp+30h] [rbp-98h]
  unsigned int v90; // [rsp+34h] [rbp-94h]
  __int64 v91; // [rsp+38h] [rbp-90h]
  int v92; // [rsp+3Ch] [rbp-8Ch]
  unsigned __int64 v93; // [rsp+40h] [rbp-88h]
  int v94; // [rsp+4Ch] [rbp-7Ch]
  int v95; // [rsp+54h] [rbp-74h]
  __int64 v96; // [rsp+58h] [rbp-70h]
  unsigned __int64 v97; // [rsp+60h] [rbp-68h]
  __int128 Parameter; // [rsp+80h] [rbp-48h] BYREF
  __int128 v99; // [rsp+90h] [rbp-38h]
  unsigned __int8 v100; // [rsp+E8h] [rbp+20h]
  signed __int64 v101; // [rsp+E8h] [rbp+20h]
  unsigned __int16 v102; // [rsp+EAh] [rbp+22h]
  unsigned __int8 v103; // [rsp+ECh] [rbp+24h]

  Slow = 0LL;
  v99 = *a4;
  v97 = v99;
  v8 = (_RTL_RUN_ONCE *)&qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(v99)]];
  BYTE1(v97) = dword_1801816F8[BYTE1(v99)];
  Parameter = v97;
  if ( !v8->Value && RtlRunOnceExecuteOnce(v8 + 1, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapCreate, &Parameter, 0LL) < 0 )
    return Slow;
  Value = v8->Value;
  v10 = 3;
  switch ( a3 )
  {
    case 2:
      v11 = RtlpHpVsContextAllocate((_BYTE *)(Value + 704), a2, a2, 0);
LABEL_4:
      Slow = v11;
      break;
    case 0:
      if ( a1 >= *(unsigned __int16 *)(Value + 900) )
        goto LABEL_50;
      v14 = Value + 832;
      v15 = *(unsigned __int16 *)(Value + 908);
      v16 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(a1 + 15) >> 4] - 1;
      if ( v15 >= 0x40 )
      {
        TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
        if ( !TlsExpansionSlots )
          goto LABEL_69;
        v17 = (__int64)TlsExpansionSlots[v15 - 64];
      }
      else
      {
        v17 = __readgsqword(8 * v15 + 5248);
      }
      if ( v17 )
      {
LABEL_19:
        v18 = 2 * v16;
        v19 = v14 + ((unsigned __int16)v17 << 6);
        v103 = BYTE4(v17);
        v20 = *(unsigned __int16 *)(2 * v16 + v19);
        if ( *(_WORD *)(2 * v16 + v19) )
          goto LABEL_20;
        if ( RtlpHpLfhBucketCheckAndUpdate(Value + 832, v16) )
        {
          v59 = v14 + ((unsigned __int64)v103 << 8) + 1472;
          v20 = *(unsigned __int16 *)(v18 + v59);
          if ( v19 != v59 )
            *(_WORD *)(v18 + v19) = *(_WORD *)(v18 + v59);
LABEL_20:
          v21 = v14 + (unsigned int)(v20 << 6);
          if ( *(_WORD *)(v21 + 4) )
          {
            v69 = *(_QWORD *)(v21 + 56);
            if ( (v69 & 0xFFF) != 0 )
            {
              v70 = 0x100000001LL;
              v71 = v69 & 0xFFFFFFFFFFFFF000uLL;
              *(_QWORD *)(v21 + 56) = v69 - 1;
              v72 = NtCurrentTeb();
              v73 = *(unsigned __int8 *)((v69 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
              v74 = (v69 & 0xFFFFFFFFFFFFF000uLL) + 64;
              v75 = qword_1801CFEC8 ^ *(_DWORD *)((v69 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v69 & 0xFFFFFFFFFFFFF000uLL) >> 12);
              v76 = v72->RngState[0];
              v77 = v72->RngState[1];
              v78 = (unsigned __int16)v75;
              v102 = HIWORD(v75);
              if ( (unsigned int)a1 >= (unsigned __int16)v75 )
                v70 = 1LL;
              v79 = v77 + v76;
              v80 = v76 ^ v77;
              v81 = BYTE4(v79);
              v72->RngState[1] = __ROL8__(v80, 37);
              v72->RngState[0] = v80 ^ (v80 << 16) ^ __ROL8__(v76, 24);
              v82 = (_DWORD *)(v74 + 8LL * *(unsigned __int8 *)(v71 + 36));
              while ( *v82 == -1 )
              {
                if ( v82 == (_DWORD *)(v74 + 8 * ((unsigned int)(v73 - 8) - 1LL)) )
                  v82 = (_DWORD *)v74;
                else
                  v82 += 2;
              }
              _RAX = 1LL << ((unsigned __int16)(v81 * __popcnt((unsigned int)~*v82)) >> 8);
              __asm
              {
                pdep    rcx, rax, rcx
                tzcnt   rdx, rcx
              }
              *(_QWORD *)v82 |= v70 << _RDX;
              v86 = (_DWORD)v82 - v74;
              *(_BYTE *)(v71 + 36) = (unsigned int)(_RDX + 4 * v86) >> 5;
              Slow = v71 + (unsigned int)v102 + ((_DWORD)_RDX + 4 * v86) * (_DWORD)v78;
              if ( (unsigned int)a1 < (unsigned int)v78 )
              {
                v87 = v78 - a1;
                if ( (_DWORD)v78 - (_DWORD)a1 == 1 )
                  v87 = 0x8000;
                *(_WORD *)(v78 + Slow - 2) = v87;
              }
            }
            else
            {
              Slow = RtlpHpLfhSlotAllocateSlow(Value + 832, v21, a1, 0);
            }
            goto LABEL_44;
          }
          v94 = 0;
          _m_prefetchw((const void *)(v21 + 56));
          for ( i = *(_QWORD *)(v21 + 56); ; i = v23 )
          {
            if ( (i & 0xFFF) == 0 )
            {
              Slow = RtlpHpLfhSlotAllocateSlow(Value + 832, v21, a1, 0);
              goto LABEL_42;
            }
            v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 56), i - 1, i);
            if ( i == v23 )
              break;
            v94 = 1;
          }
          v24 = NtCurrentTeb();
          v25 = i & 0xFFFFFFFFFFFFF000uLL;
          v93 = i & 0xFFFFFFFFFFFFF000uLL;
          v26 = v24->RngState[0];
          v27 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18);
          v95 = qword_1801CFEC8 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
          v28 = (unsigned __int16)v95;
          v29 = 0x100000001LL;
          if ( (unsigned int)a1 >= (unsigned __int16)v95 )
            v29 = 1LL;
          v30 = v24->RngState[1];
          v96 = v29;
          v31 = v30 + v26;
          v32 = v26 ^ v30;
          v88 = BYTE4(v31);
          v24->RngState[0] = v32 ^ (v32 << 16) ^ __ROL8__(v26, 24);
          v33 = (volatile signed __int64 *)(v25 + 64);
          v24->RngState[1] = __ROL8__(v32, 37);
          v90 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
          v100 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
          v34 = (volatile signed __int64 *)((i & 0xFFFFFFFFFFFFF000uLL)
                                          + 64
                                          + 8LL * *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24));
          v91 = v25 + 64 + 8 * ((unsigned int)(v27 - 8) - 1LL);
LABEL_27:
          while ( 1 )
          {
            v35 = *v34;
            _RDX = (unsigned int)~*(_DWORD *)v34;
            if ( *(_DWORD *)v34 != -1 )
              break;
            if ( v34 == (volatile signed __int64 *)v91 )
              v34 = v33;
            else
              ++v34;
          }
          v37 = v88;
          while ( 1 )
          {
            if ( (qword_1801CFEE8 & 4) != 0 )
            {
              _RCX = 1LL << ((unsigned __int16)(v37 * __popcnt(_RDX)) >> 8);
              __asm
              {
                pdep    rdx, rcx, rdx
                tzcnt   rdx, rdx
              }
              v40 = v96 << _RDX;
            }
            else
            {
              if ( v90 != 32 || v34 == (volatile signed __int64 *)v91 )
              {
                __asm { tzcnt   rcx, rdx }
                _BitScanReverse64(&v55, _RDX);
                v56 = v55 - _RCX + 1;
                if ( v90 < v56 )
                  v56 = v90;
                v37 = _RCX + ((v56 * v37) >> 8);
                v88 = v37;
                _RDX = __ROR8__(_RDX, v37);
                __asm { tzcnt   rdx, rdx }
                LODWORD(_RDX) = v37 + _RDX;
              }
              else
              {
                _RAX = (unsigned int)__ROR4__(_RDX, v37);
                __asm { tzcnt   rdx, rax }
                LODWORD(_RDX) = ((_BYTE)v37 + (_BYTE)_RDX) & 0x1F;
              }
              v40 = v96 << _RDX;
            }
            v41 = v35;
            v42 = _InterlockedCompareExchange64(v34, v35 | v40, v35);
            v35 = v42;
            if ( v42 == v41 )
              break;
            v53 = ~(_DWORD)v42;
            _RDX = v53;
            if ( !v53 )
            {
              v33 = (volatile signed __int64 *)(v25 + 64);
              if ( v34 == (volatile signed __int64 *)v91 )
                v34 = (volatile signed __int64 *)(v25 + 64);
              else
                ++v34;
              goto LABEL_27;
            }
          }
          v43 = (unsigned int)((_DWORD)v34 - (v25 + 64));
          v14 = Value + 832;
          v44 = _RDX + 4 * v43;
          v89 = v44;
          *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v44 >> 5;
          v45 = HIWORD(v95) + v44 * (unsigned __int16)v95;
          if ( v100 > 1u )
          {
            if ( (int)RtlpHpLfhSubsegmentCommitBlock(Value + 832, v93, v45) < 0 )
            {
              v46 = 0LL;
              if ( v89 != -1 )
              {
                v50 = i & 0xFFFFFFFFFFFFF000uLL;
                _InterlockedAnd64(
                  (volatile signed __int64 *)(v93 + 8LL * (v89 >> 5) + 64),
                  __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v89 & 0x1F));
                goto LABEL_73;
              }
LABEL_41:
              Slow = v46;
              if ( v46 )
                goto LABEL_42;
              v50 = i & 0xFFFFFFFFFFFFF000uLL;
LABEL_73:
              v60 = *(_QWORD *)(v50 + 16);
              do
              {
                v92 = HIDWORD(v60);
                v101 = v60;
                if ( BYTE6(v60) == 1 )
                  BYTE6(v101) = 2;
                WORD1(v101) = WORD1(v60) + 1;
                v61 = (unsigned __int64)*(unsigned __int16 *)(v50 + 44) << 6;
                v62 = v60;
                v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 16), v101, v60);
              }
              while ( v62 != v60 );
              if ( !*(_BYTE *)(v61 + v14 + 92) )
              {
                *(_BYTE *)(v61 + v14 + 92) = 1;
                if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v101, v61, v43, v50) )
                {
                  RtlpHpEnvCompactionSchedule();
                  v50 = i & 0xFFFFFFFFFFFFF000uLL;
                }
              }
              if ( BYTE2(v92) == 1 )
              {
                v63 = v14 + ((unsigned __int16)v92 << 6);
                _m_prefetchw((const void *)(v63 + 8));
                v64 = *(_QWORD *)(v63 + 8);
                v65 = *(_DWORD *)(v50 + 24) & 0xFFF;
                *(_QWORD *)(v50 + 24) = (v64 - (v64 & 0xFFF)) | v65;
                v67 = v64;
                v66 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v63 + 8),
                        v64 ^ (v64 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                        v64);
                if ( v67 != v66 )
                {
                  do
                  {
                    v68 = v66;
                    *(_QWORD *)(v50 + 24) = (v66 - (v66 & 0xFFF)) | v65;
                    v66 = _InterlockedCompareExchange64(
                            (volatile signed __int64 *)(v63 + 8),
                            v66 ^ (v66 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                            v66);
                  }
                  while ( v66 != v68 );
                }
              }
LABEL_42:
              if ( v94 )
                RtlpHpLfhBucketUpdateAffinityMapping(
                  v14,
                  (volatile signed __int8 *)(v14 + ((unsigned __int64)*(unsigned __int16 *)(v21 + 2) << 6)));
LABEL_44:
              v48 = a1;
              if ( Slow != -1LL )
              {
                v10 = 2;
                break;
              }
LABEL_45:
              if ( a1 <= 0x20000 )
              {
                HeapBackend = RtlpHpVsContextAllocate((_BYTE *)(Value + 704), v48, v48, 0);
              }
              else if ( a1 <= *(unsigned int *)(Value + 528) )
              {
                HeapBackend = RtlpHpAllocateHeapBackend(Value, a1, a1, 0);
              }
              else
              {
                HeapBackend = RtlpHpLargeAlloc(Value, a1, a1, 0LL);
              }
              Slow = HeapBackend;
              break;
            }
          }
          else
          {
            if ( v44 <= *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
              goto LABEL_37;
            RtlpHpLfhSubsegmentPrefetch(Value + 832, v93, v45, (unsigned __int16)v95);
          }
          v28 = (unsigned __int16)v95;
LABEL_37:
          v46 = v93 + v45;
          if ( (unsigned int)a1 < v28 )
          {
            v47 = v28 - a1;
            v43 = 0x8000LL;
            if ( v28 - (_DWORD)a1 == 1 )
              v47 = 0x8000;
            *(_WORD *)(v28 + v46 - 2) = v47;
          }
          goto LABEL_41;
        }
LABEL_50:
        v48 = a1;
        goto LABEL_45;
      }
LABEL_69:
      v17 = RtlpHpLfhThreadDataInitializeSet(Value + 832);
      goto LABEL_19;
    case 1:
      v13 = Value + 320;
      if ( a1 > *(unsigned int *)(Value + 336) )
        v13 = Value + 512;
      v11 = RtlpHpSegAlloc(v13, a1, a1, a2, a2 < a1 ? 0x4000000 : 0);
      goto LABEL_4;
  }
  if ( *(char *)(Value + 20) < 0 )
    RtlpLogHeapAllocateEvent(Value, Slow, a1, v10);
  return Slow;
}
