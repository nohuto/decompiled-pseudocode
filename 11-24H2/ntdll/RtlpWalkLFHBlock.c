/*
 * XREFs of RtlpWalkLFHBlock @ 0x180049500
 * Callers:
 *     RtlpWalkHeap @ 0x180048BA0 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpIsLFHZoneAllocation @ 0x180049DB0 (RtlpIsLFHZoneAllocation.c)
 *     RtlpGetFirstBlockAddress @ 0x180049E20 (RtlpGetFirstBlockAddress.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  char v16; // al
  unsigned __int64 v17; // rax
  __int16 v18; // r10
  __int64 v19; // rdx
  char v20; // cl
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // cl
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  char result; // al
  __int64 v27; // rcx
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  char *v30; // rcx
  _QWORD *j; // rax
  __int64 v32; // rax
  unsigned __int8 v33; // r8
  char v34; // dl
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  _QWORD *v39; // rax
  __int64 v40; // rbp
  char v41; // al
  __int64 v42; // rax
  unsigned __int64 FirstBlockAddress; // r9
  char v44; // al
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int16 v47; // r10
  char v48; // cl
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  char v51; // cl
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax

  if ( *(_BYTE *)(a1 + 418) != 2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 408);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD **)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v6 = (unsigned __int64)(v5 - 2);
    _m_prefetchw((const void *)v6);
    if ( *(_BYTE *)(v6 + 15) == 5 )
      v6 -= 16LL * *(unsigned __int8 *)(v6 + 14);
  }
  else
  {
    v6 = (unsigned __int64)v5 - *(unsigned __int8 *)(a2 + 16);
  }
  if ( *(char *)(v6 + 15) < 0 )
  {
    if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4))) )
    {
      v7 = *(_QWORD *)(v6
                     - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12));
      if ( v7 )
      {
        if ( (*(_BYTE *)(v7 + 38) & 3) != 0 )
          v8 = (((16 * (*(unsigned __int16 *)(v7 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
        else
          LOWORD(v8) = *(_WORD *)(v7 + 36);
        v9 = *(_WORD *)(v7 + 38);
        v10 = *(_QWORD *)(v7 + 8);
        v11 = (unsigned __int16)v8;
        v12 = v6 + 16LL * (unsigned __int16)v8;
        if ( (v9 & 1) != 0 )
        {
          v13 = ((16 * (*(unsigned __int16 *)(v7 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
              - 16LL * *(unsigned __int16 *)(v7 + 36)
              - 16
              + ((v10 + 4095) & 0xFFFFFFFFFFFFF000uLL);
        }
        else if ( (v9 & 2) != 0 )
        {
          v13 = ((v10 + 4095) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        else
        {
          v13 = v10
              + ((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v10 ^ *(unsigned __int16 *)(v10 + 24) ^ (unsigned __int64)*(unsigned __int16 *)(**(_QWORD **)v7 + 24LL));
        }
        v14 = v12 - v13;
        if ( (*(_BYTE *)(v7 + 38) & 3) != 0 )
          v15 = (((16 * (*(unsigned __int16 *)(v7 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
        else
          LOWORD(v15) = *(_WORD *)(v7 + 36);
        if ( (v14 >> 4) / (unsigned __int16)v15 < *(unsigned __int16 *)(v7 + 40) )
        {
          v16 = *(_BYTE *)(v12 + 15);
          if ( (v16 & 0x3F) == 0 )
          {
            *(_BYTE *)(a2 + 16) = 16;
            *(_QWORD *)a2 = v12 + 16;
            *(_WORD *)(a2 + 18) = 0;
            *(_QWORD *)(a2 + 36) = 16LL;
            v25 = 16LL * *(unsigned __int16 *)(v7 + 36) - 16;
            goto LABEL_36;
          }
          if ( (v16 & 0x40) != 0 )
          {
            v17 = v6 + 16 * (v11 + (*(_BYTE *)(v12 + 15) & 0x3F));
          }
          else if ( v16 == 4 )
          {
            v17 = v6 + 16 * (v11 + *(unsigned __int8 *)(v12 + 14));
          }
          else
          {
            v17 = v12;
          }
          LOBYTE(v18) = 1;
          *(_QWORD *)a2 = v17 + 16;
          v19 = 0LL;
          *(_WORD *)(a2 + 18) = 1;
          v20 = *(_BYTE *)(v12 + 15);
          if ( v20 == 5 )
          {
            v21 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            *(_BYTE *)(a2 + 16) = v21;
          }
          else if ( (v20 & 0x40) != 0 )
          {
            v21 = *(unsigned __int16 *)(v6 + 16 * (v11 + (*(_BYTE *)(v12 + 15) & 0x3F)) + 12);
            *(_BYTE *)(a2 + 16) = v21;
          }
          else if ( (v20 & 0x3F) == 0x3F )
          {
            if ( v20 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                LODWORD(v22) = *(_DWORD *)(v12 + 8);
                if ( ((unsigned int)v22 & *(_DWORD *)(a1 + 124)) != 0 )
                  LOWORD(v22) = *(_WORD *)(a1 + 136) ^ v22;
                v18 = *(_WORD *)(a2 + 18);
              }
              else
              {
                LOWORD(v22) = *(_WORD *)(v12 + 8);
              }
            }
            else
            {
              if ( *(_WORD *)(v12 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v12 >> 4)) )
                v22 = 0LL;
              else
                v22 = *(_QWORD *)(v12
                                - ((unsigned __int64)(*(_DWORD *)(v12 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v12 >> 4)) >> 12));
              LOWORD(v22) = *(_WORD *)(v22 + 36);
              v18 = *(_WORD *)(a2 + 18);
            }
            v21 = *(_QWORD *)(v6 + 16 * (v11 + (unsigned __int16)v22));
            *(_BYTE *)(a2 + 16) = v21;
            if ( (v18 & 2) != 0 )
            {
LABEL_31:
              v23 = *(_BYTE *)(v12 + 15);
              if ( v23 == 5 )
              {
                v24 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
              }
              else if ( (v23 & 0x40) != 0 )
              {
                v24 = *(unsigned __int16 *)(v6 + 16 * (v11 + (*(_BYTE *)(v12 + 15) & 0x3F)) + 12);
              }
              else if ( (v23 & 0x3F) == 0x3F )
              {
                if ( v23 >= 0 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v35 = *(_DWORD *)(v12 + 8);
                    if ( (v35 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v24 = *(_QWORD *)(v6 + 16 * (v11 + (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v35)));
                      goto LABEL_35;
                    }
                  }
                  else
                  {
                    LOWORD(v35) = *(_WORD *)(v12 + 8);
                  }
                }
                else
                {
                  if ( !(*(_WORD *)(v12 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v12 >> 4))) )
                    v19 = *(_QWORD *)(v12
                                    - ((unsigned __int64)(*(_DWORD *)(v12 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v12 >> 4)) >> 12));
                  LOWORD(v35) = *(_WORD *)(v19 + 36);
                }
                v24 = *(_QWORD *)(v6 + 16 * (v11 + (unsigned __int16)v35));
              }
              else
              {
                v24 = *(_BYTE *)(v12 + 15) & 0x3F;
              }
LABEL_35:
              v25 = 16LL * *(unsigned __int16 *)(v7 + 36) - v24;
LABEL_36:
              *(_QWORD *)(a2 + 8) = v25;
              *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
              result = 1;
              *(_WORD *)(a2 + 18) |= 0x8000u;
              return result;
            }
          }
          else
          {
            v21 = *(_BYTE *)(v12 + 15) & 0x3F;
            *(_BYTE *)(a2 + 16) = v21;
          }
          *(_QWORD *)(a2 + 36) = v21;
          goto LABEL_31;
        }
        *(_QWORD *)a2 = *(_QWORD *)(v7 + 8);
        *(_WORD *)(a2 + 18) = 8193;
      }
    }
    return 0;
  }
  v27 = *(_QWORD *)(v4 + 24);
  if ( ((*(_BYTE *)(v6 + 10) ^ (unsigned __int8)(*(_BYTE *)(v27 + 138) & (*(_DWORD *)(v27 + 124) >> 20))) & 1) != 0 )
  {
    if ( *(_DWORD *)(v27 + 124) )
    {
      v38 = *(_DWORD *)(v6 + 8);
      if ( (v38 & *(_DWORD *)(v27 + 124)) != 0 )
        LOWORD(v38) = *(_WORD *)(v27 + 136) ^ v38;
    }
    else
    {
      LOWORD(v38) = *(_WORD *)(v6 + 8);
    }
    if ( (unsigned __int16)v38 > 4u )
    {
      v39 = *(_QWORD **)a2;
      if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) == -253701952 )
      {
        v40 = *v39;
        if ( (unsigned __int8)RtlpIsLFHZoneAllocation(v4, *v39) )
        {
          v41 = *(_BYTE *)(v6 + 15);
          if ( (v41 & 0x40) != 0 )
            v42 = v6 + 16LL * (*(_BYTE *)(v6 + 15) & 0x3F);
          else
            v42 = v41 == 4 ? v6 + 16LL * *(unsigned __int8 *)(v6 + 14) : v6;
          if ( *(_QWORD *)(v40 + 8) == v42 + 16 )
          {
            FirstBlockAddress = RtlpGetFirstBlockAddress(v40);
            v44 = *(_BYTE *)(FirstBlockAddress + 15);
            if ( (v44 & 0x40) != 0 )
            {
              v45 = FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F);
            }
            else if ( v44 == 4 )
            {
              v45 = FirstBlockAddress + 16LL * *(unsigned __int8 *)(FirstBlockAddress + 14);
            }
            else
            {
              v45 = FirstBlockAddress;
            }
            v46 = 0LL;
            *(_QWORD *)a2 = v45 + 16;
            if ( (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) == 0 )
            {
              *(_WORD *)(a2 + 18) = 0;
              *(_BYTE *)(a2 + 16) = 16;
              *(_QWORD *)(a2 + 36) = 16LL;
              v53 = 16LL * *(unsigned __int16 *)(v40 + 36) - 16;
              goto LABEL_116;
            }
            LOBYTE(v47) = 1;
            *(_WORD *)(a2 + 18) = 1;
            v48 = *(_BYTE *)(FirstBlockAddress + 15);
            if ( v48 == 5 )
            {
              v49 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
              *(_BYTE *)(a2 + 16) = v49;
            }
            else if ( (v48 & 0x40) != 0 )
            {
              v49 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) + 12);
              *(_BYTE *)(a2 + 16) = v49;
            }
            else if ( (v48 & 0x3F) == 0x3F )
            {
              if ( v48 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  LODWORD(v50) = *(_DWORD *)(FirstBlockAddress + 8);
                  if ( ((unsigned int)v50 & *(_DWORD *)(a1 + 124)) != 0 )
                    LOWORD(v50) = *(_WORD *)(a1 + 136) ^ v50;
                  v47 = *(_WORD *)(a2 + 18);
                }
                else
                {
                  LOWORD(v50) = *(_WORD *)(FirstBlockAddress + 8);
                }
              }
              else
              {
                if ( *(_WORD *)(FirstBlockAddress + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (FirstBlockAddress >> 4)) )
                  v50 = 0LL;
                else
                  v50 = *(_QWORD *)(FirstBlockAddress
                                  - ((unsigned __int64)(*(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                LOWORD(v50) = *(_WORD *)(v50 + 36);
                v47 = *(_WORD *)(a2 + 18);
              }
              v49 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)v50);
              *(_BYTE *)(a2 + 16) = v49;
              if ( (v47 & 2) != 0 )
              {
LABEL_111:
                v51 = *(_BYTE *)(FirstBlockAddress + 15);
                if ( v51 == 5 )
                {
                  v52 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
                }
                else if ( (v51 & 0x40) != 0 )
                {
                  v52 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) + 12);
                }
                else if ( (v51 & 0x3F) == 0x3F )
                {
                  if ( v51 >= 0 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v54 = *(_DWORD *)(FirstBlockAddress + 8);
                      if ( (v54 & *(_DWORD *)(a1 + 124)) != 0 )
                      {
                        v52 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v54));
                        goto LABEL_115;
                      }
                    }
                    else
                    {
                      LOWORD(v54) = *(_WORD *)(FirstBlockAddress + 8);
                    }
                  }
                  else
                  {
                    if ( !(*(_WORD *)(FirstBlockAddress + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (FirstBlockAddress >> 4))) )
                      v46 = *(_QWORD *)(FirstBlockAddress
                                      - ((unsigned __int64)(*(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                    LOWORD(v54) = *(_WORD *)(v46 + 36);
                  }
                  v52 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)v54);
                }
                else
                {
                  v52 = *(_BYTE *)(FirstBlockAddress + 15) & 0x3F;
                }
LABEL_115:
                v53 = 16LL * *(unsigned __int16 *)(v40 + 36) - v52;
LABEL_116:
                *(_QWORD *)(a2 + 8) = v53;
                *(_BYTE *)(a2 + 17) = *(_BYTE *)(FirstBlockAddress + 14);
                result = 1;
                *(_WORD *)(a2 + 18) |= 0x8000u;
                return result;
              }
            }
            else
            {
              v49 = *(_BYTE *)(FirstBlockAddress + 15) & 0x3F;
              *(_BYTE *)(a2 + 16) = v49;
            }
            *(_QWORD *)(a2 + 36) = v49;
            goto LABEL_111;
          }
        }
      }
    }
  }
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v30 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v30 )
      {
        if ( v30 )
          *(_QWORD *)v30 = v4;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v4);
  for ( j = *(_QWORD **)(v4 + 8); j != (_QWORD *)(v4 + 8); j = (_QWORD *)*j )
  {
    if ( v6 >= (unsigned __int64)j && v6 < (unsigned __int64)(j + 126) )
    {
      RtlReleaseSRWLockExclusive(v4);
      goto LABEL_70;
    }
  }
  RtlReleaseSRWLockExclusive(v4);
  if ( v4 != *(_QWORD *)a2 )
  {
    v32 = *(_QWORD *)(v4 + 24);
    v33 = *(_BYTE *)(v6 + 10);
    v34 = *(_BYTE *)(v32 + 138);
    if ( ((v33 ^ (unsigned __int8)(v34 & (*(_DWORD *)(v32 + 124) >> 20))) & 1) == 0
      || ((v33 ^ (unsigned __int8)(v34 & (*(_DWORD *)(v32 + 124) >> 17))) & 8) == 0 )
    {
      return 0;
    }
  }
LABEL_70:
  *(_WORD *)(a2 + 18) = 8193;
  *(_BYTE *)(a2 + 16) = 16;
  *(_QWORD *)(a2 + 36) = 16LL;
  v36 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v36 + 124) )
  {
    v37 = *(_DWORD *)(v6 + 8);
    if ( (v37 & *(_DWORD *)(v36 + 124)) != 0 )
      LOWORD(v37) = *(_WORD *)(v36 + 136) ^ v37;
  }
  else
  {
    LOWORD(v37) = *(_WORD *)(v6 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * (unsigned __int16)v37 - 16;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v6 + 14);
  return 1;
}
