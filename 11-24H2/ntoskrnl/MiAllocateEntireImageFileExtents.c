/*
 * XREFs of MiAllocateEntireImageFileExtents @ 0x1407F021C
 * Callers:
 *     MiEnableImageDirectMap @ 0x14067BB08 (MiEnableImageDirectMap.c)
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     FsRtlGetFileExtents @ 0x14057CC20 (FsRtlGetFileExtents.c)
 *     MiInsertCopyExtents @ 0x14067C4D0 (MiInsertCopyExtents.c)
 *     MiNewPfnsSuitable @ 0x1407EA264 (MiNewPfnsSuitable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateEntireImageFileExtents(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  struct _FILE_OBJECT *v7; // rbx
  int v8; // r15d
  unsigned int v9; // esi
  _DWORD *Pool; // rax
  _DWORD *v11; // rdi
  int FileExtents; // ebx
  unsigned int v13; // ebp
  __int64 v14; // rcx
  __int64 inserted; // rax

  *a4 = 0LL;
  v7 = a1;
  v8 = 1;
  v9 = ((__rdtsc() >> 4) & 7) + 8;
  while ( v9 )
  {
    Pool = (_DWORD *)MiAllocatePool(0x40uLL, 16LL * (v9 - 1) + 24, 893806925);
    v11 = Pool;
    if ( Pool )
    {
      Pool[1] = 0;
      v8 = 0;
      *Pool = v9;
      a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      FileExtents = FsRtlGetFileExtents(v7, 1, 0LL, a2, Pool);
      if ( FileExtents < 0 )
        goto LABEL_16;
      v13 = v11[1];
      if ( v13 <= v9 )
      {
        if ( (unsigned int)MiNewPfnsSuitable((__int64)v11) )
        {
          if ( v13 )
          {
            inserted = MiInsertCopyExtents(v14, a3, 0);
            if ( inserted )
              *a4 = inserted;
            else
              FileExtents = -1073741670;
          }
          else
          {
            FileExtents = -1073741823;
          }
        }
        else
        {
          FileExtents = -1073740761;
        }
LABEL_16:
        ExFreePoolWithTag(v11, 0);
        return (unsigned int)FileExtents;
      }
      v11[1] = v9;
      ExFreePoolWithTag(v11, 0);
      v7 = a1;
      v9 = v13;
    }
    else
    {
      if ( !v8 )
        return 3221225626LL;
      v9 >>= 1;
    }
  }
  return 3221225626LL;
}
