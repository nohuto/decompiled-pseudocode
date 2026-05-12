/*
 * XREFs of StorQueryMFNDChildPFList @ 0x14018F2D0
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryChildPFList @ 0x1400C52FC (StorLogMFNDQueryChildPFList.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFList(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rbx
  size_t v6; // r12
  __int64 v7; // rsi
  unsigned __int16 v8; // r15
  __int64 v9; // rax
  int v10; // r14d
  unsigned int v11; // r14d
  __int64 Pool; // rax
  _WORD *v13; // rdi
  int v14; // r14d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  _DWORD *v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  char v24; // cl
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  _DWORD v30[15]; // [rsp+60h] [rbp-19h] BYREF
  int v31; // [rsp+9Ch] [rbp+23h]
  int v32; // [rsp+E8h] [rbp+6Fh] BYREF
  _QWORD *v33; // [rsp+F0h] [rbp+77h]
  int v34; // [rsp+F8h] [rbp+7Fh]

  v33 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(v30, 0, 0x40uLL);
  v7 = 0LL;
  v8 = 0;
  v34 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported((__int64)a1) )
  {
    v32 = -1073741637;
    goto LABEL_48;
  }
  if ( v4 && v6 >= 8 )
  {
    if ( *(_DWORD *)(a1[770] + 36) != 1 )
    {
      v32 = -1073741436;
      goto LABEL_48;
    }
    v9 = a1[769];
    if ( v9 )
      v10 = *(unsigned __int16 *)(v9 + 8) - 1;
    else
      v10 = 255;
    v11 = (v10 << 8) + 8;
    Pool = RaidAllocatePool(64LL, v11, 1179476306LL, a1[1]);
    v13 = (_WORD *)Pool;
    if ( !Pool )
    {
      v32 = -1073741670;
      goto LABEL_48;
    }
    LOBYTE(v31) = 2;
    v31 |= 0xFFFF00u;
    v30[0] = v30[0] & 0xFFFFFF00 | 0xD2;
    v30[10] = v11 >> 2;
    v32 = StorSendMFNDCommand((_DWORD)a1, Pool, 0, v11, (__int64)v30);
    v14 = v32;
    if ( v32 >= 0 )
    {
      v15 = 200 * (unsigned __int16)*v13 + 16;
      memset_0(v4, 0, v6);
      *(_WORD *)v4 = 1;
      if ( v6 >= v15 )
      {
        LOWORD(v16) = *v13;
        v17 = 0;
        if ( *v13 )
        {
          do
          {
            v18 = 50LL * v17;
            v19 = (unsigned __int64)v17 << 8;
            LOWORD(v4[v18 + 4]) = 1;
            v20 = &v4[v18];
            v4[v18 + 5] = 200;
            LOWORD(v4[v18 + 6]) = *(_WORD *)((char *)v13 + v19 + 8);
            *(_OWORD *)((char *)&v4[v18 + 6] + 2) = *(_OWORD *)((char *)v13 + v19 + 10);
            *(_QWORD *)((char *)&v4[v18 + 10] + 2) = *(_QWORD *)((char *)v13 + v19 + 26);
            HIWORD(v4[v18 + 12]) = *(_WORD *)((char *)v13 + v19 + 34);
            if ( (*((_BYTE *)v13 + v19 + 36) & 1) != 0 )
              v20[13] |= 1u;
            if ( (*((_BYTE *)v13 + v19 + 36) & 2) != 0 )
              v20[13] |= 2u;
            if ( (*((_BYTE *)v13 + v19 + 119) & 1) != 0 )
              v4[v18 + 14] |= 1u;
            if ( (*((_BYTE *)v13 + v19 + 119) & 2) != 0 )
              v4[50 * v17 + 14] |= 2u;
            if ( (*((_BYTE *)v13 + v19 + 119) & 4) != 0 )
              v4[50 * v17 + 14] |= 4u;
            if ( (v13[128 * (unsigned __int64)v17 + 59] & 0x800) != 0 )
              v4[50 * v17 + 14] |= 8u;
            v4[50 * v17 + 15] = LOBYTE(v13[128 * (unsigned __int64)v17 + 21]);
            v4[50 * v17 + 17] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 22];
            v4[50 * v17 + 18] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 24];
            v4[50 * v17 + 19] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 26];
            v4[50 * v17 + 20] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 28];
            v4[50 * v17 + 21] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 30];
            v4[50 * v17 + 22] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 32];
            v4[50 * v17 + 23] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 34];
            v4[50 * v17 + 24] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 36];
            v21 = 50LL * v17;
            v22 = (unsigned __int64)v17 << 8;
            if ( *((_BYTE *)v13 + v22 + 43) )
            {
              if ( *((_BYTE *)v13 + v22 + 43) == 1 )
              {
                LOBYTE(v4[v21 + 16]) = 2;
              }
              else if ( *((_BYTE *)v13 + v22 + 43) == 2 )
              {
                LOBYTE(v4[v21 + 16]) = 3;
              }
              else
              {
                LOBYTE(v4[v21 + 16]) = 0;
              }
            }
            else
            {
              LOBYTE(v4[v21 + 16]) = 1;
            }
            v23 = (unsigned __int64)v17 << 8;
            v4[50 * v17 + 25] = *(unsigned __int16 *)((char *)v13 + v23 + 38);
            v4[50 * v17 + 26] = *(unsigned __int16 *)((char *)v13 + v23 + 40);
            if ( (v4[50 * v17 + 13] & 2) != 0 )
            {
              LOWORD(v4[50 * v17 + 27]) = 1;
              HIWORD(v4[50 * v17 + 27]) = 56;
              v24 = v13[128 * (unsigned __int64)v17 + 68];
              if ( v24 )
              {
                v25 = 50LL * v17;
                if ( v24 == 1 )
                  v4[v25 + 28] = 2;
                else
                  v4[v25 + 28] = (LOBYTE(v13[128 * (unsigned __int64)v17 + 68]) != 2) + 3;
              }
              else
              {
                v4[50 * v17 + 28] = 1;
              }
              LOBYTE(v4[50 * v17 + 29]) = HIBYTE(v13[128 * (unsigned __int64)v17 + 68]);
              BYTE1(v4[50 * v17 + 29]) = v13[128 * (unsigned __int64)v17 + 69];
              v4[50 * v17 + 30] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 70];
              v4[50 * v17 + 31] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 72];
              v4[50 * v17 + 32] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 74];
              v4[50 * v17 + 33] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 76];
              v4[50 * v17 + 34] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 78];
              v4[50 * v17 + 35] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 80];
              v4[50 * v17 + 36] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 82];
              v4[50 * v17 + 37] = *(_DWORD *)&v13[128 * (unsigned __int64)v17 + 84];
            }
            *(_OWORD *)&v4[50 * v17 + 41] = *(_OWORD *)&v13[128 * (unsigned __int64)v17 + 60];
            *(_QWORD *)&v4[50 * v17 + 46] = *(_QWORD *)&v13[128 * (unsigned __int64)v17 + 40];
            *(_QWORD *)&v4[50 * v17 + 48] = *(_QWORD *)&v13[128 * (unsigned __int64)v17 + 44];
            v26 = (unsigned __int64)v17 << 8;
            *(_QWORD *)&v4[50 * v17 + 50] = *(_QWORD *)((char *)v13 + v26 + 96);
            v27 = v17++;
            *(_QWORD *)&v4[50 * v27 + 52] = *(_QWORD *)((char *)v13 + v26 + 104);
            v16 = (unsigned __int16)*v13;
          }
          while ( v17 < v16 );
        }
        v28 = v33;
        v4[2] = (unsigned __int16)v16;
        *v28 = v15;
      }
      else
      {
        v14 = -2147483643;
        v32 = -2147483643;
        *v33 = 8LL;
      }
      v4[1] = v15;
    }
    ExFreePoolWithTag(v13, 0x464D6152u);
    v8 = v34;
  }
  else
  {
    v14 = -1073741811;
    v32 = -1073741811;
  }
  if ( v14 >= 0 )
  {
LABEL_49:
    v7 = (__int64)v4;
    goto LABEL_50;
  }
LABEL_48:
  StorMapMFNDErrorToNtStatus(v8, &v32);
  v14 = v32;
  if ( v32 >= 0 )
    goto LABEL_49;
LABEL_50:
  StorLogMFNDQueryChildPFList((__int64)a1, v7, v8, v14);
  return (unsigned int)v14;
}
