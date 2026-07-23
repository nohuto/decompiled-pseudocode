/*
 * XREFs of MiDefragmentAllSlabsHelper @ 0x140687DB0
 * Callers:
 *     MiDefragmentAllSlabAllocators @ 0x140687C9C (MiDefragmentAllSlabAllocators.c)
 * Callees:
 *     MiDefragmentSlabAllocator @ 0x140687F00 (MiDefragmentSlabAllocator.c)
 *     MiDefragmentSlabWorker @ 0x140687F90 (MiDefragmentSlabWorker.c)
 *     MiInitializeSlabDefragmentContext @ 0x14068937C (MiInitializeSlabDefragmentContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiDefragmentAllSlabsHelper(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // rbp
  int v10; // eax
  _BYTE v12[624]; // [rsp+20h] [rbp-298h] BYREF

  if ( a2 )
    v6 = a2;
  else
    v6 = 232LL * *(int *)(a3 + 28) + *(_QWORD *)(a1 + 16) + 15696LL;
  v7 = *(_DWORD *)(v6 + 128);
  if ( v7 != 3 && v7 - 5 > 2 && v7 > 4 == (*(_DWORD *)(a3 + 24) == 0) )
  {
    v8 = (*(_DWORD *)(v6 + 136) >> 4) & 3;
    if ( *(_DWORD *)a3 >= v8 )
    {
      v9 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned int *)(v6 + 136) >> 4) & 3]);
      if ( *(_DWORD *)a3 <= v8
        || v8
        || *(_QWORD *)(a3 + 8) - *(_QWORD *)(a3 + 16) >= (unsigned __int64)(unsigned int)v9 >> 1 )
      {
        while ( 1 )
        {
          if ( a2 )
          {
            v10 = MiDefragmentSlabAllocator(a1, a2);
          }
          else
          {
            memset_0(v12, 0, 0x268uLL);
            MiInitializeSlabDefragmentContext(v12, a1, 0LL, *(unsigned int *)(a3 + 28));
            v10 = MiDefragmentSlabWorker(v12);
          }
          if ( v10 )
            break;
          *(_QWORD *)(a3 + 16) += v9;
          if ( *(_QWORD *)(a3 + 16) >= *(_QWORD *)(a3 + 8) )
            return 1LL;
        }
      }
    }
  }
  return 0LL;
}
