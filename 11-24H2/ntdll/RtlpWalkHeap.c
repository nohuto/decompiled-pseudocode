/*
 * XREFs of RtlpWalkHeap @ 0x18005E780
 * Callers:
 *     RtlWalkHeap @ 0x18005E150 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x18005E1A0 (RtlpWalkHeapInternal.c)
 *     RtlpHpTagDestroyHeap @ 0x18005E6D0 (RtlpHpTagDestroyHeap.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180114970 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpSetHeapWalkEntryOverheadBytes @ 0x18005E260 (RtlpSetHeapWalkEntryOverheadBytes.c)
 *     RtlpWalkLFHBlock @ 0x18005F0E0 (RtlpWalkLFHBlock.c)
 *     RtlpWalkLowFragHeapSegment @ 0x180108038 (RtlpWalkLowFragHeapSegment.c)
 *     RtlDebugWalkHeap @ 0x18011D210 (RtlDebugWalkHeap.c)
 *     RtlpLogHeapWalkEvent @ 0x18014ABC0 (RtlpLogHeapWalkEvent.c)
 */

__int64 __fastcall RtlpWalkHeap(unsigned __int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rcx
  __int16 v7; // r14
  __int16 v8; // r15
  __int16 v9; // dx
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edi
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rbp
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  char v23; // al
  __int64 v24; // rax
  char v25; // al
  unsigned __int64 v26; // rax
  char v27; // al
  int v28; // r8d
  __int64 v29; // r9
  unsigned __int16 v30; // dx
  char v31; // cl
  unsigned __int64 v32; // rcx
  char v33; // cl
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // edx
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  bool v40; // zf
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // r8
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rbp
  int v49; // eax
  __int64 v50; // rax
  __int16 *v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rbp
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801CB5C8)();
  if ( (((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) != 0
    && !(unsigned __int8)RtlDebugWalkHeap(a1) )
  {
    v59 = -1073741811;
    goto LABEL_10;
  }
  v6 = *(_QWORD **)a2;
  v7 = 0;
  v59 = 0;
  LOBYTE(v8) = 1;
  if ( !v6 )
  {
    v45 = (_QWORD *)a1;
    goto LABEL_134;
  }
  v9 = *(_WORD *)(a2 + 18);
  if ( (v9 & 0x1002) != 0 )
  {
    if ( (v9 & 2) == 0 || *(_BYTE *)(a1 + 418) != 2 || v6 != *(_QWORD **)(a1 + 408) )
    {
      if ( a3 && (v9 & 2) != 0 )
      {
        v22 = v6[8];
        goto LABEL_39;
      }
      v40 = (v9 & 0x1000) == 0;
      v41 = (_QWORD *)(a1 + 288);
      v22 = (unsigned __int64)v6 + *(_QWORD *)(a2 + 8);
      if ( !v40 )
      {
        v42 = (_QWORD *)*v41;
        v43 = v6 - 6;
        while ( v42 != v41 )
        {
          v6 = v42 - 3;
          if ( v42[3] <= (unsigned __int64)v43 && (unsigned __int64)v43 <= v6[9] )
            goto LABEL_124;
          v42 = (_QWORD *)*v42;
        }
        v6 = 0LL;
      }
LABEL_124:
      if ( a3 && v22 < v6[9] )
        goto LABEL_39;
      v44 = (_QWORD *)v6[3];
      if ( v44 != v41 )
      {
        v45 = v44 - 3;
        goto LABEL_134;
      }
      if ( *(_BYTE *)(a1 + 418) == 2 )
      {
        v45 = *(_QWORD **)(a1 + 408);
        goto LABEL_134;
      }
    }
    v45 = 0LL;
    goto LABEL_134;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + 418) == 2
        && *(_QWORD *)(a1 + 408)
        && (unsigned __int8)RtlpWalkLFHBlock(a1, a2)
        && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
      {
        goto LABEL_10;
      }
      v14 = *(_QWORD **)a2;
      if ( (*(_BYTE *)(a2 + 18) & 1) != 0 )
      {
        v15 = (unsigned __int64)(v14 - 2);
        _m_prefetchw((const void *)v15);
        if ( *(_BYTE *)(v15 + 15) == 5 )
          v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
        v19 = *(_BYTE *)(v15 + 15);
        if ( v19 == 4 )
        {
          v53 = *(_QWORD *)(v15 - 48);
          if ( v53 == a1 + 272 )
          {
LABEL_180:
            v59 = -2147483622;
            goto LABEL_10;
          }
          v22 = v53 + 48;
          goto LABEL_39;
        }
        v20 = *(unsigned __int8 *)(v15 + 14);
        if ( (_BYTE)v20 )
          v18 = (v15 & 0xFFFFFFFFFFFF0000uLL) - (v20 << 16) + 0x10000;
        else
          v18 = a1;
        if ( !v18 )
          goto LABEL_22;
        if ( v19 != 3 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            LODWORD(v21) = *(_DWORD *)(v15 + 8);
            if ( ((unsigned int)v21 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v21) = *(_WORD *)(a1 + 136) ^ v21;
          }
          else
          {
            LOWORD(v21) = *(_WORD *)(v15 + 8);
          }
          v21 = (unsigned __int16)v21;
          goto LABEL_38;
        }
      }
      else
      {
        v15 = (unsigned __int64)(v14 - 4);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v16 = *(_DWORD *)(v15 + 8);
          if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
            LOWORD(v16) = *(_WORD *)(a1 + 136) ^ v16;
        }
        else
        {
          LOWORD(v16) = *(_WORD *)(v15 + 8);
        }
        v17 = *(unsigned __int8 *)(v15 + 14);
        if ( (_BYTE)v17 )
          v18 = (v15 & 0xFFFFFFFFFFFF0000uLL) - (v17 << 16) + 0x10000;
        else
          v18 = a1;
        if ( !v18 )
        {
LABEL_22:
          v59 = -1073741503;
          goto LABEL_10;
        }
        if ( *(_BYTE *)(v15 + 15) != 3 )
        {
          v21 = (unsigned __int16)v16;
LABEL_38:
          v22 = 16 * v21 + v15;
          goto LABEL_39;
        }
      }
      if ( *(_QWORD *)(v15 + 56) + v15 + 64 >= *(_QWORD *)(v18 + 72) )
      {
        v58 = *(_QWORD *)(v18 + 24);
        if ( v58 == a1 + 288 )
          goto LABEL_143;
        v45 = (_QWORD *)(v58 - 24);
LABEL_134:
        v22 = 0LL;
        if ( !v45 )
        {
LABEL_143:
          v48 = *(_QWORD *)(a1 + 272);
          if ( v48 == a1 + 272 )
            goto LABEL_180;
          v22 = v48 + 48;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 418) == 2 && v45 == *(_QWORD **)(a1 + 408) )
          {
            RtlpWalkLowFragHeapSegment(a1, a2, &v59);
            goto LABEL_10;
          }
          *(_QWORD *)a2 = v45;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v46 = *((_DWORD *)v45 + 2);
            if ( (v46 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v46) = *(_WORD *)(a1 + 136) ^ v46;
          }
          else
          {
            LOWORD(v46) = *((_WORD *)v45 + 4);
          }
          *(_QWORD *)(a2 + 8) = 16LL * (unsigned __int16)v46;
          *(_DWORD *)(a2 + 16) = 0x20000;
          *(_DWORD *)(a2 + 24) = (*((_DWORD *)v45 + 14) - *((_DWORD *)v45 + 20)) << 12;
          v47 = *((_DWORD *)v45 + 20) << 12;
          *(_DWORD *)(a2 + 28) = v47;
          if ( (*((_BYTE *)v45 + 20) & 2) != 0 )
            *(_DWORD *)(a2 + 28) = v47 + 4096;
          *(_QWORD *)(a2 + 32) = v45[8] + 16 * (((*(_BYTE *)(v45[8] + 10LL) & 1) == 0) + 1LL);
          *(_QWORD *)(a2 + 40) = v45[9];
        }
      }
      else
      {
        *(_QWORD *)a2 = *(_QWORD *)(v15 + 48);
        v57 = *(_QWORD *)(v15 + 56);
        v22 = 0LL;
        *(_QWORD *)(a2 + 8) = v57;
        *(_DWORD *)(a2 + 16) = 0x10000000;
        *(_QWORD *)(a2 + 36) = 0LL;
      }
LABEL_39:
      if ( !v22 )
        goto LABEL_10;
      v23 = *(_BYTE *)(v22 + 15);
      if ( (v23 & 0x40) != 0 )
        v24 = v22 + 16LL * (*(_BYTE *)(v22 + 15) & 0x3F);
      else
        v24 = v23 == 4 ? v22 + 16LL * *(unsigned __int8 *)(v22 + 14) : v22;
      *(_WORD *)(a2 + 18) = 1;
      *(_QWORD *)a2 = v24 + 16;
      if ( *(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408) || !(unsigned __int8)RtlpWalkLFHBlock(a1, a2) )
        break;
      if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_10;
    }
    if ( ((*(_BYTE *)(v22 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
      break;
    v25 = *(_BYTE *)(v22 + 15);
    if ( (v25 & 0x40) != 0 )
    {
      v26 = v22 + 16LL * (*(_BYTE *)(v22 + 15) & 0x3F);
    }
    else if ( v25 == 4 )
    {
      v26 = v22 + 16LL * *(unsigned __int8 *)(v22 + 14);
    }
    else
    {
      v26 = v22;
    }
    *(_QWORD *)a2 = v26 + 16;
    v27 = *(_BYTE *)(v22 + 15);
    if ( v27 == 3 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v22 + 48);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v22 + 56);
      *(_DWORD *)(a2 + 16) = 0x10000000;
      *(_QWORD *)(a2 + 36) = 0LL;
      goto LABEL_75;
    }
    if ( v27 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v54 = *(_DWORD *)(v22 + 8);
        if ( (v54 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v54) = *(_WORD *)(a1 + 136) ^ v54;
      }
      else
      {
        LOWORD(v54) = *(_WORD *)(v22 + 8);
      }
      v55 = *(_QWORD *)(v22 - 16) - (unsigned __int16)v54;
      *(_BYTE *)(a2 + 17) = 64;
      *(_QWORD *)(a2 + 8) = v55;
      *(_WORD *)(a2 + 18) = 16385;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v56 = *(_DWORD *)(v22 + 8);
        if ( (v56 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v56) = *(_WORD *)(a1 + 136) ^ v56;
      }
      else
      {
        LOWORD(v56) = *(_WORD *)(v22 + 8);
      }
      RtlpSetHeapWalkEntryOverheadBytes(a2, (unsigned __int16)v56);
      goto LABEL_75;
    }
    if ( v27 != 1 )
    {
      v28 = *(_DWORD *)(a1 + 124);
      if ( v28 )
      {
        LODWORD(v29) = *(_DWORD *)(v22 + 8);
        v30 = v29;
        v28 = *(_DWORD *)(a1 + 124);
        if ( ((unsigned int)v29 & v28) != 0 )
          v30 = *(_WORD *)(a1 + 136) ^ v29;
      }
      else
      {
        v30 = *(_WORD *)(v22 + 8);
        LOWORD(v29) = v30;
      }
      v31 = *(_BYTE *)(v22 + 15);
      if ( v31 == 5 )
      {
        v32 = *(unsigned __int16 *)(v22 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v31 & 0x40) != 0 )
      {
        v32 = *(unsigned __int16 *)(v22 + 16LL * (*(_BYTE *)(v22 + 15) & 0x3F) + 12);
      }
      else if ( (v31 & 0x3F) == 0x3F )
      {
        if ( v31 >= 0 )
        {
          if ( v28 )
          {
            LODWORD(v29) = *(_DWORD *)(v22 + 8);
            if ( ((unsigned int)v29 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v29) = *(_WORD *)(a1 + 136) ^ v29;
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v22 + 8) ^ (v22 >> 4)) )
            v29 = 0LL;
          else
            v29 = *(_QWORD *)(v22
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v22 + 8) ^ (unsigned int)(v22 >> 4)) >> 12));
          LOWORD(v29) = *(_WORD *)(v29 + 36);
        }
        v32 = *(_QWORD *)(v22 + 16LL * (unsigned __int16)v29);
      }
      else
      {
        v32 = *(_BYTE *)(v22 + 15) & 0x3F;
      }
      *(_QWORD *)(a2 + 8) = 16LL * v30 - v32;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v22 + 14);
      *(_WORD *)(a2 + 18) = 1;
      v33 = *(_BYTE *)(v22 + 15);
      if ( v33 == 5 )
      {
        v34 = *(unsigned __int16 *)(v22 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        *(_BYTE *)(a2 + 16) = v34;
        goto LABEL_74;
      }
      if ( (v33 & 0x40) != 0 )
      {
        v34 = *(unsigned __int16 *)(v22 + 16LL * (*(_BYTE *)(v22 + 15) & 0x3F) + 12);
        *(_BYTE *)(a2 + 16) = v34;
        goto LABEL_74;
      }
      if ( (v33 & 0x3F) != 0x3F )
      {
        v34 = *(_BYTE *)(v22 + 15) & 0x3F;
        *(_BYTE *)(a2 + 16) = v34;
        goto LABEL_74;
      }
      if ( v33 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          LODWORD(v35) = *(_DWORD *)(v22 + 8);
          if ( ((unsigned int)v35 & *(_DWORD *)(a1 + 124)) != 0 )
            LOWORD(v35) = *(_WORD *)(a1 + 136) ^ v35;
          v8 = *(_WORD *)(a2 + 18);
        }
        else
        {
          LOWORD(v35) = *(_WORD *)(v22 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v22 + 8) ^ (v22 >> 4)) )
          v35 = 0LL;
        else
          v35 = *(_QWORD *)(v22
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v22 + 8) ^ (unsigned int)(v22 >> 4)) >> 12));
        LOWORD(v35) = *(_WORD *)(v35 + 36);
        v8 = *(_WORD *)(a2 + 18);
      }
      v34 = *(_QWORD *)(v22 + 16LL * (unsigned __int16)v35);
      *(_BYTE *)(a2 + 16) = v34;
      if ( (v8 & 2) == 0 )
LABEL_74:
        *(_QWORD *)(a2 + 36) = v34;
LABEL_75:
      v36 = *(_DWORD *)(a1 + 124);
      if ( v36 )
      {
        v36 = *(_DWORD *)(a1 + 124);
        v37 = HIWORD(*(_DWORD *)(v22 + 8));
        if ( (*(_DWORD *)(v22 + 8) & v36) != 0 )
          LOBYTE(v37) = *(_BYTE *)(a1 + 138) ^ v37;
      }
      else
      {
        LOBYTE(v37) = *(_BYTE *)(v22 + 10);
      }
      if ( (v37 & 2) != 0 )
      {
        if ( *(_BYTE *)(v22 + 15) == 4 )
        {
          v51 = (__int16 *)(v22 - 30);
          v52 = (_QWORD *)(v22 - 24);
        }
        else
        {
          if ( v36 )
          {
            v49 = *(_DWORD *)(v22 + 8);
            if ( (v49 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v49) = *(_WORD *)(a1 + 136) ^ v49;
          }
          else
          {
            LOWORD(v49) = *(_WORD *)(v22 + 8);
          }
          v50 = 16LL * (unsigned __int16)v49;
          v51 = (__int16 *)(v22 + v50 - 14);
          v52 = (_QWORD *)(v22 + v50 - 8);
        }
        *(_QWORD *)(a2 + 24) = *v52;
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          v7 = *v51;
        *(_WORD *)(a2 + 32) = v7;
        *(_WORD *)(a2 + 18) |= 0x10u;
      }
      else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        *(_WORD *)(a2 + 32) = *(unsigned __int8 *)(v22 + 11);
      }
      else
      {
        *(_WORD *)(a2 + 32) = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v38 = HIWORD(*(_DWORD *)(v22 + 8));
        if ( (*(_DWORD *)(v22 + 8) & *(_DWORD *)(a1 + 124)) != 0 )
          LOBYTE(v38) = *(_BYTE *)(a1 + 138) ^ v38;
      }
      else
      {
        LOBYTE(v38) = *(_BYTE *)(v22 + 10);
      }
      *(_WORD *)(a2 + 18) |= v38 & 0xE0;
      goto LABEL_10;
    }
    *(_WORD *)(a2 + 18) = 1;
  }
  *(_QWORD *)a2 = v22 + 32;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v39 = *(_DWORD *)(v22 + 8);
    if ( (v39 & *(_DWORD *)(a1 + 124)) != 0 )
      LOWORD(v39) = *(_WORD *)(a1 + 136) ^ v39;
  }
  else
  {
    LOWORD(v39) = *(_WORD *)(v22 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * (unsigned __int16)v39 - 32;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v22 + 14);
  *(_WORD *)(a2 + 18) = 0;
  *(_BYTE *)(a2 + 16) = 32;
  *(_QWORD *)(a2 + 36) = 32LL;
LABEL_10:
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v11 = 2147353472LL;
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v12 = v59;
    if ( v59 != -2147483622 )
      RtlpLogHeapWalkEvent(a1);
  }
  else
  {
    return v59;
  }
  return v12;
}
