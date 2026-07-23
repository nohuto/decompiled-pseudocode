/*
 * XREFs of SmDecompressBuffer @ 0x1403CC850
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140987464 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x1403CCA50 (RtlDecompressBufferEx.c)
 *     crc32 @ 0x1404F120C (crc32.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlCompressWorkSpaceSizeLZNT1 @ 0x140B59950 (RtlCompressWorkSpaceSizeLZNT1.c)
 */

__int64 __fastcall SmDecompressBuffer(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  NTSTATUS v5; // ebx
  void *WorkSpace; // r15
  __int64 v10; // rdx
  int v11; // ecx
  ULONG CompressedBufferSize; // esi
  void *v13; // r14
  size_t v14; // rdi
  __int64 v15; // rdx
  void *v16; // r13
  __int64 v17; // r12
  int v18; // eax
  _DWORD *v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v24[5]; // [rsp+44h] [rbp-14h] BYREF
  ULONG FinalUncompressedSize; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+50h] BYREF
  _QWORD *v27; // [rsp+B0h] [rbp+58h]
  _DWORD *v28; // [rsp+B8h] [rbp+60h]

  v28 = a4;
  v27 = a3;
  v5 = 0;
  FinalUncompressedSize = 0;
  v26 = 0;
  WorkSpace = 0LL;
  v23 = 0;
  v10 = 8LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v11 = *(_DWORD *)a1;
  CompressedBufferSize = a2 - 8;
  if ( (v11 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v11 < 0 )
  {
    if ( CompressedBufferSize >= 4 )
    {
      v20 = (_DWORD *)(a1 + 8);
      v24[0] = 0;
      v13 = (void *)(a1 + 12);
      CompressedBufferSize -= 4;
      v21 = crc32(0LL, a1, 8LL);
      v22 = crc32(v21, v24, 4LL);
      if ( (unsigned int)crc32(v22, v13, CompressedBufferSize) == *v20 )
      {
        v5 = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v13 = (void *)(a1 + 8);
LABEL_5:
  v14 = *(unsigned int *)(a1 + 4);
  if ( a5 && (unsigned int)v14 > *a5 )
    return (unsigned int)-1073739516;
  v16 = (void *)guard_dispatch_icall_no_overrides((unsigned int)v14, v10);
  if ( !v16 )
    return (unsigned int)-1073741670;
  v17 = *(_BYTE *)(a1 + 3) & 0x7F;
  if ( !(_BYTE)v17 )
  {
    if ( CompressedBufferSize == (_DWORD)v14 )
    {
      memmove(v16, v13, v14);
      FinalUncompressedSize = v14;
      goto LABEL_24;
    }
LABEL_34:
    v5 = -1073741246;
    goto LABEL_16;
  }
  if ( (_DWORD)v17 == 1 )
  {
    v5 = -1073741811;
    goto LABEL_16;
  }
  if ( (unsigned __int16)v17 > 8u )
  {
    v5 = -1073741217;
    goto LABEL_16;
  }
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlWorkSpaceProcs[v17] == RtlCompressWorkSpaceSizeLZNT1 )
    v18 = RtlCompressWorkSpaceSizeLZNT1(0LL, &v23, &v26);
  else
    v18 = guard_dispatch_icall_no_overrides(0LL, &v23);
  v5 = v18;
  if ( v18 < 0 )
    goto LABEL_16;
  if ( v26 )
  {
    WorkSpace = (void *)guard_dispatch_icall_no_overrides(v26, v15);
    if ( !WorkSpace )
    {
      v5 = -1073741670;
      goto LABEL_16;
    }
  }
  v5 = RtlDecompressBufferEx(
         v17,
         (PUCHAR)v16,
         v14,
         (PUCHAR)v13,
         CompressedBufferSize,
         &FinalUncompressedSize,
         WorkSpace);
  if ( v5 < 0 )
  {
LABEL_16:
    guard_dispatch_icall_no_overrides(v16, v15);
    goto LABEL_17;
  }
  if ( (_DWORD)v14 != FinalUncompressedSize )
    goto LABEL_34;
  v5 = 0;
LABEL_24:
  *v27 = v16;
  *v28 = v14;
LABEL_17:
  if ( WorkSpace )
    guard_dispatch_icall_no_overrides(WorkSpace, v15);
  return (unsigned int)v5;
}
