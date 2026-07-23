/*
 * XREFs of SmProcessCompressionAcceleratorRequest @ 0x14079797C
 * Callers:
 *     SmQueryStoreInformation @ 0x140A11F10 (SmQueryStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessCompressionAcceleratorRequest(char *a1, size_t Size, _DWORD *a3, char a4)
{
  size_t v6; // rsi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 ProcessPartition; // rax
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 Src; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]
  _BYTE v16[8]; // [rsp+50h] [rbp-8h] BYREF

  v6 = (unsigned int)Size;
  v13 = 0LL;
  Src = 0LL;
  v15 = 0LL;
  if ( (unsigned int)Size < 0x18 )
  {
    v8 = -1073741306;
    goto LABEL_24;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)(unsigned int)Size - 1 > 0xFFE )
    {
      ProbeForWrite(a1, (unsigned int)Size, 8u);
    }
    else
    {
      if ( ((unsigned __int8)a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a1;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + (unsigned int)Size - 1) = *(_BYTE *)(v9 + (unsigned int)Size - 1);
    }
  }
  Src = *(_OWORD *)a1;
  v15 = *((_QWORD *)a1 + 2);
  if ( (_BYTE)Src != 1 )
  {
    v8 = -1073741735;
    goto LABEL_24;
  }
  if ( (_DWORD)v6 != 24 )
  {
    v8 = -1073741820;
    goto LABEL_24;
  }
  memmove(v16, a1 + 24, 0LL);
  if ( (Src & 0xFFFFFF00) != 0 || DWORD1(Src) )
  {
    v8 = -1073741811;
    goto LABEL_24;
  }
  if ( !*((_QWORD *)&Src + 1) )
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
LABEL_20:
    LODWORD(v15) = *(_DWORD *)(ProcessPartition + 3168);
    v8 = 0;
    memmove(a1, &Src, v6);
    *a3 = 24;
    goto LABEL_24;
  }
  LOBYTE(v10) = a4;
  v8 = PsReferencePartitionByHandle(*((_QWORD *)&Src + 1), 1LL, v10, 1381068115LL, &v13);
  if ( v8 >= 0 )
  {
    ProcessPartition = *(_QWORD *)(v13 + 24);
    if ( ProcessPartition )
      goto LABEL_20;
    v8 = -1073741399;
  }
LABEL_24:
  if ( v13 )
    PsDereferencePartition(v13);
  return (unsigned int)v8;
}
