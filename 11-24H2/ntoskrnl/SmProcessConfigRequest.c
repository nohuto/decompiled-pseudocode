/*
 * XREFs of SmProcessConfigRequest @ 0x140797D74
 * Callers:
 *     SmSetStoreInformation @ 0x140A57E40 (SmSetStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     SmpSystemStoreCreate @ 0x140799964 (SmpSystemStoreCreate.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 *     SmCreatePartition @ 0x140A34664 (SmCreatePartition.c)
 */

__int64 __fastcall SmProcessConfigRequest(__m256i *a1, unsigned int a2, __int64 a3)
{
  char v3; // r15
  int Partition; // ebx
  __int64 v6; // rcx
  unsigned __int32 v7; // edx
  __int64 v8; // rbx
  unsigned __int32 v9; // edx
  unsigned int v10; // ecx
  __int64 ProcessPartition; // rcx
  __int64 v12; // rsi
  unsigned __int32 v13; // edx
  int v15; // [rsp+30h] [rbp-48h]
  __m256i v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v17 = 0LL;
  v15 = 0;
  if ( a2 < 0x20 )
  {
    Partition = -1073741306;
    goto LABEL_53;
  }
  if ( (_BYTE)a3 )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 31) = *(_BYTE *)(v6 + 31);
  }
  v16 = *a1;
  if ( (unsigned __int8)*(_OWORD *)a1->m256i_i8 != 9 )
  {
    Partition = -1073741735;
    goto LABEL_53;
  }
  if ( a2 != 32 )
  {
    Partition = -1073741820;
    goto LABEL_53;
  }
  if ( (a1->m256i_i64[0] & 0xFFFF00) != 0 )
    goto LABEL_52;
  v7 = HIBYTE(v16.m256i_i32[0]);
  if ( HIBYTE(v16.m256i_i32[0]) >= 3u )
    goto LABEL_52;
  v8 = a1->m256i_i64[2];
  if ( (v16.m256i_i64[2] == 0) != (v16.m256i_i64[3] == 0) )
    goto LABEL_52;
  if ( v7 )
  {
    if ( *(_OWORD *)&v16.m256i_u64[1] == 0LL )
    {
      v9 = v7 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
LABEL_51:
          Partition = 0;
          goto LABEL_53;
        }
        if ( (unsigned int)(v16.m256i_i32[1] - 4) <= 0x1C && ((v16.m256i_i32[1] - 1) & v16.m256i_i32[1]) == 0 )
        {
          dword_140E373D4 = HIDWORD(a1->m256i_i64[0]);
          goto LABEL_51;
        }
      }
      else if ( v16.m256i_i32[1] <= 1u )
      {
        PspOutSwapSharedPages = HIDWORD(a1->m256i_i64[0]);
        goto LABEL_51;
      }
    }
    goto LABEL_52;
  }
  if ( v16.m256i_i32[1] >= 0x2000u )
    goto LABEL_52;
  if ( (((unsigned __int32)v16.m256i_i32[1] >> 1) & 3) == 3 )
    goto LABEL_52;
  v10 = HIDWORD(a1->m256i_i64[0]) & 0x18;
  if ( v10 >= 0x18 )
    goto LABEL_52;
  if ( ((((unsigned __int32)v16.m256i_i32[1] >> 1) & 3) == 2 || v10 == 16)
    && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    Partition = -1073741790;
    goto LABEL_53;
  }
  if ( (v16.m256i_i16[2] & 0x180) == 0x80 )
    goto LABEL_52;
  if ( !v16.m256i_i64[2] )
    goto LABEL_42;
  if ( v16.m256i_i64[3] != 4 )
  {
LABEL_52:
    Partition = -1073741811;
    goto LABEL_53;
  }
  if ( v3 )
  {
    if ( (v16.m256i_i8[16] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v16.m256i_i64[2] >= 0x7FFFFFFF0000uLL )
      v8 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 3) = *(_BYTE *)(v8 + 3);
    v8 = v16.m256i_i64[2];
  }
  v15 = *(_DWORD *)v8;
LABEL_42:
  if ( !v16.m256i_i64[1] )
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
LABEL_47:
    v13 = ((unsigned __int32)v16.m256i_i32[1] >> 1) & 0xF | *(_DWORD *)(ProcessPartition + 2224) & 0xFFFFC010 | (2 * (v16.m256i_i16[2] & 0x1FE0 | (16 * (v16.m256i_i8[4] & 1))));
    if ( v16.m256i_i64[2] )
      *(_DWORD *)(ProcessPartition + 2228) = v15;
    *(_DWORD *)(ProcessPartition + 2224) = v13;
    if ( (v13 & 3) != 0 )
      SmpSystemStoreCreate();
    goto LABEL_51;
  }
  LOBYTE(a3) = v3;
  Partition = PsReferencePartitionByHandle(v16.m256i_i64[1], 2LL, a3, 1380150611LL, &v17);
  if ( Partition >= 0 )
  {
    v12 = v17;
    Partition = SmCreatePartition(v17);
    if ( Partition >= 0 )
    {
      ProcessPartition = *(_QWORD *)(v12 + 24);
      goto LABEL_47;
    }
  }
LABEL_53:
  if ( v17 )
    PsDereferencePartition(v17);
  return (unsigned int)Partition;
}
