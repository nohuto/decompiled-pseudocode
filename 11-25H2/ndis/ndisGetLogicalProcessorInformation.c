/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x140197314
 * Callers:
 *     ndisGetProcessorInfo @ 0x14019784C (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  ULONG v1; // r12d
  int v2; // r13d
  ULONG v3; // ebx
  __int64 v4; // rax
  unsigned __int8 *p_Reserved; // rdx
  void *v6; // rsi
  unsigned int v7; // edi
  _DWORD *v8; // rax
  void *v9; // rbx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v10; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v11; // r14
  ULONG v12; // edx
  __m128i *v13; // rsi
  unsigned int v14; // edi
  unsigned int v15; // r15d
  unsigned __int16 v16; // r14
  __m128i v17; // xmm0
  unsigned __int64 v18; // rbx
  bool v19; // zf
  unsigned __int8 j; // al
  char v21; // al
  __m128i v22; // xmm0
  unsigned __int64 v23; // rbx
  unsigned __int8 Number; // al
  __m128i v25; // xmm0
  unsigned int v26; // r15d
  ULONG v27; // r12d
  unsigned __int64 v28; // r14
  unsigned __int8 v29; // al
  ULONG v30; // ebx
  __int64 ProcessorIndexFromNumber; // rdx
  struct _NDIS_PROCESSOR_INFO_EX *v32; // rax
  char v33; // al
  __int64 v34; // rax
  ULONG v35; // r15d
  _DWORD *v36; // r8
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v37; // rbx
  ULONG v38; // r12d
  WORD v39; // r14
  __m128i v40; // xmm0
  unsigned __int64 v41; // rsi
  bool v42; // zf
  unsigned __int8 k; // al
  ULONG v44; // eax
  __int64 v45; // rcx
  ULONG v46; // edx
  __int64 Size; // rax
  unsigned int v48; // ecx
  char v50; // [rsp+20h] [rbp-48h]
  char v51; // [rsp+24h] [rbp-44h]
  unsigned int v52; // [rsp+28h] [rbp-40h]
  ULONG v53; // [rsp+2Ch] [rbp-3Ch]
  NTSTATUS v54; // [rsp+30h] [rbp-38h]
  __int64 Pool2; // [rsp+38h] [rbp-30h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v56; // [rsp+40h] [rbp-28h]
  _DWORD *v57; // [rsp+48h] [rbp-20h]
  _DWORD *v58; // [rsp+50h] [rbp-18h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+48h] BYREF
  int v60; // [rsp+B4h] [rbp+4Ch]
  ULONG Length; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int i; // [rsp+C0h] [rbp+58h]
  ULONG v63; // [rsp+C8h] [rbp+60h]

  v60 = HIDWORD(a1);
  v1 = 0;
  v57 = ndisSystemProcessorInfo;
  v2 = 0;
  Length = 0;
  v3 = 0;
  v53 = 0;
  v50 = 1;
  v51 = 1;
  ProcNumber = 0;
  v52 = 0;
  for ( i = 0; v3 < ndisNumberOfActiveProcessorsAtBoot; ++v3 )
    KeGetProcessorNumberFromIndex(v3, &ndisCpuInfo[v3].ProcNum);
  if ( v3 < ndisMaxNumberOfProcessors )
  {
    v4 = ndisMaxNumberOfProcessors - v3;
    p_Reserved = &ndisCpuInfo[v3].ProcNum.Reserved;
    do
    {
      *(_DWORD *)(p_Reserved - 3) = 0xFFFFFF;
      p_Reserved += 20;
      --v4;
    }
    while ( v4 );
  }
  Pool2 = ExAllocatePool2(64LL, 4LL * ndisMaxNumberOfProcessors, 538985550);
  v6 = (void *)Pool2;
  if ( Pool2 )
  {
    v8 = (_DWORD *)ExAllocatePool2(66LL, 4LL * ndisMaxNumberOfProcessors, 538985550);
    v58 = v8;
    v9 = v8;
    if ( v8
      && (memset(v8, 255, 4LL * ndisMaxNumberOfProcessors),
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v10 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(66LL, Length, 538985550),
          v56 = v10,
          (v11 = v10) != 0LL) )
    {
      v54 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v10, &Length);
      v7 = v54;
      if ( v54 >= 0 )
      {
        v12 = 0;
        v13 = (__m128i *)v11;
        v63 = 0;
        if ( Length )
        {
          v14 = 0;
          do
          {
            if ( v13->m128i_i32[0] )
            {
              if ( v13->m128i_i32[0] == 1 )
              {
                v22 = v13[2];
                ProcNumber.Reserved = 0;
                v23 = v22.m128i_i64[0];
                ProcNumber.Group = _mm_extract_epi16(v22, 4);
                Number = 0;
                ProcNumber.Number = 0;
                if ( v22.m128i_i64[0] )
                {
                  do
                  {
                    if ( (v23 & 1) != 0 )
                    {
                      ndisCpuInfo[KeGetProcessorIndexFromNumber(&ProcNumber)].NodeId = v13->m128i_u16[4];
                      Number = ProcNumber.Number;
                    }
                    ++Number;
                    v23 >>= 1;
                    ProcNumber.Number = Number;
                  }
                  while ( v23 );
                  v12 = v63;
                }
              }
              else if ( v13->m128i_i32[0] == 3 )
              {
                v15 = 0;
                v16 = 0;
                if ( v13[1].m128i_i16[7] )
                {
                  do
                  {
                    v17 = v13[v16 + 2];
                    ProcNumber.Reserved = 0;
                    v18 = v17.m128i_i64[0];
                    v19 = v17.m128i_i64[0] == 0;
                    ProcNumber.Group = _mm_extract_epi16(v17, 4);
                    for ( j = 0; ; ++j )
                    {
                      ProcNumber.Number = j;
                      if ( v19 )
                        break;
                      if ( (v18 & 1) != 0 )
                      {
                        ++v15;
                        ndisCpuInfo[KeGetProcessorIndexFromNumber(&ProcNumber)].SocketId = v1;
                        j = ProcNumber.Number;
                      }
                      v18 >>= 1;
                      v19 = v18 == 0;
                    }
                    ++v16;
                  }
                  while ( v16 < (unsigned int)v13[1].m128i_i16[7] );
                  v12 = v63;
                  v14 = i;
                }
                if ( v1 )
                {
                  v21 = v51;
                  if ( v15 != v52 )
                    v21 = 0;
                  v51 = v21;
                }
                else
                {
                  v52 = v15;
                }
                v53 = ++v1;
              }
            }
            else
            {
              v25 = v13[2];
              v26 = 0;
              ProcNumber.Reserved = 0;
              v27 = 0;
              v28 = v25.m128i_i64[0];
              ProcNumber.Group = _mm_extract_epi16(v25, 4);
              v29 = 0;
              ProcNumber.Number = 0;
              if ( v25.m128i_i64[0] )
              {
                do
                {
                  if ( (v28 & 1) != 0 )
                  {
                    ++v26;
                    v30 = v27++;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                    v32 = ndisCpuInfo;
                    *(_DWORD *)(Pool2 + 4 * ProcessorIndexFromNumber) = v2;
                    v32[ProcessorIndexFromNumber].HyperThreadId = v30;
                    v29 = ProcNumber.Number;
                  }
                  ++v29;
                  v28 >>= 1;
                  ProcNumber.Number = v29;
                }
                while ( v28 );
                v12 = v63;
                v14 = i;
              }
              if ( v2 )
              {
                v33 = v50;
                if ( v26 != v14 )
                  v33 = 0;
                v50 = v33;
              }
              else
              {
                v14 = v26;
                i = v26;
              }
              v1 = v53;
              ++v2;
            }
            v34 = v13->m128i_u32[1];
            v12 += v34;
            v13 = (__m128i *)((char *)v13 + v34);
            v63 = v12;
          }
          while ( v12 < Length );
          v7 = v54;
          v11 = v56;
        }
        v35 = 0;
        v36 = v57;
        v37 = v11;
        v63 = 0;
        v57[3] = v1;
        v57[4] = v2;
        if ( Length )
        {
          do
          {
            if ( v37->Relationship == RelationProcessorPackage )
            {
              v38 = 0;
              v39 = 0;
              if ( v37->Processor.GroupCount )
              {
                do
                {
                  v40 = *((__m128i *)&v37->Group.GroupInfo[0].MaximumProcessorCount + v39);
                  ProcNumber.Reserved = 0;
                  v41 = v40.m128i_i64[0];
                  v42 = v40.m128i_i64[0] == 0;
                  ProcNumber.Group = _mm_extract_epi16(v40, 4);
                  for ( k = 0; ; ++k )
                  {
                    ProcNumber.Number = k;
                    if ( v42 )
                      break;
                    if ( (v41 & 1) != 0 )
                    {
                      v44 = KeGetProcessorIndexFromNumber(&ProcNumber);
                      v45 = *(unsigned int *)(Pool2 + 4LL * v44);
                      v46 = v58[v45];
                      if ( v46 == -1 )
                      {
                        v46 = v38++;
                        v58[v45] = v46;
                      }
                      ndisCpuInfo[v44].CoreId = v46;
                      k = ProcNumber.Number;
                    }
                    v41 >>= 1;
                    v42 = v41 == 0;
                  }
                  ++v39;
                }
                while ( v39 < v37->Processor.GroupCount );
                v35 = v63;
              }
            }
            Size = v37->Size;
            v35 += Size;
            v37 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v37 + Size);
            v63 = v35;
          }
          while ( v35 < Length );
          v7 = v54;
          v11 = v56;
          v36 = v57;
        }
        if ( v50 )
        {
          v48 = i;
          v36[6] = i;
          if ( v51 )
          {
            if ( v48 )
              v36[5] = v52 / v48;
          }
        }
        v9 = v58;
        v6 = (void *)Pool2;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      v7 = -1073741670;
    }
    ExFreePoolWithTag(v6, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
