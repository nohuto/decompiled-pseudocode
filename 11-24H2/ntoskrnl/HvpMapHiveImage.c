/*
 * XREFs of HvpMapHiveImage @ 0x1407E0050
 * Callers:
 *     HvpMapHiveImageFromFile @ 0x14096BEA4 (HvpMapHiveImageFromFile.c)
 * Callees:
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpReadHiveDataFromFile @ 0x1407E01C4 (HvpReadHiveDataFromFile.c)
 *     HvpPointMapEntriesToBuffer @ 0x140969A8C (HvpPointMapEntriesToBuffer.c)
 *     HvpProtectBinPartial @ 0x140A2C4E4 (HvpProtectBinPartial.c)
 *     HvpAllocateBin @ 0x140A58878 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x140A634EC (HvpFreeBin.c)
 */

__int64 __fastcall HvpMapHiveImage(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  int v7; // r14d
  int v8; // eax
  int Bin; // ebx
  unsigned int i; // edi
  const void *v11; // r12
  int v12; // r8d
  int v13; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 56);
  v7 = 0;
LABEL_2:
  v8 = HvpReadHiveDataFromFile(a5, &v15, &v16);
  Bin = v8;
  if ( v8 >= 0 )
  {
    for ( i = 0; ; i += 4096 )
    {
      if ( i >= v16 )
        goto LABEL_2;
      v11 = (const void *)(v15 + i);
      Bin = HvpAllocateBin(BugCheckParameter2, 4096, 0, 825445699, (__int64)&v17);
      if ( Bin < 0 )
        break;
      memmove(v17, v11, 0x1000uLL);
      Bin = HvpProtectBinPartial(BugCheckParameter2, (_DWORD)v17, v12, 0, 4096, 0);
      if ( Bin < 0 )
      {
        v13 = 32;
        goto LABEL_10;
      }
      HvpPointMapEntriesToBuffer(BugCheckParameter2, 1, 0LL);
      v17 = 0LL;
      v7 += 4096;
    }
    v13 = 16;
LABEL_10:
    SetFailureLocation(v6, 0, 7, Bin, v13);
    if ( v17 )
      HvpFreeBin(BugCheckParameter2, 4096LL);
    return (unsigned int)Bin;
  }
  if ( v8 == -1073741807 )
    return 0;
  else
    SetFailureLocation(v6, 0, 7, v8, 0);
  return (unsigned int)Bin;
}
