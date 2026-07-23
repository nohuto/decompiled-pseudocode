/*
 * XREFs of RtlpHpExtrasGet @ 0x180059480
 * Callers:
 *     RtlSetUserValueHeap @ 0x18001FB40 (RtlSetUserValueHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpGetUserInfo @ 0x1800E6818 (RtlpHpGetUserInfo.c)
 *     RtlSetUserFlagsHeap @ 0x180109150 (RtlSetUserFlagsHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(_RTL_SRWLOCK *a1, unsigned __int64 a2, __int16 a3, __int64 *a4)
{
  __int64 v4; // r14
  int v9; // eax
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // r8
  char v13; // cl
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r9
  __int64 v18; // rax
  _RTL_SRWLOCK *v19; // rsi
  unsigned __int64 Value; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  int v23; // edx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  char v27; // cl
  unsigned __int64 v28; // r9
  __int64 v29; // r8
  int v30; // r10d
  unsigned __int64 v31; // r11
  __int64 v32; // r8
  _QWORD *v33; // rcx
  __int64 v34; // rdx
  unsigned __int16 v35; // cx
  int v36; // eax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  char v39; // r8
  __int64 v40; // rcx
  unsigned __int16 v41; // ax
  int v42; // r14d

  LODWORD(v4) = 0;
  if ( (_WORD)a2 )
  {
    v9 = 0;
LABEL_3:
    v10 = (__int64)&a1[24 * v9 + 40];
    v11 = *(_QWORD *)v10;
    v12 = a2 & *(_QWORD *)v10;
    if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v12 + 0x10) ^ v12) == v10 )
    {
      v13 = *(_BYTE *)(v10 + 8);
      v14 = v12 + 32 * ((unsigned __int64)(unsigned int)(a2 - v12) >> v13);
      v15 = -32LL * *(unsigned __int8 *)(v14 + 26) + v14;
      v16 = *(_BYTE *)(v15 + 24);
      if ( (v16 & 3) == 3 && (v12 + ((__int64)(v15 - v12) >> 5 << v13) == a2 || (v16 & 0xCu) >= 8) )
      {
        if ( v15 )
        {
          v27 = *(_BYTE *)(v10 + 8);
          v28 = (v11 & v15) + ((__int64)(v15 - (v11 & v15)) >> 5 << v27);
          if ( a2 <= v28 )
          {
            LOWORD(v42) = *(_WORD *)(v15 + 8);
            v26 = ((unsigned __int64)*(unsigned __int8 *)(v15 + 31) << v27) - *(unsigned int *)(v15 + 4);
          }
          else
          {
            if ( (*(_BYTE *)(v15 + 24) & 0xC) == 8 )
            {
              v29 = *(_QWORD *)(v10 + 24);
              v30 = *(_DWORD *)((v11 & v15) + ((__int64)(v15 - (v11 & v15)) >> 5 << v27) + 0x28);
              v31 = (((unsigned int)a2
                    - (((unsigned int)qword_1801CCEC8 ^ v30 ^ (unsigned int)(v28 >> 12)) >> 16)
                    - (unsigned int)v28)
                   * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v28 + 44) << 6)
                                                       + v29
                                                       + 72)) >> 32;
              if ( (_DWORD)a2 - (((unsigned int)qword_1801CCEC8 ^ v30 ^ (unsigned int)(v28 >> 12)) >> 16) - (_DWORD)v28 == (_DWORD)v31 * (unsigned __int16)(qword_1801CCEC8 ^ v30 ^ (v28 >> 12)) )
              {
                v32 = 1LL << (v31 & 0x1F);
                v33 = (_QWORD *)(v28 + 8 * ((v31 >> 5) + 8));
                if ( (*(_DWORD *)v33 & (unsigned int)v32) != 0 )
                {
                  v34 = (unsigned __int16)qword_1801CCEC8 ^ (unsigned int)(unsigned __int16)((v28 >> 12) ^ v30);
                  if ( (HIDWORD(*v33) & v32) != 0 )
                  {
                    v35 = *(_WORD *)(v34 + a2 - 2);
                    v36 = v35 & 0x3FF;
                    if ( (v35 & 0x8000u) != 0 )
                      v36 = 1;
                    LODWORD(v4) = (v35 >> 14) & 1;
                    LODWORD(v34) = v34 - v36;
                  }
                  v26 = (unsigned int)v34;
                }
                else
                {
                  v26 = -1LL;
                }
                goto LABEL_34;
              }
LABEL_43:
              v26 = -1LL;
              goto LABEL_34;
            }
            v38 = a2 - 16;
            v39 = *(_BYTE *)(*(_QWORD *)(v10 + 32) + 4LL) & 1;
            if ( v39 && (a2 & 0xFFF) == 0 )
              v38 = a2 - 32;
            if ( ((RtlpHpHeapGlobals ^ v38 ^ *(_QWORD *)v38) & 0xFF000000000000LL) == 0 )
              goto LABEL_43;
            v40 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v38 ^ (unsigned int)*(_QWORD *)v38) >> 16)) - 16;
            if ( v39 && ((v38 + 32) & 0xFFF) == 0 )
              v40 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v38 ^ (unsigned int)*(_QWORD *)v38) >> 16)) - 32;
            v26 = (unsigned int)v40;
            if ( (*(_DWORD *)(v38 + 8) & 0x100) == 0 )
              goto LABEL_34;
            v41 = *(_WORD *)(v40 + a2 - 2);
            if ( (v41 & 0x8000u) == 0 )
              v26 = (unsigned int)v40 - (unsigned __int64)(*(_WORD *)(v40 + a2 - 2) & 0x1FFF);
            else
              v26 = (unsigned int)v40 - 1LL;
            v42 = v41 >> 14;
          }
          LODWORD(v4) = v42 & 1;
          goto LABEL_34;
        }
      }
    }
    return -1LL;
  }
  v18 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801CD918) >> 20));
  if ( v18 )
  {
    v9 = v18 - 1;
    if ( v9 != 2 )
      goto LABEL_3;
  }
  v19 = a1 + 8;
  RtlAcquireSRWLockShared(a1 + 8);
  Value = a1[10].Value;
  v21 = (unsigned __int64)&a1[9];
  v22 = *(_QWORD *)v21;
  if ( (Value & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_50;
    v22 ^= v21;
  }
  v23 = Value & 1;
  if ( !v22 )
    goto LABEL_50;
  do
  {
    v24 = *(_QWORD *)(v22 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v24 )
    {
      if ( a2 <= v24 )
        break;
      v25 = *(_QWORD *)(v22 + 8);
      if ( v23 && v25 )
      {
        v22 ^= v25;
        continue;
      }
LABEL_18:
      v22 = v25;
      continue;
    }
    v25 = *(_QWORD *)v22;
    if ( !v23 || !v25 )
      goto LABEL_18;
    v22 ^= v25;
  }
  while ( v22 );
  if ( v22 )
  {
    v4 = *(_QWORD *)(v22 + 32) & 1LL;
    v26 = (*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v22 + 24);
    RtlReleaseSRWLockShared(v19);
    goto LABEL_34;
  }
LABEL_50:
  v26 = -1LL;
  RtlReleaseSRWLockShared(v19);
LABEL_34:
  if ( v26 == -1 )
    return -1LL;
  if ( a4 )
    *a4 = v26;
  if ( !(_DWORD)v4 )
    return 0LL;
  v37 = v26 + a2 + 16;
  if ( (a3 & 0x2000) == 0 )
    v37 = v26 + a2;
  return (v37 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
}
