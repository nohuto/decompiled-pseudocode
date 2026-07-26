/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x14018C2F4
 * Callers:
 *     ndisGetProcessorInfo @ 0x14018C814 (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  ULONG v1; // r12d
  int v2; // r13d
  ULONG v3; // ebx
  __int64 v4; // rax
  void *v5; // rsi
  unsigned int v6; // edi
  _DWORD *v7; // rax
  void *v8; // rbx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v9; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v10; // r14
  ULONG v11; // edx
  __m128i *v12; // rsi
  unsigned int v13; // edi
  unsigned int v14; // r15d
  unsigned __int16 v15; // r14
  __m128i v16; // xmm0
  unsigned __int64 v17; // rbx
  bool v18; // zf
  unsigned __int8 j; // al
  char v20; // al
  __m128i v21; // xmm0
  unsigned __int64 v22; // rbx
  unsigned __int8 Number; // al
  __m128i v24; // xmm0
  unsigned int v25; // r15d
  ULONG v26; // r12d
  unsigned __int64 v27; // r14
  unsigned __int8 v28; // al
  ULONG v29; // ebx
  __int64 ProcessorIndexFromNumber; // rdx
  struct _NDIS_PROCESSOR_INFO_EX *v31; // rax
  char v32; // al
  __int64 v33; // rax
  ULONG v34; // r15d
  _DWORD *v35; // r8
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v36; // rbx
  ULONG v37; // r12d
  WORD v38; // r14
  __m128i v39; // xmm0
  unsigned __int64 v40; // rsi
  bool v41; // zf
  unsigned __int8 k; // al
  ULONG v43; // eax
  __int64 v44; // rcx
  ULONG v45; // edx
  __int64 Size; // rax
  unsigned int v47; // ecx
  char v49; // [rsp+20h] [rbp-48h]
  char v50; // [rsp+24h] [rbp-44h]
  unsigned int v51; // [rsp+28h] [rbp-40h]
  ULONG v52; // [rsp+2Ch] [rbp-3Ch]
  NTSTATUS v53; // [rsp+30h] [rbp-38h]
  __int64 Pool2; // [rsp+38h] [rbp-30h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v55; // [rsp+40h] [rbp-28h]
  _DWORD *v56; // [rsp+48h] [rbp-20h]
  _DWORD *v57; // [rsp+50h] [rbp-18h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+48h] BYREF
  int v59; // [rsp+B4h] [rbp+4Ch]
  ULONG Length; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int i; // [rsp+C0h] [rbp+58h]
  ULONG v62; // [rsp+C8h] [rbp+60h]

  v59 = HIDWORD(a1);
  v1 = 0;
  v56 = ndisSystemProcessorInfo;
  v2 = 0;
  Length = 0;
  v3 = 0;
  v52 = 0;
  v49 = 1;
  v50 = 1;
  ProcNumber = 0;
  v51 = 0;
  for ( i = 0; v3 < ndisNumberOfActiveProcessorsAtBoot; ++v3 )
    KeGetProcessorNumberFromIndex(v3, &ndisCpuInfo[v3].ProcNum);
  while ( v3 < ndisMaxNumberOfProcessors )
  {
    v4 = v3++;
    ndisCpuInfo[v4].ProcNum = (PROCESSOR_NUMBER)0xFFFFFF;
  }
  Pool2 = ExAllocatePool2(64LL, 4LL * ndisMaxNumberOfProcessors, 538985550LL);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    v7 = (_DWORD *)ExAllocatePool2(66LL, 4LL * ndisMaxNumberOfProcessors, 538985550LL);
    v57 = v7;
    v8 = v7;
    if ( v7
      && (memset(v7, 255, 4LL * ndisMaxNumberOfProcessors),
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v9 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(66LL, Length, 538985550LL),
          v55 = v9,
          (v10 = v9) != 0LL) )
    {
      v53 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v9, &Length);
      v6 = v53;
      if ( v53 >= 0 )
      {
        v11 = 0;
        v12 = (__m128i *)v10;
        v62 = 0;
        if ( Length )
        {
          v13 = 0;
          do
          {
            if ( v12->m128i_i32[0] )
            {
              if ( v12->m128i_i32[0] == 1 )
              {
                v21 = v12[2];
                ProcNumber.Reserved = 0;
                v22 = v21.m128i_i64[0];
                ProcNumber.Group = _mm_extract_epi16(v21, 4);
                Number = 0;
                ProcNumber.Number = 0;
                if ( v21.m128i_i64[0] )
                {
                  do
                  {
                    if ( (v22 & 1) != 0 )
                    {
                      ndisCpuInfo[KeGetProcessorIndexFromNumber(&ProcNumber)].NodeId = v12->m128i_u16[4];
                      Number = ProcNumber.Number;
                    }
                    ++Number;
                    v22 >>= 1;
                    ProcNumber.Number = Number;
                  }
                  while ( v22 );
                  v11 = v62;
                }
              }
              else if ( v12->m128i_i32[0] == 3 )
              {
                v14 = 0;
                v15 = 0;
                if ( v12[1].m128i_i16[7] )
                {
                  do
                  {
                    v16 = v12[v15 + 2];
                    ProcNumber.Reserved = 0;
                    v17 = v16.m128i_i64[0];
                    v18 = v16.m128i_i64[0] == 0;
                    ProcNumber.Group = _mm_extract_epi16(v16, 4);
                    for ( j = 0; ; ++j )
                    {
                      ProcNumber.Number = j;
                      if ( v18 )
                        break;
                      if ( (v17 & 1) != 0 )
                      {
                        ++v14;
                        ndisCpuInfo[KeGetProcessorIndexFromNumber(&ProcNumber)].SocketId = v1;
                        j = ProcNumber.Number;
                      }
                      v17 >>= 1;
                      v18 = v17 == 0;
                    }
                    ++v15;
                  }
                  while ( v15 < (unsigned int)v12[1].m128i_i16[7] );
                  v11 = v62;
                  v13 = i;
                }
                if ( v1 )
                {
                  v20 = v50;
                  if ( v14 != v51 )
                    v20 = 0;
                  v50 = v20;
                }
                else
                {
                  v51 = v14;
                }
                v52 = ++v1;
              }
            }
            else
            {
              v24 = v12[2];
              v25 = 0;
              ProcNumber.Reserved = 0;
              v26 = 0;
              v27 = v24.m128i_i64[0];
              ProcNumber.Group = _mm_extract_epi16(v24, 4);
              v28 = 0;
              ProcNumber.Number = 0;
              if ( v24.m128i_i64[0] )
              {
                do
                {
                  if ( (v27 & 1) != 0 )
                  {
                    ++v25;
                    v29 = v26++;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                    v31 = ndisCpuInfo;
                    *(_DWORD *)(Pool2 + 4 * ProcessorIndexFromNumber) = v2;
                    v31[ProcessorIndexFromNumber].HyperThreadId = v29;
                    v28 = ProcNumber.Number;
                  }
                  ++v28;
                  v27 >>= 1;
                  ProcNumber.Number = v28;
                }
                while ( v27 );
                v11 = v62;
                v13 = i;
              }
              if ( v2 )
              {
                v32 = v49;
                if ( v25 != v13 )
                  v32 = 0;
                v49 = v32;
              }
              else
              {
                v13 = v25;
                i = v25;
              }
              v1 = v52;
              ++v2;
            }
            v33 = v12->m128i_u32[1];
            v11 += v33;
            v12 = (__m128i *)((char *)v12 + v33);
            v62 = v11;
          }
          while ( v11 < Length );
          v6 = v53;
          v10 = v55;
        }
        v34 = 0;
        v35 = v56;
        v36 = v10;
        v62 = 0;
        v56[3] = v1;
        v56[4] = v2;
        if ( Length )
        {
          do
          {
            if ( v36->Relationship == RelationProcessorPackage )
            {
              v37 = 0;
              v38 = 0;
              if ( v36->Processor.GroupCount )
              {
                do
                {
                  v39 = *((__m128i *)&v36->Group.GroupInfo[0].MaximumProcessorCount + v38);
                  ProcNumber.Reserved = 0;
                  v40 = v39.m128i_i64[0];
                  v41 = v39.m128i_i64[0] == 0;
                  ProcNumber.Group = _mm_extract_epi16(v39, 4);
                  for ( k = 0; ; ++k )
                  {
                    ProcNumber.Number = k;
                    if ( v41 )
                      break;
                    if ( (v40 & 1) != 0 )
                    {
                      v43 = KeGetProcessorIndexFromNumber(&ProcNumber);
                      v44 = *(unsigned int *)(Pool2 + 4LL * v43);
                      v45 = v57[v44];
                      if ( v45 == -1 )
                      {
                        v45 = v37++;
                        v57[v44] = v45;
                      }
                      ndisCpuInfo[v43].CoreId = v45;
                      k = ProcNumber.Number;
                    }
                    v40 >>= 1;
                    v41 = v40 == 0;
                  }
                  ++v38;
                }
                while ( v38 < v36->Processor.GroupCount );
                v34 = v62;
              }
            }
            Size = v36->Size;
            v34 += Size;
            v36 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v36 + Size);
            v62 = v34;
          }
          while ( v34 < Length );
          v6 = v53;
          v10 = v55;
          v35 = v56;
        }
        if ( v49 )
        {
          v47 = i;
          v35[6] = i;
          if ( v50 )
          {
            if ( v47 )
              v35[5] = v51 / v47;
          }
        }
        v8 = v57;
        v5 = (void *)Pool2;
      }
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      v6 = -1073741670;
    }
    ExFreePoolWithTag(v5, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
