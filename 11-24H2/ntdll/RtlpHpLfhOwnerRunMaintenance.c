/*
 * XREFs of RtlpHpLfhOwnerRunMaintenance @ 0x180063450
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180061120 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180063C20 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpLfhBlockBitmapInitialize @ 0x180063FD0 (RtlpHpLfhBlockBitmapInitialize.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180064030 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentConstructCommitState @ 0x180064560 (RtlpHpLfhSubsegmentConstructCommitState.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x180064F90 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x18006BE00 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1800DB1E0 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpLfhOwnerRunMaintenance(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  _QWORD *v4; // r15
  _QWORD *v5; // rbp
  char v6; // r14
  unsigned __int64 *v7; // r12
  __int64 v8; // r13
  __int64 *v9; // r10
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  char v13; // cl
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // ebx
  unsigned int v19; // edi
  __int64 v20; // rcx
  void *v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  __int32 v24; // eax
  int v25; // edx
  char v26; // r12
  __int16 v27; // bx
  int v28; // ecx
  unsigned __int64 v29; // r13
  unsigned __int16 v30; // bp
  unsigned __int16 v31; // r15
  int v32; // eax
  unsigned int v33; // ebx
  __int64 v34; // r14
  char v35; // cl
  __int64 v36; // r8
  __int64 v37; // r10
  char *v38; // r9
  __int64 v39; // rdi
  int v40; // edx
  char *v41; // rcx
  signed __int16 v42; // ax
  int v43; // r8d
  __int64 *v44; // rdi
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rdi
  _WORD *v49; // rsi
  int v50; // r8d
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  _QWORD *v54; // rcx
  unsigned __int64 **v55; // r8
  unsigned __int64 **v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 *v58; // rax
  __int16 v59; // [rsp+30h] [rbp-98h]
  int v60; // [rsp+34h] [rbp-94h]
  __int16 v61; // [rsp+38h] [rbp-90h]
  int v62; // [rsp+44h] [rbp-84h] BYREF
  int v63; // [rsp+48h] [rbp-80h] BYREF
  __int64 v64; // [rsp+50h] [rbp-78h]
  __int64 v65; // [rsp+58h] [rbp-70h]
  unsigned __int64 v66; // [rsp+60h] [rbp-68h]
  _QWORD *v67; // [rsp+68h] [rbp-60h]
  _QWORD *v68; // [rsp+70h] [rbp-58h]

  v4 = *(_QWORD **)(a2 + 24);
  v5 = (_QWORD *)(a2 + 24);
  v68 = (_QWORD *)(a2 + 24);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (__int64 *)a1;
  while ( v4 != v5 )
  {
    v10 = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
    v67 = v4;
    if ( !(*(unsigned __int16 *)(v10 + 18) + *(unsigned __int16 *)(v10 + 32)) )
    {
      if ( (*(_BYTE *)v8 & 1) == 0 && (*(_QWORD *)(v8 + 56) ^ v10) - 1 <= 0xFFE )
        continue;
      v32 = RtlpHpLfhOwnerMoveSubsegment((_DWORD)v9, v8, v10, 1, 0);
      v9 = (__int64 *)a1;
      if ( v32 )
        continue;
    }
    if ( (v6 & 1) != 0 && *(_WORD *)(v10 + 18)
      || *(unsigned __int16 *)(v10 + 18) + *(unsigned __int16 *)(v10 + 32) == *(unsigned __int16 *)(v10 + 34)
      && *(_WORD *)(v10 + 18) )
    {
      v64 = 0LL;
      v24 = _InterlockedExchange((volatile __int32 *)(v10 + 16), 0);
      v25 = *(unsigned __int16 *)(v10 + 34);
      v26 = *(_BYTE *)(v10 + 51) & 1;
      LODWORD(v64) = v24;
      v65 = v64;
      v27 = HIWORD(v24);
      v66 = v10 >> 12;
      v28 = (unsigned __int16)(*(_WORD *)(v10 + 40) ^ qword_1801CCEC8 ^ (v10 >> 12));
      v29 = v10
          + ((unsigned __int64)(*(_DWORD *)(v10 + 40) ^ (unsigned int)qword_1801CCEC8 ^ (unsigned int)(v10 >> 12)) >> 16);
      v61 = HIWORD(v24);
      v60 = v28;
      if ( v25 == HIWORD(v24) + *(unsigned __int16 *)(v10 + 32) )
      {
        if ( *(_BYTE *)(v10 + 39) != 1 )
          goto LABEL_36;
        RtlpHpLfhBlockBitmapInitialize(v10 + 64);
        *(_WORD *)(v10 + 32) += v27;
        v8 = a2;
        v7 = a3;
        *(_BYTE *)(v10 + 36) = 0;
      }
      else
      {
        if ( *(_BYTE *)(v10 + 39) != 1 || v26 || HIWORD(v24) <= (unsigned int)*(unsigned __int8 *)(v10 + 24) - 8 )
        {
LABEL_36:
          if ( (_WORD)v64 )
          {
            v30 = v65;
            v31 = v66;
            while ( 1 )
            {
              v33 = v30 - 1;
              v34 = v29 + v28 * v33;
              v30 = *(_WORD *)v34;
              if ( *(_DWORD *)(v34 + 8) != ((unsigned int)v34 ^ HIDWORD(v9[10]) ^ __ROL4__(
                                                                                    *(_DWORD *)v34 ^ v9[10],
                                                                                    *(_WORD *)v34)) )
              {
                RtlpLogHeapFailure(23, (__int64)v9, v34, v10, v33, 0LL);
                NT_ASSERT("0");
              }
              if ( v26 )
                goto LABEL_55;
              if ( *(_BYTE *)(v10 + 39) <= 1u )
                goto LABEL_55;
              v35 = *(_BYTE *)(v10 + 38);
              v36 = (unsigned int)(v34 - v10) >> 12 >> v35;
              v37 = 2 * v36;
              v38 = (char *)(2 * v36 + v10 + 8LL * *(unsigned __int8 *)(v10 + 24));
              _m_prefetchw(v38);
              LODWORD(v39) = -1;
              v40 = 0;
              v41 = &v38[2
                       * ((((_DWORD)v34
                          - (_DWORD)v10
                          + (v31 ^ *(unsigned __int16 *)(v10 + 40) ^ (unsigned int)(unsigned __int16)qword_1801CCEC8)
                          - 1) >> 12 >> v35)
                        - (unsigned int)v36)
                       + 2];
              if ( v38 >= v41 )
                goto LABEL_55;
              do
              {
                v42 = _InterlockedDecrement16((volatile signed __int16 *)v38);
                if ( v42 )
                {
                  if ( v42 == -1 )
                    --v40;
                }
                else
                {
                  ++v40;
                  if ( (_DWORD)v39 == -1 )
                    v39 = v37 >> 1;
                }
                v38 += 2;
                v37 += 2LL;
              }
              while ( v38 < v41 );
              if ( v40 )
                RtlpHpLfhContextUpdateFreeCommitCount(a1, v10, (v40 << 12 << *(_BYTE *)(v10 + 38)) / 4096);
              if ( (_DWORD)v39 == -1 )
              {
LABEL_55:
                v44 = (__int64 *)a1;
              }
              else
              {
                v43 = v39;
                v44 = (__int64 *)a1;
                RtlpHpLfhSubsegmentDecommitPages(a1, v10, v43, (char *)2);
              }
              v45 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v33 & 0x1F);
              v46 = v10 + 8 * ((unsigned __int64)v33 >> 5);
              if ( v26 )
              {
                v57 = v45 & *(_QWORD *)(v46 + 64);
                v47 = ~v45 & (unsigned int)*(_QWORD *)(v46 + 64);
                *(_QWORD *)(v46 + 64) = v57;
              }
              else
              {
                _m_prefetchw((const void *)(v46 + 64));
                v47 = (unsigned int)_InterlockedAnd64((volatile signed __int64 *)(v46 + 64), v45) & ~v45;
              }
              if ( !v47 )
              {
                RtlpLogHeapFailure(17, *v44, v34, v10, v33, 0LL);
                NT_ASSERT("0");
              }
              v28 = v60;
              if ( !v30 )
                break;
              v9 = (__int64 *)a1;
            }
            v4 = v67;
            v27 = v61;
            v6 = a4;
            v5 = v68;
          }
          *(_WORD *)(v10 + 32) += v27;
          v8 = a2;
          v7 = a3;
          goto LABEL_6;
        }
        RtlpHpLfhSubsegmentDelayFreeListBatch((_DWORD)v9, v10, v64, v29, v28);
        *(_WORD *)(v10 + 32) += v27;
        v8 = a2;
        v7 = a3;
      }
    }
LABEL_6:
    if ( *(_WORD *)(v10 + 32) == *(_WORD *)(v10 + 34) )
    {
      RtlpHpLfhOwnerMoveSubsegment(a1, v8, v10, 3, 0);
      v51 = *v7;
      if ( *(unsigned __int64 **)(*v7 + 8) != v7 )
        goto LABEL_78;
      *(_QWORD *)v10 = v51;
      *(_QWORD *)(v10 + 8) = v7;
      *(_QWORD *)(v51 + 8) = v10;
      *v7 = v10;
    }
    else if ( (v6 & 4) != 0 && *(_BYTE *)(v10 + 39) == 1 )
    {
      v13 = *(_BYTE *)(v10 + 38);
      if ( v13 )
      {
        if ( (*(_BYTE *)v8 & 1) != 0 || (*(_QWORD *)(v8 + 56) ^ v10) - 1 > 0xFFE )
        {
          v62 = 0;
          v14 = 4096 << v13;
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
          {
            v17 = 4096 << v13;
          }
          else
          {
            v15 = 2
                * ((unsigned __int16)qword_1801CCEC8 ^ *(unsigned __int16 *)(v10 + 40) ^ (unsigned __int16)(v10 >> 12));
            if ( ((v15 - 1) & v15) != 0 )
            {
              _BitScanReverse(&v16, v15);
              v15 = 1 << (v16 + 1);
            }
            if ( v15 <= 0x1000 )
              v15 = 4096;
            v17 = v14 >> 6;
            if ( v15 > v14 >> 6 )
              v17 = v15;
            if ( v17 >= v14 )
              v17 = v14;
          }
          _BitScanForward((unsigned int *)&v18, v17 >> 12);
          if ( v18 != *(unsigned __int8 *)(v10 + 38) )
          {
            v19 = v14 >> 12 >> v18;
            v20 = v19 * *(unsigned __int16 *)(v10 + 32);
            if ( (unsigned int)v20 >= *(unsigned __int16 *)(v10 + 34) )
            {
              v63 = 0;
              if ( (unsigned int)RtlpHpLfhSubsegmentReformatCheck(v20, v10, &v63, &v62) )
              {
                LOBYTE(v59) = v18;
                HIBYTE(v59) = v19;
                *(_WORD *)(v10 + 38) = v59;
                v21 = (void *)(v10 + 8LL * *(unsigned __int8 *)(v10 + 24));
                memset_thunk_772440563353939046(v21, 0, 2LL * v19);
                RtlpHpLfhSubsegmentConstructCommitState(v22, v10, v10 + 64, v21);
                v23 = RtlpHpLfhSubsegmentCountEmptyUnits(v10);
                if ( v23 )
                  RtlpHpLfhContextUpdateFreeCommitCount(
                    a1,
                    v10,
                    (unsigned __int64)(unsigned int)(v23 << 12 << *(_BYTE *)(v10 + 38)) >> 12);
              }
            }
          }
        }
      }
    }
    v9 = (__int64 *)a1;
  }
  v11 = _InterlockedExchange64((volatile __int64 *)(v8 + 8), 0LL);
  if ( v11 )
  {
    while ( 1 )
    {
      v48 = v11;
      v11 = *(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFF000uLL;
      if ( (v6 & 1) != 0 && *(_WORD *)(v48 + 18) )
      {
        v49 = (_WORD *)(v48 + 34);
      }
      else
      {
        v49 = (_WORD *)(v48 + 34);
        if ( *(unsigned __int16 *)(v48 + 18) + *(unsigned __int16 *)(v48 + 32) != *(unsigned __int16 *)(v48 + 34) )
          goto LABEL_64;
      }
      RtlpHpLfhSubsegmentDelayFreeProcess(v9, v48, 1);
LABEL_64:
      if ( *(_WORD *)(v48 + 32) == *v49 )
      {
        RtlpHpLfhOwnerMoveSubsegment(a1, v8, v48, 3, 0);
        v52 = *v7;
        if ( *(unsigned __int64 **)(*v7 + 8) != v7 )
          goto LABEL_78;
        *(_QWORD *)v48 = v52;
        *(_QWORD *)(v48 + 8) = v7;
        *(_QWORD *)(v52 + 8) = v48;
        *v7 = v48;
      }
      else if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, v8, v48, 0, 0) )
      {
        RtlpHpLfhOwnerMoveSubsegment(a1, v8, v50, 3, 0);
        v58 = (unsigned __int64 *)v7[1];
        if ( (unsigned __int64 *)*v58 != v7 )
          goto LABEL_78;
        *(_QWORD *)v48 = v7;
        *(_QWORD *)(v48 + 8) = v58;
        *v58 = v48;
        v7[1] = v48;
      }
      if ( !v11 )
        goto LABEL_12;
      v9 = (__int64 *)a1;
    }
  }
  do
  {
LABEL_12:
    if ( (unsigned __int64 *)*v7 == v7 )
      return;
    v12 = v7[1];
    if ( *(_WORD *)(v12 + 32) == *(_WORD *)(v12 + 34) && (v6 & 2) != 0 )
      return;
    v53 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_78;
    v54 = *(_QWORD **)(v12 + 8);
    if ( *v54 != v12 )
      goto LABEL_78;
    *v54 = v53;
    *(_QWORD *)(v53 + 8) = v54;
  }
  while ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, v8, v12, 0, 0) );
  v56 = (unsigned __int64 **)v7[1];
  if ( *v56 != v7 )
LABEL_78:
    __fastfail(3u);
  *v55 = v7;
  v55[1] = (unsigned __int64 *)v56;
  *v56 = (unsigned __int64 *)v55;
  v7[1] = (unsigned __int64)v55;
}
