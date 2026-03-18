/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1400CD290
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F2030 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v5; // r12
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+58h] [rbp+10h]

  v5 = a3;
  v8 = a3 + a4;
  if ( *((_QWORD *)a2 + 5133) && a3 < v8 )
  {
    v9 = 16LL * a3;
    v10 = a4;
    do
    {
      v11 = *((_QWORD *)this + 4);
      v12 = *(_QWORD *)(v9 + v11);
      if ( (v12 & 1) != 0 )
      {
        v13 = (v12 >> 5) & 0x1F;
        v21 = *(_QWORD *)(v9 + v11 + 8);
        if ( *((_QWORD *)a2 + 5133) )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)a2 + 41008, 0LL);
          *((_QWORD *)a2 + 5127) = KeGetCurrentThread();
          v14 = *((unsigned int *)a2 + 10268);
          if ( (_DWORD)v14 == dword_1400814D4 )
          {
            *((_DWORD *)a2 + 10268) = 0;
            v14 = 0LL;
          }
          v15 = *((_QWORD *)a2 + 5133) + 48 * v14;
          *(_QWORD *)v15 = MEMORY[0xFFFFF78000000014];
          *(_DWORD *)(v15 + 36) = v13;
          *(_QWORD *)(v15 + 8) = v21;
          *(_QWORD *)(v15 + 24) = 0LL;
          *(_DWORD *)(v15 + 32) = 1;
          *(_QWORD *)(v15 + 16) = 1LL;
          *(_DWORD *)(v15 + 40) = *((_DWORD *)a2 + 10250);
          ++*((_DWORD *)a2 + 10268);
          *((_QWORD *)a2 + 5127) = 0LL;
          ExReleasePushLockExclusiveEx((char *)a2 + 41008, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v9 += 16LL;
      --v10;
    }
    while ( v10 );
    v16 = 0;
  }
  else
  {
    v16 = 0;
    if ( a3 >= v8 )
      return;
  }
  v17 = 16 * v5;
  v18 = v8 - (unsigned int)v5;
  do
  {
    v19 = *((_QWORD *)this + 4);
    if ( (*(_BYTE *)(v19 + v17) & 1) != 0 )
    {
      --*((_DWORD *)this + 1);
      v16 = 1;
      *(_QWORD *)(v19 + v17) = 0LL;
      *(_QWORD *)(v17 + *((_QWORD *)this + 4) + 8) = 0LL;
      v20 = *((_QWORD *)this + 5);
      if ( v20 )
      {
        *(_QWORD *)(v17 + v20) = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 5) + v17 + 8) = 0LL;
      }
    }
    v17 += 16LL;
    --v18;
  }
  while ( v18 );
  if ( v16 )
    *a5 = 1;
}
