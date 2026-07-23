/*
 * XREFs of MiCreateDataFileMap @ 0x14098A990
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiInsertSubsectionNode @ 0x140291B54 (MiInsertSubsectionNode.c)
 *     Mi4KStartForSubsection @ 0x14045A31C (Mi4KStartForSubsection.c)
 *     MiComputeIdealFirstSubsection @ 0x1407F044C (MiComputeIdealFirstSubsection.c)
 *     FsRtlSetFileSize @ 0x14098A000 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

int __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        _WORD *a2,
        LARGE_INTEGER **a3,
        LARGE_INTEGER a4,
        char a5,
        int a6,
        int a7,
        __int16 a8)
{
  LARGE_INTEGER v11; // rbp
  unsigned __int64 v12; // r15
  LARGE_INTEGER *Pool; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // ebx
  unsigned int v17; // r12d
  __int64 v18; // rdx
  unsigned __int64 v19; // r13
  unsigned int v20; // r14d
  __int16 v21; // ax
  __int16 v22; // cx
  int v23; // edx
  __int16 v24; // ax
  __int64 *v25; // r9
  int v26; // ebp
  __int16 v27; // cx
  __int64 v28; // rbx
  unsigned __int64 v29; // r9
  __int64 **v30; // rsi
  unsigned int v31; // eax
  unsigned __int64 v32; // r8
  int v33; // r8d
  int result; // eax
  void *v35; // rcx
  _QWORD *v36; // rcx
  __int16 v37; // ax
  _QWORD *v38; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-48h] BYREF
  __int64 v40; // [rsp+28h] [rbp-40h]
  int v43; // [rsp+A8h] [rbp+40h]

  FileSize.QuadPart = 0LL;
  v43 = a8 & 1;
  if ( (a8 & 1) != 0 )
  {
    v11 = a4;
    FileSize = a4;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    v11 = FileSize;
    if ( !FileSize.QuadPart && !a4.QuadPart )
      return -1073741538;
    if ( a4.QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = a4;
      v11 = a4;
      result = FsRtlSetFileSize(FileObject, (__int64 *)&FileSize);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( v11.QuadPart <= 0x40000000000000uLL )
    {
      v12 = (unsigned __int64)(v11.QuadPart + 4095) >> 12;
      Pool = (LARGE_INTEGER *)MiAllocatePool(0x100uLL, 0x30uLL, 1834184013);
      if ( !Pool )
        return -1073741670;
      v14 = MiAllocatePool(0x40uLL, 0x130uLL, 1631808845);
      if ( !v14 )
      {
        v35 = Pool;
        goto LABEL_29;
      }
      v15 = 0LL;
      v16 = a8 & 0x4000;
      if ( v16 )
      {
        if ( v12 > 0x200 )
          v15 = 8LL * (_QWORD)MiComputeIdealFirstSubsection(FileObject);
        v17 = 0x200000;
      }
      else
      {
        v17 = 0x100000;
      }
      v18 = 0LL;
      v19 = 8 * v12;
      v40 = 0LL;
      if ( !v15 )
        LODWORD(v15) = v17;
      while ( 1 )
      {
        v20 = v19;
        if ( v19 >= (unsigned int)v15 )
          v20 = v15;
        if ( v18 )
        {
          v18 = MiAllocatePool(0x40uLL, 0x98uLL, 1666411853);
          if ( !v18 )
          {
            ExFreePoolWithTag(Pool, 0);
            v36 = *(_QWORD **)(v14 + 144);
            if ( v36 )
            {
              do
              {
                v38 = (_QWORD *)v36[2];
                ExFreePoolWithTag(v36, 0);
                v36 = v38;
              }
              while ( v38 );
            }
            v35 = (void *)v14;
LABEL_29:
            ExFreePoolWithTag(v35, 0);
            return -1073741670;
          }
          *(_QWORD *)(v40 + 16) = v18;
        }
        else
        {
          v18 = v14 + 128;
        }
        v40 = v18;
        *(_DWORD *)(v18 + 44) = v20 >> 3;
        v19 -= v20;
        if ( v20 < v17 )
          v20 = v17;
        LODWORD(v15) = v20;
        if ( !v19 )
        {
          *(_OWORD *)&Pool->LowPart = 0LL;
          *(_OWORD *)&Pool[2].LowPart = 0LL;
          *a3 = Pool;
          *(_OWORD *)&Pool[4].LowPart = 0LL;
          *(_QWORD *)v14 = Pool;
          *(_QWORD *)(v14 + 16) = v14 + 8;
          *(_QWORD *)(v14 + 8) = v14 + 8;
          v21 = *(_WORD *)(v14 + 60);
          *(_QWORD *)(v14 + 112) = 1LL;
          *(_QWORD *)(v14 + 24) = 1LL;
          v22 = *a2 ^ v21;
          *(_QWORD *)(v14 + 104) = 0LL;
          *(_WORD *)(v14 + 60) = v21 ^ v22 & 0x3FF;
          if ( v43 )
            *(_DWORD *)(v14 + 56) |= 0x8000u;
          else
            *(_QWORD *)(v14 + 48) = 1LL;
          *(_DWORD *)(v14 + 56) |= 2u;
          v23 = 6;
          *(_DWORD *)(v14 + 56) = (*(_DWORD *)(v14 + 56) | 0x80) ^ ((*(_DWORD *)(v14 + 56) | 0x80) ^ (a7 << 20)) & 0x7F00000;
          if ( v16 )
          {
            *(_BYTE *)(v14 + 62) = *(_BYTE *)(v14 + 62) & 0xF3 | 4;
          }
          else
          {
            if ( (a6 & 0x10000000) != 0 )
            {
              v37 = 0x2000;
              v23 = 14;
            }
            else
            {
              if ( (a6 & 0x40000000) == 0 )
                goto LABEL_22;
              v37 = 4096;
              v23 = 30;
            }
            WORD2(Pool[1].QuadPart) |= v37;
          }
LABEL_22:
          v24 = WORD2(Pool[1].QuadPart);
          v25 = (__int64 *)(v14 + 128);
          Pool[3] = v11;
          v26 = 2 * v23;
          Pool->QuadPart = v14;
          Pool[1].LowPart = v12;
          v27 = v24 ^ (v24 ^ WORD2(v12)) & 0x3FF;
          LOBYTE(v24) = BYTE6(Pool[1].QuadPart) & 0xE0;
          WORD2(Pool[1].QuadPart) = v27;
          BYTE6(Pool[1].QuadPart) = v23 | v24;
          v28 = 0LL;
          do
          {
            *v25 = v14;
            Mi4KStartForSubsection((__int64)v25, v28);
            v30 = (__int64 **)(v29 + 16);
            v31 = v26 | *(_DWORD *)(v29 + 32) & 0xFFFFFFC1;
            if ( *(_QWORD *)(v29 + 16) )
            {
              v33 = *(_DWORD *)(v29 + 44);
            }
            else
            {
              v32 = (unsigned __int64)FileSize.QuadPart >> 12;
              v31 = v26 & 0xFFFFF | *(_DWORD *)(v29 + 32) & 0xFFFC1 | (LOWORD(FileSize.LowPart) << 20);
              *(_DWORD *)(v29 + 52) ^= (*(_DWORD *)(v29 + 52) ^ (*(_DWORD *)(v29 + 44) + v28 - v12)) & 0x3FFFFFFF;
              v33 = v32 - v28;
            }
            *(_DWORD *)(v29 + 40) = v33;
            *(_DWORD *)(v29 + 32) = v31;
            v28 += *(unsigned int *)(v29 + 44);
            *(_QWORD *)(v29 + 96) = v29 + 88;
            *(_QWORD *)(v29 + 88) = v29 + 88;
            MiInsertSubsectionNode(v14, v29, 0);
            v25 = *v30;
          }
          while ( *v30 );
          return 0;
        }
      }
    }
    return -1073741760;
  }
  return result;
}
