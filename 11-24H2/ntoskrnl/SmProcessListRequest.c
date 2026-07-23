/*
 * XREFs of SmProcessListRequest @ 0x1407980E8
 * Callers:
 *     SmQueryStoreInformation @ 0x140A11F10 (SmQueryStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14041E240 (SmKmStoreRefFromStoreIndex.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmProcessListRequestExtended @ 0x140798368 (SmProcessListRequestExtended.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessListRequest(_OWORD *a1, unsigned int a2, unsigned int *a3, char a4)
{
  int v8; // ebx
  _OWORD *v9; // rax
  _OWORD *v10; // rdi
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 ProcessPartition; // r10
  unsigned int i; // r9d
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // r11
  unsigned int Size; // [rsp+30h] [rbp-38h]
  __int64 v22[3]; // [rsp+38h] [rbp-30h] BYREF

  v22[0] = 0LL;
  v8 = 4240;
  v9 = (_OWORD *)SmAllocEx(0x1090uLL, 0x524C6D73u, -1);
  v10 = v9;
  v22[1] = (__int64)v9;
  if ( !v9 )
  {
    v11 = -1073740716;
    goto LABEL_32;
  }
  memset_0(v9, 0, 0x1090uLL);
  v12 = 144LL;
  if ( a2 < 0x90 )
    goto LABEL_4;
  if ( a4 )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a1;
    *(_BYTE *)v13 = *(_BYTE *)v13;
    *(_BYTE *)(v13 + 143) = *(_BYTE *)(v13 + 143);
  }
  *v10 = *a1;
  v10[1] = a1[1];
  v10[2] = a1[2];
  v10[3] = a1[3];
  v10[4] = a1[4];
  v10[5] = a1[5];
  v10[6] = a1[6];
  v10[7] = a1[7];
  v10[8] = a1[8];
  if ( (*(_DWORD *)v10 & 0x10000) != 0 )
  {
    if ( a4 )
      ProbeForWrite(a1, 0x1090uLL, 8u);
  }
  else
  {
    v8 = 144;
  }
  Size = v8;
  if ( a2 != v8 )
  {
LABEL_4:
    v11 = -1073741306;
    goto LABEL_32;
  }
  if ( __PAIR16__(*((_BYTE *)v10 + 1), *(_DWORD *)v10) == 3 && *(_DWORD *)v10 < 0x20000u )
  {
    v14 = *((_QWORD *)v10 + 1);
    if ( v14 )
    {
      LOBYTE(v12) = a4;
      v11 = PsReferencePartitionByHandle(v14, 1LL, v12, 1280404819LL, v22);
      if ( v11 < 0 )
        goto LABEL_32;
      ProcessPartition = *(_QWORD *)(v22[0] + 24);
      if ( !ProcessPartition )
      {
        v11 = -1073741399;
        goto LABEL_32;
      }
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    for ( i = 0; i < 0x20; i = v18 + 1 )
    {
      v17 = SmKmStoreRefFromStoreIndex(ProcessPartition, i);
      if ( v17 && *(_QWORD *)v17 )
      {
        *((_DWORD *)v10 + v19 + 4) = v18 | ((*(_WORD *)(v17 + 32) & 0x3F) << 10);
        LOBYTE(v19) = v19 + 1;
      }
    }
    *((_BYTE *)v10 + 1) = v19;
    v11 = 0;
    if ( (*(_DWORD *)v10 & 0x10000) == 0 || (v11 = SmProcessListRequestExtended(ProcessPartition, v10), v11 >= 0) )
    {
      memmove(a1, v10, Size);
      *a3 = Size;
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_32:
  if ( v10 )
    CmSiFreeMemory((PPRIVILEGE_SET)v10);
  if ( v22[0] )
    PsDereferencePartition(v22[0]);
  return (unsigned int)v11;
}
