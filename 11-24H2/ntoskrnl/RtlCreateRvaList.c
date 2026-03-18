/*
 * XREFs of RtlCreateRvaList @ 0x1408F3740
 * Callers:
 *     MiParseImageLoadConfig @ 0x1408F42B8 (MiParseImageLoadConfig.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlpCompressRvaList @ 0x1408F3900 (RtlpCompressRvaList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlCreateRvaList(int a1, __int64 a2, __int64 a3, unsigned int a4, void *Src, int a6, __int64 **a7)
{
  __int64 v7; // r14
  __int64 *v8; // rbx
  int v9; // edi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // r12
  __int64 Pool2; // rax
  __int64 v15; // rsi
  const void *v16; // rdx
  char *v17; // rsi
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+94h] [rbp+1Ch]

  v22 = HIDWORD(a3);
  v7 = a4;
  v21 = 0;
  v20 = 0LL;
  v8 = 0LL;
  v9 = RtlpCompressRvaList(
         0,
         a1,
         (unsigned int)MiImageRvaRawEnumFirst,
         (unsigned int)MiImageRvaRawEnumNext,
         0LL,
         (__int64)&v20,
         (__int64)&v21);
  if ( v9 >= 0 )
  {
    v10 = v21;
    if ( (unsigned int)v7 <= 1 )
      v11 = 0LL;
    else
      v11 = (((unsigned __int64)((unsigned int)v7 * v21) + 63) >> 3) & 0x1FFFFFFFFFFFFFF8LL;
    v12 = v20;
    v13 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    Pool2 = ExAllocatePool2(0x100uLL);
    v8 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = v12;
      v15 = Pool2 + 64;
      *(_QWORD *)Pool2 = v10;
      *(_DWORD *)(Pool2 + 8) = v7;
      *(_QWORD *)(Pool2 + 16) = Pool2 + 64;
      memset_0((void *)(Pool2 + 64), 0, v11 + 4 * v7 + v13);
      v16 = Src;
      v17 = (char *)(v13 + v15);
      if ( Src )
      {
        v8[6] = (__int64)v17;
        memmove(v17, v16, 4 * v7);
        v17 += 4 * v7;
      }
      if ( v11 )
      {
        v8[5] = (__int64)v17;
        v8[4] = (unsigned int)(v7 * v10);
      }
      v9 = RtlpCompressRvaList(
             (_DWORD)v8,
             a1,
             (unsigned int)MiImageRvaRawEnumFirst,
             (unsigned int)MiImageRvaRawEnumNext,
             v8[2],
             (__int64)&v20,
             (__int64)&v21);
      if ( v9 < 0 )
      {
        ExFreePoolWithTag(v8, 0x4C617652u);
        v8 = 0LL;
      }
    }
    else
    {
      v9 = -1073741670;
    }
  }
  *a7 = v8;
  return (unsigned int)v9;
}
