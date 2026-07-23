/*
 * XREFs of MiShareExistingControlArea @ 0x14098C830
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x140418300 (IoSetTopLevelIrp.c)
 *     PsIsCurrentThreadPrefetching @ 0x140441F00 (PsIsCurrentThreadPrefetching.c)
 *     MiValidateControlAreaPartition @ 0x140442FA8 (MiValidateControlAreaPartition.c)
 *     MmChangeSectionBackingFile @ 0x14044663C (MmChangeSectionBackingFile.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x14098D3F0 (FsRtlReleaseFile.c)
 *     MiValidateExistingImage @ 0x14098DCCC (MiValidateExistingImage.c)
 */

__int64 __fastcall MiShareExistingControlArea(__int64 a1)
{
  __int64 v1; // r14
  struct _FILE_OBJECT *v3; // rdi
  int v4; // esi
  int v5; // edx
  bool v6; // zf
  __int64 v7; // rsi
  LARGE_INTEGER v8; // rax
  LARGE_INTEGER v9; // rcx
  __int64 result; // rax
  LARGE_INTEGER FileSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  FileSize.QuadPart = 0LL;
  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  v4 = MiValidateControlAreaPartition(a1, v1);
  if ( v4 < 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v4;
  }
  if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 && !PsIsCurrentThreadPrefetching() )
    MmChangeSectionBackingFile(0LL, v3, ((*(_DWORD *)(a1 + 16) & 0x1000000) != 0) + 1);
  v5 = *(_DWORD *)a1 | 4;
  v6 = (*(_BYTE *)a1 & 1) == 0;
  *(_DWORD *)a1 = v5;
  v7 = *(_QWORD *)v1;
  if ( v6 && (*(_BYTE *)(v1 + 56) & 0x20) == 0 )
  {
    v4 = FsRtlGetFileSize(v3, &FileSize);
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
    if ( v4 >= 0 )
    {
      v8 = FileSize;
      if ( !FileSize.QuadPart && !*(_QWORD *)(a1 + 152) )
        return 3221225758LL;
      goto LABEL_6;
    }
    return (unsigned int)v4;
  }
  if ( (v5 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
  {
    result = MiValidateExistingImage(a1);
    if ( (int)result < 0 )
      return result;
  }
  v8.QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL);
LABEL_6:
  v9 = *(LARGE_INTEGER *)(a1 + 152);
  if ( v9.QuadPart )
  {
    if ( v8.QuadPart < (unsigned __int64)v9.QuadPart )
    {
      if ( (*(_DWORD *)(a1 + 28) & 0x44) == 0 )
        return 3221225536LL;
    }
    else
    {
      *(_DWORD *)a1 |= 8u;
    }
    *(LARGE_INTEGER *)(a1 + 128) = v9;
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    *(LARGE_INTEGER *)(a1 + 128) = v8;
  }
  return 0LL;
}
