/*
 * XREFs of SmProcessCompressionReadStatsRequest @ 0x140797B20
 * Callers:
 *     SmQueryStoreInformation @ 0x140A11F10 (SmQueryStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessCompressionReadStatsRequest(char *a1, size_t Size, _DWORD *a3, char a4)
{
  SIZE_T v6; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 ProcessPartition; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp-D8h] BYREF
  __int128 Src; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v17[8]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+D0h] [rbp-38h]
  _QWORD v19[5]; // [rsp+E0h] [rbp-28h] BYREF

  v6 = (unsigned int)Size;
  v15 = 0LL;
  memset_0(&Src, 0, 0x98uLL);
  if ( (unsigned int)v6 < 0xA0 )
  {
    v8 = -1073741306;
    goto LABEL_26;
  }
  if ( a4 )
  {
    if ( v6 - 1 > 0xFFE )
    {
      ProbeForWrite(a1, v6, 8u);
    }
    else
    {
      if ( ((unsigned __int8)a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a1;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + v6 - 1) = *(_BYTE *)(v9 + v6 - 1);
    }
  }
  Src = *(_OWORD *)a1;
  v17[0] = *((_OWORD *)a1 + 1);
  v17[1] = *((_OWORD *)a1 + 2);
  v17[2] = *((_OWORD *)a1 + 3);
  v17[3] = *((_OWORD *)a1 + 4);
  v17[4] = *((_OWORD *)a1 + 5);
  v17[5] = *((_OWORD *)a1 + 6);
  v17[6] = *((_OWORD *)a1 + 7);
  v17[7] = *((_OWORD *)a1 + 8);
  v18 = *((_OWORD *)a1 + 9);
  if ( (_BYTE)Src != 1 )
  {
    v8 = -1073741735;
    goto LABEL_26;
  }
  if ( (_DWORD)v6 != 160 )
  {
    v8 = -1073741820;
    goto LABEL_26;
  }
  memmove(v19, a1 + 160, 0LL);
  if ( (Src & 0xFFFFFF00) != 0 || DWORD1(Src) )
  {
    v8 = -1073741811;
    goto LABEL_26;
  }
  if ( *((_QWORD *)&Src + 1) )
  {
    LOBYTE(v10) = a4;
    v8 = PsReferencePartitionByHandle(*((_QWORD *)&Src + 1), 1LL, v10, 1381068115LL, &v15);
    if ( v8 < 0 )
      goto LABEL_26;
    ProcessPartition = *(_QWORD *)(v15 + 24);
    if ( !ProcessPartition )
    {
      v8 = -1073741399;
      goto LABEL_26;
    }
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v12 = v17;
  v13 = 17LL;
  do
  {
    *v12 = *(_QWORD *)((char *)v12 + ProcessPartition - (_QWORD)v17 + 3200);
    ++v12;
    --v13;
  }
  while ( v13 );
  *((_QWORD *)&v18 + 1) = *(_QWORD *)(ProcessPartition + 3344);
  v8 = 0;
  memmove(a1, &Src, v6);
  *a3 = 160;
LABEL_26:
  if ( v15 )
    PsDereferencePartition(v15);
  return (unsigned int)v8;
}
