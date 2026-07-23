/*
 * XREFs of RtlpInsertFreeBlock @ 0x18000FC70
 * Callers:
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpInitializeHeapSegment @ 0x180025C40 (RtlpInitializeHeapSegment.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpCoalesceHeap @ 0x180106F80 (RtlpCoalesceHeap.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180010460 (RtlpHeapHandleError.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int16 v5; // di
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  char v8; // al
  unsigned __int16 v9; // si
  char v10; // cl
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  _DWORD *v14; // r8
  unsigned __int64 v15; // rdx
  __int64 *v16; // rsi
  _QWORD **v17; // r8
  unsigned __int64 v18; // rax
  int v19; // r15d
  int v20; // eax
  int v21; // r13d
  _QWORD *v22; // rdi
  __int64 v23; // r14
  _QWORD *v24; // rax
  int v25; // edx
  __int16 v26; // r12
  __int64 v27; // r8
  int v28; // edx
  __int16 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned int v32; // edx
  __int64 v33; // r9
  int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  __int64 *v37; // rax
  _QWORD *v38; // r14
  __int64 *v39; // rdi
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  int v42; // edx
  unsigned int v43; // esi
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // r15
  _DWORD *v47; // rdx
  int v48; // ecx
  int v49; // eax
  int v50; // edx
  _QWORD *i; // r14
  int v52; // edx
  __int16 v53; // r15
  unsigned __int16 v54; // [rsp+30h] [rbp-58h]
  unsigned __int16 v55; // [rsp+34h] [rbp-54h]
  unsigned __int64 v56; // [rsp+38h] [rbp-50h]
  __int16 v57; // [rsp+38h] [rbp-50h]
  unsigned __int64 v58; // [rsp+40h] [rbp-48h]
  unsigned __int64 v59; // [rsp+98h] [rbp+10h]
  unsigned __int64 v60; // [rsp+A0h] [rbp+18h]
  char v61; // [rsp+A8h] [rbp+20h]

  if ( a3 )
  {
    v60 = a3;
    v59 = a2;
    v3 = a2;
    v5 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
    if ( !v5
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(a2 + 10) & 8) == 0
      && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
      RtlpHeapHandleError(1LL);
      a3 = v60;
    }
    v6 = *(unsigned __int8 *)(v3 + 14);
    if ( (_BYTE)v6 )
      v7 = (v3 & 0xFFFFFFFFFFFF0000uLL) - (v6 << 16) + 0x10000;
    else
      v7 = a1;
    v8 = *(_BYTE *)(v3 + 10);
    v61 = v8;
    v58 = v7;
    while ( a3 )
    {
      if ( a3 > 0xFF00 )
      {
        v10 = 0;
        v9 = -272;
        if ( a3 != 65281 )
          v9 = -256;
      }
      else
      {
        v9 = a3;
        v10 = v8;
      }
      *(_BYTE *)(v3 + 10) = v10;
      *(_WORD *)(v3 + 12) = *(_WORD *)(a1 + 140) ^ v5;
      v11 = *(_QWORD *)(v7 + 40);
      v55 = v9;
      if ( v11 == v7 )
      {
        LOBYTE(v12) = 0;
      }
      else
      {
        v12 = ((v3 - v7) >> 16) + 1;
        if ( v12 >= 0xFE )
        {
          RtlpLogHeapFailure(3, v11, v3, v7, 0LL, 0LL);
          v10 = *(_BYTE *)(v3 + 10);
        }
      }
      *(_BYTE *)(v3 + 14) = v12;
      *(_BYTE *)(v3 + 10) = v10 & 0xF0;
      *(_WORD *)(v3 + 8) = v9;
      *(_BYTE *)(v3 + 11) = 0;
      v13 = v9;
      *(_BYTE *)(v3 + 15) = 0;
      v56 = v9;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
      {
        v14 = (_DWORD *)(v3 + 32);
        v15 = (16 * (unsigned __int64)v9 - 32) >> 2;
        if ( v15 )
        {
          if ( ((unsigned __int8)v14 & 4) != 0 )
          {
            --v15;
            *v14 = -17891602;
            v14 = (_DWORD *)(v3 + 36);
          }
          memset64(v14, 0xFEEEFEEEFEEEFEEEuLL, v15 >> 1);
          if ( (v15 & 1) != 0 )
            v14[v15 - 1] = -17891602;
        }
        *(_BYTE *)(v3 + 10) |= 4u;
        v13 = v9;
      }
      v16 = *(__int64 **)(a1 + 312);
      v17 = (_QWORD **)(a1 + 336);
      if ( v16 )
      {
        while ( 1 )
        {
          v18 = *((unsigned int *)v16 + 2);
          if ( v13 < v18 )
          {
            v19 = v13;
            goto LABEL_26;
          }
          if ( !*v16 )
            break;
          v16 = (__int64 *)*v16;
        }
        v19 = v18 - 1;
LABEL_26:
        v20 = *((_DWORD *)v16 + 6);
        v21 = v56;
        while ( 2 )
        {
          v22 = (_QWORD *)v16[4];
          v23 = (unsigned int)(v19 - v20);
          v24 = (_QWORD *)v22[1];
          if ( v22 != v24 )
          {
            v25 = *((_DWORD *)v24 - 2);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v25 ^= *(_DWORD *)(a1 + 136);
              v26 = v25;
              if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
              {
                RtlpLogHeapFailure(3, a1, (_DWORD)v24 - 16, 0, 0LL, 0LL);
                LOWORD(v25) = v26;
              }
            }
            if ( v21 - (unsigned __int16)v25 <= 0 )
            {
              v27 = *v22 - 16LL;
              v28 = *(_DWORD *)(v27 + 8);
              if ( *(_DWORD *)(a1 + 124) )
              {
                v28 ^= *(_DWORD *)(a1 + 136);
                v29 = v28;
                if ( HIBYTE(v28) != ((unsigned __int8)v28 ^ (unsigned __int8)(BYTE1(v28) ^ BYTE2(v28))) )
                {
                  RtlpLogHeapFailure(3, a1, v27, 0, 0LL, 0LL);
                  LOWORD(v28) = v29;
                }
              }
              if ( v21 - (unsigned __int16)v28 > 0 )
              {
                if ( !*v16 && v19 == *((_DWORD *)v16 + 2) - 1 )
                {
                  if ( *((_DWORD *)v16 + 3) )
                    v23 = (unsigned int)(2 * v23);
                  for ( i = *(_QWORD **)(v16[6] + 8 * v23); v22 != i; i = (_QWORD *)*i )
                  {
                    v52 = *((_DWORD *)i - 2);
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v52 ^= *(_DWORD *)(a1 + 136);
                      v53 = v52;
                      if ( HIBYTE(v52) != ((unsigned __int8)v52 ^ (unsigned __int8)(BYTE1(v52) ^ BYTE2(v52))) )
                      {
                        RtlpLogHeapFailure(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
                        LOWORD(v52) = v53;
                      }
                    }
                    if ( (int)(v56 - (unsigned __int16)v52) <= 0 )
                    {
                      v21 = v56;
                      v22 = i;
                      goto LABEL_45;
                    }
                  }
                  v21 = v56;
                }
                else
                {
                  v30 = v16[5];
                  v31 = (unsigned int)v23 >> 5;
                  v32 = *(_DWORD *)(v30 + 4 * v31) & (-1 << (v23 & 0x1F));
                  v33 = v30 + 4 * v31;
                  if ( v32 )
                  {
LABEL_39:
                    if ( (_WORD)v32 )
                    {
                      if ( (_BYTE)v32 )
                        v34 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v32];
                      else
                        v34 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v32)] + 8;
                    }
                    else if ( (v32 & 0xFF0000) != 0 )
                    {
                      v34 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v32)] + 16;
                    }
                    else
                    {
                      v34 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v32 >> 24] + 24;
                    }
                    v35 = 32 * v31 + v34;
                    v36 = 2 * v35;
                    if ( !*((_DWORD *)v16 + 3) )
                      v36 = v35;
                    v22 = *(_QWORD **)(v16[6] + 8LL * v36);
                    break;
                  }
                  while ( (unsigned int)v31 <= ((unsigned int)(*((_DWORD *)v16 + 2) - *((_DWORD *)v16 + 6)) >> 5) - 1 )
                  {
                    v32 = *(_DWORD *)(v33 + 4);
                    v33 += 4LL;
                    LODWORD(v31) = v31 + 1;
                    if ( v32 )
                      goto LABEL_39;
                  }
                }
LABEL_121:
                v16 = (__int64 *)*v16;
                v19 = *((_DWORD *)v16 + 6);
                v20 = v19;
                continue;
              }
              v22 = (_QWORD *)*v22;
            }
          }
          break;
        }
LABEL_45:
        if ( v22 )
        {
          v3 = v59;
          v17 = (_QWORD **)(a1 + 336);
          v7 = v58;
          v13 = v56;
          goto LABEL_47;
        }
        goto LABEL_121;
      }
      v22 = *v17;
LABEL_47:
      if ( v17 != v22 )
      {
        v48 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v48 )
          {
            v49 = *((_DWORD *)v22 - 2);
            v48 = *(_DWORD *)(a1 + 124);
            if ( (v49 & v48) != 0 )
              LOWORD(v49) = *(_WORD *)(a1 + 136) ^ v49;
          }
          else
          {
            LOWORD(v49) = *((_WORD *)v22 - 4);
          }
          if ( v13 <= (unsigned __int16)v49 )
            break;
          v22 = (_QWORD *)*v22;
        }
        while ( v17 != v22 );
      }
      v37 = (__int64 *)v22[1];
      v38 = (_QWORD *)(v3 + 16);
      if ( (_QWORD *)*v37 == v22 )
      {
        *v38 = v22;
        *(_QWORD *)(v3 + 24) = v37;
        *v37 = (__int64)v38;
        v22[1] = v38;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v22, 0, *v37, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v3 + 8);
      v39 = *(__int64 **)(a1 + 312);
      if ( v39 )
      {
        v40 = *(unsigned __int16 *)(v3 + 8);
        while ( 1 )
        {
          v41 = *((unsigned int *)v39 + 2);
          if ( v40 < v41 )
          {
            v42 = v41 - 1;
            goto LABEL_56;
          }
          if ( !*v39 )
            break;
          v39 = (__int64 *)*v39;
        }
        v42 = v41 - 1;
        LODWORD(v40) = v41 - 1;
LABEL_56:
        v43 = v40 - *((_DWORD *)v39 + 6);
        v54 = *(_WORD *)(v3 + 8);
        v44 = v39[6];
        v45 = 2 * v43;
        if ( !*((_DWORD *)v39 + 3) )
          v45 = v43;
        ++*((_DWORD *)v39 + 4);
        v46 = *(_QWORD *)(v44 + 8 * v45);
        if ( (_DWORD)v40 == v42 )
          ++*((_DWORD *)v39 + 5);
        if ( !v46 )
          goto LABEL_61;
        v50 = *(_DWORD *)(v46 - 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v50 ^= *(_DWORD *)(a1 + 136);
          v57 = v50;
          if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
          {
            RtlpLogHeapFailure(3, a1, v46 - 16, 0, 0LL, 0LL);
            LOWORD(v50) = v57;
          }
        }
        if ( v54 - (unsigned __int16)v50 <= 0 )
        {
LABEL_61:
          *(_QWORD *)(v39[6] + 8 * v45) = v38;
          if ( !v46 )
          {
            v47 = (_DWORD *)(v39[5] + 4 * ((unsigned __int64)v43 >> 5));
            *v47 |= 1 << (v43 & 0x1F);
          }
        }
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v3 + 11) = *(_BYTE *)(v3 + 8) ^ *(_BYTE *)(v3 + 9) ^ *(_BYTE *)(v3 + 10);
        *(_DWORD *)(v3 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v5 = v55;
      a3 = v60 - v55;
      v3 += 16LL * v55;
      v60 = a3;
      v8 = v61;
      v59 = v3;
      if ( v3 >= *(_QWORD *)(v7 + 72) )
        return;
    }
    *(_WORD *)(v3 + 12) = *(_WORD *)(a1 + 140) ^ v5;
    if ( !v5 && RtlpHeapErrorHandlerThreshold >= 1 && ((v3 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v3 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL, 0xFEEEFEEEFEEEFEEEuLL);
      else
        DbgPrint("HEAP: ", 65280LL, 0LL, 0xFEEEFEEEFEEEFEEEuLL);
      DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
      RtlpHeapHandleError(1LL);
    }
  }
}
