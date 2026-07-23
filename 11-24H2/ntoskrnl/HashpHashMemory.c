/*
 * XREFs of HashpHashMemory @ 0x140830304
 * Callers:
 *     MinCryptHashMemory @ 0x1406A01F4 (MinCryptHashMemory.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HashpFinalizeHash @ 0x14083088C (HashpFinalizeHash.c)
 *     HashpHashBytes @ 0x1408308F8 (HashpHashBytes.c)
 *     HashpInitHash @ 0x140830970 (HashpInitHash.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HashpHashMemory(int a1, unsigned int a2, __int64 a3, void *a4, __int64 a5)
{
  char v5; // r15
  __int64 v7; // rdi
  _DWORD *Pool2; // rax
  void *v11; // rsi
  int inited; // ebp
  size_t v13; // rdi
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rbx

  v5 = byte_140EEFF40;
  v7 = a2;
  if ( byte_140EEFF40 )
    Pool2 = ExAllocateFromPagedLookasideList(&stru_140E65A80);
  else
    Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL, 0xF0uLL, 0x72634943u);
  v11 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = a1;
    inited = HashpInitHash(Pool2, a5);
    if ( inited >= 0 )
    {
      if ( (_DWORD)v7 )
      {
        v18 = v7;
        do
        {
          if ( *(_DWORD *)a3 )
            HashpHashBytes(v11, *(_QWORD *)(a3 + 8));
          a3 += 16LL;
          --v18;
        }
        while ( v18 );
      }
      HashpFinalizeHash(v11, a4);
      goto LABEL_24;
    }
  }
  else
  {
    inited = -1073741801;
  }
  v13 = 0LL;
  v14 = a1 - 32771;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 8;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            v13 = 64LL;
        }
        else
        {
          v13 = 48LL;
        }
      }
      else
      {
        v13 = 32LL;
      }
    }
    else
    {
      v13 = 20LL;
    }
  }
  else
  {
    v13 = 16LL;
  }
  memset_0(a4, 0, v13);
  if ( v11 )
  {
LABEL_24:
    if ( v5 )
      ExFreeToPagedLookasideList(&stru_140E65A80, v11);
    else
      ExFreePoolWithTag(v11, 0x72634943u);
  }
  return (unsigned int)inited;
}
