/*
 * XREFs of RtlpHpMetadataAlloc @ 0x18003D230
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18009AC38 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A1D38 (RtlpHpTagContextAllocateTag.c)
 *     RtlpFlsHeapAlloc @ 0x1800B13B8 (RtlpFlsHeapAlloc.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DA5A4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpAllocateHeapMetadata @ 0x1800EAFB0 (RtlpAllocateHeapMetadata.c)
 *     RtlpHpHeapAllocate @ 0x1800EF054 (RtlpHpHeapAllocate.c)
 *     RtlpHpTagRunOnceInit @ 0x180105CB0 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x180149CC0 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x180149D20 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014A150 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18002D050 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x180060D18 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpSegAlloc @ 0x180067020 (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18006BF70 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800D6820 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpVsContextAllocate @ 0x1800E80AC (RtlpHpVsContextAllocate.c)
 *     RtlpLogHeapAllocateEvent @ 0x1801113CC (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  _RTL_RUN_ONCE *v8; // rdi
  unsigned __int64 Value; // rdi
  unsigned int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // esi
  __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // r15
  __int64 v17; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 Slow; // r14
  __int64 v26; // r12
  unsigned __int64 v27; // rbx
  struct _TEB *v28; // r9
  int v29; // r10d
  int v30; // eax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // r11
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int16 v36; // di
  _DWORD *v37; // r8
  unsigned __int64 i; // rcx
  int v42; // r8d
  __int16 v43; // cx
  signed __int64 v44; // rbx
  signed __int64 v45; // rax
  struct _TEB *v46; // r9
  __int64 v47; // r12
  unsigned __int64 v48; // r13
  int v49; // r10d
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rdx
  int v54; // r11d
  unsigned int v55; // r15d
  volatile signed __int64 *v56; // r8
  volatile signed __int64 *v57; // r14
  signed __int64 v58; // r9
  __int64 v63; // rdx
  unsigned __int64 v65; // rcx
  unsigned int v67; // ecx
  signed __int64 v69; // rcx
  signed __int64 v70; // rax
  unsigned __int64 v71; // r9
  __int64 v72; // r8
  unsigned int v73; // r15d
  __int64 v74; // r12
  __int64 v75; // r14
  __int16 v76; // cx
  signed __int64 v77; // rax
  char v78; // dl
  unsigned __int64 v79; // rdx
  signed __int64 v80; // rtt
  int v81; // eax
  __int64 v82; // r10
  signed __int64 v83; // rax
  __int64 v84; // r11
  __int64 v85; // rax
  int v86; // ecx
  int v88; // [rsp+30h] [rbp-99h]
  unsigned __int16 v89; // [rsp+32h] [rbp-97h]
  unsigned __int8 v90; // [rsp+34h] [rbp-95h]
  unsigned __int64 v91; // [rsp+38h] [rbp-91h]
  unsigned __int8 v92; // [rsp+3Ch] [rbp-8Dh]
  signed __int64 v93; // [rsp+40h] [rbp-89h]
  unsigned __int16 v94; // [rsp+42h] [rbp-87h]
  unsigned int v95; // [rsp+48h] [rbp-81h]
  int v96; // [rsp+4Ch] [rbp-7Dh]
  unsigned __int64 v98; // [rsp+60h] [rbp-69h]
  unsigned __int64 v99; // [rsp+70h] [rbp-59h]
  __int64 v100; // [rsp+80h] [rbp-49h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-41h] BYREF
  __int128 Parameter; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v103; // [rsp+B0h] [rbp-19h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-9h] BYREF
  void *v105; // [rsp+D0h] [rbp+7h]
  int v106; // [rsp+D8h] [rbp+Fh]
  int v107; // [rsp+DCh] [rbp+13h]

  v4 = 0LL;
  v5 = a1;
  v103 = *a4;
  v99 = v103;
  v8 = (_RTL_RUN_ONCE *)&qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[BYTE1(v103)]];
  BYTE1(v99) = dword_18017E8C8[BYTE1(v103)];
  Parameter = v99;
  if ( !v8->Value && RtlRunOnceExecuteOnce(v8 + 1, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapCreate, &Parameter, 0LL) < 0 )
    return v4;
  Value = v8->Value;
  v10 = 3;
  v98 = Value;
  if ( a3 != 2 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
        goto LABEL_104;
      v11 = Value + 320;
      if ( v5 > *(unsigned int *)(Value + 336) )
        v11 = Value + 512;
      v12 = RtlpHpSegAlloc(v11, v5, v5, a2, a2 < v5 ? 0x4000000 : 0);
      goto LABEL_103;
    }
    v13 = v5;
    if ( v5 >= *(unsigned __int16 *)(Value + 900) )
    {
LABEL_94:
      if ( v5 > 0x20000 )
      {
        if ( v5 > *(unsigned int *)(Value + 528) )
        {
          v85 = RtlpHpLargeAlloc(Value, v5, v5, 0LL);
        }
        else
        {
          v86 = Value + 320;
          if ( v5 > *(unsigned int *)(Value + 336) )
            v86 = Value + 512;
          v85 = RtlpHpSegAlloc(v86, v5, v5, v5, 0);
        }
      }
      else
      {
        v85 = RtlpHpVsContextAllocate(Value + 704, v13, v13, 0LL);
      }
      v10 = 3;
      v4 = v85;
      goto LABEL_104;
    }
    v14 = Value + 832;
    v15 = *(unsigned __int16 *)(v14 + 76);
    v16 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v5 + 15) >> 4] - 1;
    if ( v15 >= 0x40 )
    {
      TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
      if ( !TlsExpansionSlots )
      {
LABEL_15:
        v17 = RtlpHpLfhThreadDataInitializeSet(v14);
LABEL_16:
        v19 = 2 * v16;
        v20 = v14 + ((unsigned __int16)v17 << 6);
        v92 = BYTE4(v17);
        v21 = *(unsigned __int16 *)(2 * v16 + v20);
        if ( !*(_WORD *)(2 * v16 + v20) )
        {
          if ( !RtlpHpLfhBucketCheckAndUpdate(v14, (unsigned int)v16, v21) )
          {
LABEL_93:
            Value = v98;
            goto LABEL_94;
          }
          v22 = v14 + ((unsigned __int64)v92 << 8) + 1472;
          LODWORD(v21) = *(unsigned __int16 *)(v19 + v22);
          if ( v20 != v22 )
            *(_WORD *)(v19 + v20) = *(_WORD *)(v19 + v22);
        }
        v23 = v14 + (unsigned int)((_DWORD)v21 << 6);
        v100 = v23;
        if ( *(_WORD *)(v23 + 4) )
        {
          v24 = *(_QWORD *)(v23 + 56);
          if ( (v24 & 0xFFF) == 0 )
          {
LABEL_22:
            Slow = RtlpHpLfhSlotAllocateSlow(v14);
            goto LABEL_91;
          }
          v26 = 0x100000001LL;
          v27 = v24 & 0xFFFFFFFFFFFFF000uLL;
          *(_QWORD *)(v23 + 56) = v24 - 1;
          v28 = NtCurrentTeb();
          v29 = *(unsigned __int8 *)((v24 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
          v30 = qword_1801CCEC8 ^ *(_DWORD *)((v24 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v24 & 0xFFFFFFFFFFFFF000uLL) >> 12);
          v31 = v28->RngState[0];
          v32 = v28->RngState[1];
          v33 = (unsigned __int16)v30;
          v89 = HIWORD(v30);
          if ( v13 >= (unsigned __int16)v30 )
            v26 = 1LL;
          v34 = v32 + v31;
          v35 = v31 ^ v32;
          v36 = BYTE4(v34);
          v28->RngState[1] = __ROL8__(v35, 37);
          v28->RngState[0] = v35 ^ (v35 << 16) ^ __ROL8__(v31, 24);
          v37 = (_DWORD *)(v27 + 8 * (*(unsigned __int8 *)(v27 + 36) + 8LL));
          for ( i = (unsigned int)~*v37; *v37 == -1; i = (unsigned int)~*v37 )
          {
            if ( v37 == (_DWORD *)(v27 + 8 * ((unsigned int)(v29 - 8) + 7LL)) )
              v37 = (_DWORD *)(v27 + 64);
            else
              v37 += 2;
          }
          _RAX = 1LL << ((unsigned __int16)(v36 * __popcnt(i)) >> 8);
          __asm
          {
            pdep    rcx, rax, rcx
            tzcnt   rdx, rcx
          }
          *(_QWORD *)v37 |= v26 << _RDX;
          v42 = (_DWORD)v37 - (v27 + 64);
          *(_BYTE *)(v27 + 36) = (unsigned int)(_RDX + 4 * v42) >> 5;
          Slow = v27 + (unsigned int)v89 + ((_DWORD)_RDX + 4 * v42) * (_DWORD)v33;
          if ( v13 < (unsigned int)v33 )
          {
            v43 = v33 - v13;
            if ( (_DWORD)v33 - v13 == 1 )
              v43 = 0x8000;
            *(_WORD *)(v33 + Slow - 2) = v43;
          }
LABEL_90:
          v5 = a1;
LABEL_91:
          if ( Slow != -1 )
          {
            Value = v98;
            v10 = 2;
            v4 = Slow;
            goto LABEL_104;
          }
          goto LABEL_93;
        }
        v88 = 0;
        _m_prefetchw((const void *)(v23 + 56));
        v44 = *(_QWORD *)(v23 + 56);
        if ( (v44 & 0xFFF) == 0 )
          goto LABEL_22;
        while ( 1 )
        {
          v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 56), v44 - 1, v44);
          if ( v44 == v45 )
            break;
          v88 = 1;
          v44 = v45;
          if ( (v45 & 0xFFF) == 0 )
            goto LABEL_22;
        }
        v46 = NtCurrentTeb();
        v47 = 0x100000001LL;
        v91 = v44 & 0xFFFFFFFFFFFFF000uLL;
        v48 = (v44 & 0xFFFFFFFFFFFFF000uLL) + 64;
        v49 = *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
        v95 = (unsigned __int16)(qword_1801CCEC8 ^ *(_WORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v44 & 0xFFFFFFFFFFFFF000uLL) >> 12));
        v50 = v46->RngState[0];
        if ( v13 >= v95 )
          v47 = 1LL;
        v94 = ((unsigned int)qword_1801CCEC8 ^ *(_DWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ (unsigned int)((v44 & 0xFFFFFFFFFFFFF000uLL) >> 12)) >> 16;
        v51 = v46->RngState[1];
        v52 = v51 + v50;
        v53 = v50 ^ v51;
        v54 = BYTE4(v52);
        v46->RngState[1] = __ROL8__(v53, 37);
        v46->RngState[0] = v53 ^ (v53 << 16) ^ __ROL8__(v50, 24);
        v55 = *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x32);
        v90 = *(_BYTE *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x27);
        v56 = (volatile signed __int64 *)(v48 + 8LL * *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
        v57 = (volatile signed __int64 *)(v48 + 8LL * (unsigned int)(v49 - 8) - 8);
LABEL_41:
        v58 = *v56;
        for ( _RAX = (unsigned int)~*(_DWORD *)v56; *(_DWORD *)v56 == -1; _RAX = (unsigned int)~*(_DWORD *)v56 )
        {
          if ( v56 == v57 )
            v56 = (volatile signed __int64 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 64);
          else
            ++v56;
          v58 = *v56;
        }
        while ( 1 )
        {
          if ( (qword_1801CCEE8 & 4) != 0 )
          {
            _RCX = 1LL << ((unsigned __int16)(v54 * __popcnt(_RAX)) >> 8);
            __asm
            {
              pdep    rdx, rcx, rax
              tzcnt   r10, rdx
            }
            v63 = v47 << _R10;
          }
          else
          {
            if ( v56 == v57 || v55 != 32 )
            {
              _BitScanReverse64(&v65, _RAX);
              __asm { tzcnt   rdx, rax }
              v67 = v65 - _RDX + 1;
              if ( v55 < v67 )
                v67 = v55;
              v54 = _RDX + ((v67 * v54) >> 8);
              _RAX = __ROR8__(_RAX, v54);
              __asm { tzcnt   r10, rax }
              LODWORD(_R10) = v54 + _R10;
            }
            else
            {
              _RCX = (unsigned int)__ROR4__(_RAX, v54);
              __asm { tzcnt   r10, rcx }
              LODWORD(_R10) = ((_BYTE)v54 + (_BYTE)_R10) & 0x1F;
            }
            v63 = v47 << _R10;
          }
          v69 = v58;
          v70 = _InterlockedCompareExchange64(v56, v58 | v63, v58);
          v58 = v70;
          if ( v70 == v69 )
            break;
          _RAX = (unsigned int)~(_DWORD)v70;
          if ( !_RAX )
          {
            if ( v56 == v57 )
              v56 = (volatile signed __int64 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 64);
            else
              ++v56;
            goto LABEL_41;
          }
        }
        v71 = v44 & 0xFFFFFFFFFFFFF000uLL;
        v72 = (unsigned int)((_DWORD)v56 - v48);
        v73 = _R10 + 4 * v72;
        v74 = v73 >> 5;
        *(_BYTE *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v74;
        v75 = v94 + v73 * v95;
        if ( v90 <= 1u )
        {
          if ( v73 <= *(unsigned __int16 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
            goto LABEL_67;
          RtlpHpLfhSubsegmentPrefetch(v14, v91, (unsigned int)v75, v95);
        }
        else if ( (int)RtlpHpLfhSubsegmentCommitBlock(v14, v91, (unsigned int)v75) < 0 )
        {
          v72 = 0LL;
          Slow = 0LL;
          v71 = v44 & 0xFFFFFFFFFFFFF000uLL;
          if ( v73 != -1 )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(v91 + 8 * v74 + 64),
              __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v73 & 0x1F));
            goto LABEL_72;
          }
LABEL_71:
          if ( Slow )
          {
LABEL_88:
            if ( v88 )
              RtlpHpLfhBucketUpdateAffinityMapping(
                v14,
                v14 + ((unsigned __int64)*(unsigned __int16 *)(v100 + 2) << 6),
                v72,
                v71);
            goto LABEL_90;
          }
LABEL_72:
          v77 = *(_QWORD *)(v71 + 16);
          v72 = 2LL;
          do
          {
            v93 = v77;
            v78 = BYTE6(v77);
            v96 = HIDWORD(v77);
            if ( BYTE6(v77) == 1 )
              v78 = 2;
            WORD1(v93) = WORD1(v77) + 1;
            BYTE6(v93) = v78;
            v79 = (unsigned __int64)*(unsigned __int16 *)(v71 + 44) << 6;
            v80 = v77;
            v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v71 + 16), v93, v77);
          }
          while ( v80 != v77 );
          if ( !*(_BYTE *)(v79 + v14 + 92) )
          {
            *(_BYTE *)(v79 + v14 + 92) = 1;
            v81 = qword_1801CD278;
            if ( !(_DWORD)qword_1801CD278
              && Context
              && byte_1801D1908 == (_BYTE)qword_1801CD278
              && v81 == _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CD278, 1, qword_1801CD278) )
            {
              TpSetTimerEx(Context, &DueTime, 0, 0x3E8u);
              if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CB670 > 5 )
              {
                *(_DWORD *)&EventDescriptor.Level = 5;
                UserData.Ptr = (unsigned __int64)off_1801CB678;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 0LL;
                UserData.Size = *(unsigned __int16 *)off_1801CB678;
                v105 = &unk_1801A157E;
                UserData.Reserved = 2;
                v106 = 25;
                v107 = 1;
                EtwEventWriteTransfer(qword_1801CB690, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
              }
              v71 = v44 & 0xFFFFFFFFFFFFF000uLL;
            }
          }
          if ( BYTE2(v96) == 1 )
          {
            v82 = v14 + ((unsigned __int16)v96 << 6);
            _m_prefetchw((const void *)(v82 + 8));
            v83 = *(_QWORD *)(v82 + 8);
            v84 = *(_DWORD *)(v71 + 24) & 0xFFF;
            *(_QWORD *)(v71 + 24) = (v83 - (v83 & 0xFFF)) | v84;
            v71 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v82 + 8),
                    v83 ^ (v44 ^ v83) & 0xFFFFFFFFFFFFF000uLL,
                    v83);
            if ( v83 != v71 )
            {
              do
              {
                v72 = v71;
                *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v71 - (v71 & 0xFFF)) | v84;
                v71 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v82 + 8),
                        v71 ^ (v44 ^ v71) & 0xFFFFFFFFFFFFF000uLL,
                        v71);
              }
              while ( v71 != v72 );
            }
          }
          goto LABEL_88;
        }
        v71 = v44 & 0xFFFFFFFFFFFFF000uLL;
LABEL_67:
        Slow = v71 + v75;
        if ( v13 < v95 )
        {
          v76 = v95 - v13;
          if ( v95 - v13 == 1 )
            v76 = 0x8000;
          *(_WORD *)(v95 + Slow - 2) = v76;
        }
        goto LABEL_71;
      }
      v17 = (__int64)TlsExpansionSlots[v15 - 64];
    }
    else
    {
      v17 = __readgsqword(8 * v15 + 5248);
    }
    if ( v17 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v12 = RtlpHpVsContextAllocate(Value + 704, (unsigned int)a2, (unsigned int)a2, 0LL);
LABEL_103:
  v10 = 3;
  v4 = v12;
LABEL_104:
  if ( *(char *)(Value + 20) < 0 )
    RtlpLogHeapAllocateEvent(Value, v4, v5, v10);
  return v4;
}
