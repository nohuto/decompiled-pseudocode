/*
 * XREFs of MmManagePartitionMemoryInformation @ 0x1408F7014
 * Callers:
 *     DifUpdatePluginState @ 0x140617534 (DifUpdatePluginState.c)
 *     DifGetAvailableSystemPages @ 0x140617CB4 (DifGetAvailableSystemPages.c)
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 *     SmCreatePartition @ 0x140A34664 (SmCreatePartition.c)
 * Callees:
 *     MiQueryMemoryListInformation @ 0x140262630 (MiQueryMemoryListInformation.c)
 *     MiGetChannelInformation @ 0x140264320 (MiGetChannelInformation.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiGetNodeHugeRangeCounts @ 0x1404F7484 (MiGetNodeHugeRangeCounts.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmManagePartitionMemoryInformation(ULONG **a1, __int64 a2)
{
  ULONG *v2; // r13
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // esi
  unsigned __int64 v8; // r12
  int v9; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  char *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  _QWORD *v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v30; // rax
  ULONG *v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  int i; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v35; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v39[5]; // [rsp+50h] [rbp-B0h] BYREF
  char Src[64]; // [rsp+78h] [rbp-88h] BYREF
  char v41[72]; // [rsp+B8h] [rbp-48h] BYREF
  char v42[24]; // [rsp+100h] [rbp+0h] BYREF
  char v43; // [rsp+118h] [rbp+18h] BYREF

  v2 = *a1;
  v38 = 0LL;
  memset_0(v39, 0, 0xB0uLL);
  if ( (*(_DWORD *)a2 & 0xFFFFFFFE) == 0 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = (unsigned __int16)KeNumberNodes;
    if ( (v4 == -1 || v4 < (unsigned __int16)KeNumberNodes) && *(_DWORD *)(a2 + 8) == -1 )
    {
      v6 = 0;
      v7 = 0;
      *(_QWORD *)(a2 + 224) = 0LL;
      for ( i = 0; ; v6 = i )
      {
        v8 = 0LL;
        v9 = v6;
        if ( v2 != &MiSystemPartition || (*(_DWORD *)a2 & 1) != 0 )
        {
          v10 = *(_DWORD *)(a2 + 4);
          if ( v10 != -1 )
            goto LABEL_40;
        }
        else
        {
          v30 = *(unsigned int *)(a2 + 4);
          if ( (_DWORD)v30 != -1 )
          {
            v8 = *((_QWORD *)&MiState + v30 + 5496);
            v10 = *(_DWORD *)(a2 + 4);
LABEL_40:
            *(_DWORD *)(a2 + 12) = 0;
            v5 = v10 + 1;
            v7 = v10;
LABEL_41:
            i = 1;
LABEL_42:
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 32) = 0LL;
            *(_QWORD *)(a2 + 40) = 0LL;
            *(_QWORD *)(a2 + 216) = 0LL;
            memset_0((void *)(a2 + 88), 0, 0x40uLL);
            memset_0((void *)(a2 + 152), 0, 0x40uLL);
            goto LABEL_19;
          }
          if ( v7 < v5 )
          {
            v31 = &MiState + 2 * v7 + 10992;
            v32 = v5 - v7;
            do
            {
              v8 += *(_QWORD *)v31;
              v31 += 2;
              --v32;
            }
            while ( v32 );
          }
        }
        *(_DWORD *)(a2 + 12) = (unsigned __int16)KeNumberNodes;
        if ( (*(_DWORD *)a2 & 1) != 0 )
          goto LABEL_41;
        *(_QWORD *)(a2 + 16) = *((_QWORD *)v2 + 2344);
        v11 = *((_QWORD *)v2 + 2416);
        if ( v11 < v8 )
          goto LABEL_46;
        *(_QWORD *)(a2 + 24) = v11 - v8;
        v12 = *((_QWORD *)v2 + 2451);
        if ( v12 < v8 )
          goto LABEL_46;
        *(_QWORD *)(a2 + 32) = v12 - v8;
        v13 = *((_QWORD *)v2 + 2104);
        if ( v13 < v8 )
          goto LABEL_46;
        *(_QWORD *)(a2 + 40) = v13 - v8;
        MiQueryMemoryListInformation(v2, v39);
        memmove((void *)(a2 + 88), Src, 0x40uLL);
        memmove((void *)(a2 + 152), v41, 0x40uLL);
        v14 = *((_QWORD *)v2 + 2105);
        if ( v14 < v8 )
          goto LABEL_46;
        *(_QWORD *)(a2 + 216) = v14 - v8;
        v15 = *(_QWORD *)(a2 + 32);
        if ( v15 > *(_QWORD *)(a2 + 216) )
          *(_QWORD *)(a2 + 216) = v15;
        v16 = *(_QWORD *)(a2 + 24);
        if ( *(_QWORD *)(a2 + 40) < v16 )
          *(_QWORD *)(a2 + 40) = v16;
        if ( v16 > v15 )
          *(_QWORD *)(a2 + 24) = v15;
        i = v9;
        if ( v9 )
          goto LABEL_42;
LABEL_19:
        *(_QWORD *)(a2 + 64) = 0LL;
        v17 = 0LL;
        *(_QWORD *)(a2 + 72) = 0LL;
        v18 = v7;
        *(_QWORD *)(a2 + 80) = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
        v19 = 0LL;
        v20 = *((_QWORD *)v2 + 2) + 57216LL * v7;
        if ( v7 < v5 )
        {
          do
          {
            if ( (*(_DWORD *)a2 & 1) != 0 )
            {
              v35 = 0LL;
              v36 = 0LL;
              v37 = 0LL;
              MiGetNodeHugeRangeCounts(v20, &v37, &v35, &v36);
              v33 = v35;
              *(_QWORD *)(a2 + 72) += v36 << 18;
              *(_QWORD *)(a2 + 48) += v37 << 18;
              *(_QWORD *)(a2 + 64) += v33 << 18;
              *(_QWORD *)(a2 + 80) = 0LL;
            }
            else
            {
              MiGetChannelInformation((__int64)v2, v18, (__int64)v42, &v38);
              if ( (unsigned __int8)(v38 / 0x28) )
              {
                v21 = *(_QWORD *)(a2 + 64);
                v22 = &v43;
                v23 = *(_QWORD *)(a2 + 72);
                v24 = *(_QWORD *)(a2 + 80);
                v25 = (unsigned __int8)(v38 / 0x28);
                do
                {
                  v21 += *((_QWORD *)v22 - 1);
                  v23 += *(_QWORD *)v22;
                  v24 += *((_QWORD *)v22 + 1);
                  v22 += 40;
                  --v25;
                }
                while ( v25 );
                *(_QWORD *)(a2 + 64) = v21;
                *(_QWORD *)(a2 + 72) = v23;
                *(_QWORD *)(a2 + 80) = v24;
              }
              *(_QWORD *)(a2 + 48) += *(_QWORD *)(v20 + 14976);
            }
            v19 = *(_QWORD *)(a2 + 48);
            ++v18;
            v20 += 57216LL;
          }
          while ( v18 < v5 );
          v17 = *(_QWORD *)(a2 + 80);
        }
        if ( v2 == &MiSystemPartition )
        {
          if ( v19 < v8 )
            goto LABEL_46;
          *(_QWORD *)(a2 + 48) = v19 - v8;
        }
        if ( *(_DWORD *)(a2 + 4) == -1 && (*(_DWORD *)a2 & 1) == 0 )
        {
          *(_QWORD *)(a2 + 80) = 0LL;
          v26 = (_QWORD *)(a2 + 88);
          v17 = 0LL;
          v27 = 8LL;
          do
          {
            v17 += *v26++;
            *(_QWORD *)(a2 + 80) = v17;
            --v27;
          }
          while ( v27 );
        }
        v28 = *(_QWORD *)(a2 + 72) + *(_QWORD *)(a2 + 64) + v17;
        *(_QWORD *)(a2 + 56) = v28;
        if ( v28 <= *(_QWORD *)(a2 + 48) )
        {
          *(_DWORD *)(a2 + 232) = *(unsigned __int16 *)v2;
          return 0LL;
        }
LABEL_46:
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiOneMillisecond);
      }
    }
  }
  return 3221225485LL;
}
