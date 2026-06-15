/*
 * XREFs of ?IdentifyCpuSets@@YAJPEAU_CpuSet@@PEAUCpuGroupMask@@PEAK@Z @ 0x1400685DC
 * Callers:
 *     ?AddingResource@CpuManager@@EEAAJXZ @ 0x1400680A0 (-AddingResource@CpuManager@@EEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

NTSTATUS __fastcall IdentifyCpuSets(struct _CpuSet *a1, struct CpuGroupMask *a2, unsigned int *a3)
{
  __int64 v6; // rbx
  _OWORD *v7; // rax
  struct _CpuSet *v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  NTSTATUS result; // eax
  DWORD v27; // ebx
  HANDLE ProcessHeap; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v29; // rax
  unsigned __int16 *v30; // rbx
  BOOL LogicalProcessorInformation; // r12d
  int v32; // ecx
  char v33; // r9
  __int64 v34; // rdx
  __int128 v35; // xmm1
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // r10
  int v39; // ecx
  __int64 i; // r8
  HANDLE v41; // rax
  __int64 v42; // rcx
  int v44; // edx
  unsigned int v45; // edx
  DWORD ReturnedLength[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v47; // [rsp+30h] [rbp-D0h]
  _BYTE v48[272]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE SystemInformation[272]; // [rsp+150h] [rbp+50h] BYREF

  ReturnedLength[0] = 0;
  memset_0(v48, 0, 0x108uLL);
  v6 = 2LL;
  v7 = v48;
  v8 = a1;
  v9 = 2LL;
  do
  {
    v10 = v7[1];
    *(_OWORD *)v8 = *v7;
    v11 = v7[2];
    *((_OWORD *)v8 + 1) = v10;
    v12 = v7[3];
    *((_OWORD *)v8 + 2) = v11;
    v13 = v7[4];
    *((_OWORD *)v8 + 3) = v12;
    v14 = v7[5];
    *((_OWORD *)v8 + 4) = v13;
    v15 = v7[6];
    *((_OWORD *)v8 + 5) = v14;
    v16 = v7[7];
    v7 += 8;
    *((_OWORD *)v8 + 6) = v15;
    v8 = (struct _CpuSet *)((char *)v8 + 128);
    *((_OWORD *)v8 - 1) = v16;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)v8 = *(_QWORD *)v7;
  *(_OWORD *)a2 = 0LL;
  *a3 = -1;
  memset_0(v48, 0, 0x108uLL);
  v17 = SystemInformation;
  v18 = v48;
  do
  {
    v19 = v18[1];
    *v17 = *v18;
    v20 = v18[2];
    v17[1] = v19;
    v21 = v18[3];
    v17[2] = v20;
    v22 = v18[4];
    v17[3] = v21;
    v23 = v18[5];
    v17[4] = v22;
    v24 = v18[6];
    v17[5] = v23;
    v25 = v18[7];
    v18 += 8;
    v17[6] = v24;
    v17 += 8;
    *(v17 - 1) = v25;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)v17 = *(_QWORD *)v18;
  result = NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0x108u, 0LL);
  if ( result >= 0 )
  {
    ReturnedLength[0] = 0;
    GetLogicalProcessorInformationEx(RelationGroup, 0LL, ReturnedLength);
    v27 = ReturnedLength[0];
    ProcessHeap = GetProcessHeap();
    v29 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)HeapAlloc(ProcessHeap, 8u, v27);
    v30 = (unsigned __int16 *)v29;
    if ( v29 )
    {
      LogicalProcessorInformation = GetLogicalProcessorInformationEx(RelationGroup, v29, ReturnedLength);
      if ( LogicalProcessorInformation )
      {
        v32 = v30[5];
        v33 = 0;
        v34 = 0LL;
        *(_DWORD *)a1 = v32;
        v35 = 0LL;
        v47 = 0LL;
        if ( !v32 )
          goto LABEL_23;
        v36 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
        do
        {
          v37 = *(_QWORD *)&v30[24 * v34 + 36];
          *((_QWORD *)a1 + v34 + 1) = v37;
          if ( !v33 )
          {
            v38 = qword_1400C4608;
            v39 = 0;
            for ( i = 1LL; (i & v37) != 0; i = 1LL << v39 )
            {
              if ( !v36 )
              {
                *((_QWORD *)&v47 + 1) = i;
                v36 = i;
                LOWORD(v47) = v34;
                v35 = v47;
              }
              if ( v38 )
              {
                if ( (_DWORD)v34 == g_UserConfiguredAudioReservedCpu && (v38 & i) != 0 )
                {
                  *((_QWORD *)a2 + 1) = i;
LABEL_20:
                  v33 = 1;
                  *(_WORD *)a2 = v34;
                  break;
                }
              }
              else
              {
                *((_QWORD *)a2 + 1) = i;
                if ( (i & *(_QWORD *)&SystemInformation[8 * v34 + 8]) == 0 )
                  goto LABEL_20;
                v38 = qword_1400C4608;
              }
              ++v39;
              v37 &= ~i;
            }
          }
          v34 = (unsigned int)(v34 + 1);
        }
        while ( (unsigned int)v34 < *(_DWORD *)a1 );
        if ( !v33 )
LABEL_23:
          *(_OWORD *)a2 = v35;
        *((_QWORD *)a1 + *(unsigned __int16 *)a2 + 1) &= ~*((_QWORD *)a2 + 1);
      }
      v41 = GetProcessHeap();
      HeapFree(v41, 0, v30);
      if ( LogicalProcessorInformation && (v42 = *((_QWORD *)a2 + 1)) != 0 )
      {
        if ( !_BitScanForward((unsigned int *)&v44, v42) )
        {
          _BitScanForward(&v45, HIDWORD(v42));
          v44 = v45 + 32;
        }
        *a3 = v44 | (*(unsigned __int16 *)a2 << 16) | 0x100;
        return 0;
      }
      else
      {
        return -1073741823;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
