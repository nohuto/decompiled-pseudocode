/*
 * XREFs of MiFindLargePageMemory @ 0x140A8F22C
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiInsertMdlPageNeedsZero @ 0x140217C1C (MiInsertMdlPageNeedsZero.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x1402708E0 (MiChangePageAttributeAndZeroBatch.c)
 *     MiDereferencePageChains @ 0x140270AC0 (MiDereferencePageChains.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     MiPfnZeroingNeeded @ 0x1403934B0 (MiPfnZeroingNeeded.c)
 *     MiInitializeBestCandidatesContext @ 0x1403973B0 (MiInitializeBestCandidatesContext.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1403F8E00 (MiUpdateCacheAttributeListsForPage.c)
 *     MiCreatePageChains @ 0x14048E910 (MiCreatePageChains.c)
 *     MiCleanupBestCandidatesContext @ 0x14048F3DC (MiCleanupBestCandidatesContext.c)
 *     MiGetLargestPageIndex @ 0x14048F5E0 (MiGetLargestPageIndex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFindLargePageMemory(int *a1, unsigned __int64 *a2)
{
  int *v2; // r15
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  int v5; // eax
  __int64 result; // rax
  volatile signed __int32 *v7; // r13
  _DWORD *v8; // r14
  _DWORD *Pool; // rsi
  int v10; // r8d
  unsigned int LargestPageIndex; // r12d
  unsigned __int64 v12; // rdi
  int v13; // eax
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // r14
  char v16; // r8
  bool v17; // r8
  unsigned __int64 *v18; // r10
  ULONG_PTR v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *i; // rbx
  _QWORD **v24; // rax
  __int64 *v25; // r8
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  int v28; // [rsp+70h] [rbp-90h]
  unsigned int v29; // [rsp+74h] [rbp-8Ch]
  _DWORD *v30; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v31; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-78h]
  unsigned int v33; // [rsp+90h] [rbp-70h]
  unsigned __int64 v34; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v35; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-58h]
  int *v37; // [rsp+B0h] [rbp-50h]
  _OWORD v38[2]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v39[96]; // [rsp+E0h] [rbp-20h] BYREF

  v31 = 0LL;
  v2 = a1;
  v35 = a2;
  v37 = a1;
  memset_0(v39, 0, 0x58uLL);
  v3 = *((_QWORD *)v2 + 1);
  v4 = *((_QWORD *)v2 + 2) - *((_QWORD *)v2 + 9);
  v5 = *(_DWORD *)(v3 + 4);
  v36 = v3;
  v38[0] = _mm_load_si128((const __m128i *)&_xmm);
  v38[1] = v38[0];
  result = MiSufficientAvailablePages(v3, v4 + ((unsigned __int8)-((v5 & 0x10) == 0) & 0xA0));
  if ( (_DWORD)result )
  {
    v29 = MiProtectionToCacheAttribute(v2[9]);
    result = MiCreatePageChains(v3, v2[8], v29, 0LL);
    v7 = (volatile signed __int32 *)result;
    if ( result )
    {
      *(_DWORD *)(result + 16) |= 1u;
      v8 = 0LL;
      v33 = v2[13] | 0x60100000;
      Pool = 0LL;
      v28 = 0;
      v30 = 0LL;
      v32 = qword_140E3D588;
      LargestPageIndex = MiGetLargestPageIndex();
      if ( LargestPageIndex < 3 )
      {
        do
        {
          v12 = MiPageSizes[LargestPageIndex];
          if ( v4 < v12 )
            goto LABEL_31;
          if ( v12 < *((_QWORD *)v2 + 3) )
            break;
          if ( !Pool )
          {
            Pool = (_DWORD *)MiAllocatePool(0x40uLL, 0x28uLL, 1816948045);
            if ( !Pool )
              goto LABEL_36;
            v10 = v28;
          }
          if ( !v10 )
          {
            MiInitializeBestCandidatesContext((__int64 *)&v30, (__int64)v39, v12, v4 / v12, v12);
            v8 = v30;
            v28 = 1;
          }
          if ( (int)MiFindContiguousPagesEx(
                      v36,
                      (_BYTE *)v12,
                      v32,
                      v12,
                      0,
                      v12,
                      v29,
                      v2[8],
                      255,
                      v33,
                      0,
                      0LL,
                      (__int64)v8,
                      &v31) < 0 )
            goto LABEL_31;
          v13 = *v2;
          v4 -= v12;
          v34 = v4;
          if ( (v13 & 4) == 0 )
          {
            v14 = 48 * v31 - 0x220000000000LL;
            v15 = v14 + 48 * v12;
            if ( v14 < v15 )
            {
              do
              {
                if ( MiPfnZeroingNeeded(v14, v29) )
                {
                  MiInsertMdlPageNeedsZero(v7, v14, 1LL);
                  MiUpdateCacheAttributeListsForPage((unsigned __int64 *)v38, v14, v29, v16);
                }
                v14 += 48LL;
              }
              while ( v14 < v15 );
              v2 = v37;
            }
            v8 = v30;
            v4 = v34;
          }
          v17 = 0;
          v18 = v35;
          *(_QWORD *)Pool = v31;
          v19 = v31;
          Pool[2] = LargestPageIndex;
          v20 = (_QWORD *)*v18;
          if ( *v18 )
          {
            while ( 1 )
            {
              if ( v19 >= *(v20 - 2) )
              {
                v21 = (_QWORD *)v20[1];
                if ( !v21 )
                {
                  v17 = 1;
                  break;
                }
              }
              else
              {
                v21 = (_QWORD *)*v20;
                if ( !*v20 )
                  break;
              }
              v20 = v21;
            }
          }
          RtlAvlInsertNodeEx(v18, (unsigned __int64)v20, v17, (_QWORD *)Pool + 2);
          Pool = 0LL;
          if ( !v4 )
            goto LABEL_36;
          if ( v8[3] )
          {
            v22 = v32;
          }
          else
          {
            v22 = v31 - 1;
            v32 = v31 - 1;
          }
          if ( v22 > v12 )
          {
            v10 = v28;
          }
          else
          {
LABEL_31:
            v32 = qword_140E3D588;
            ++LargestPageIndex;
            MiCleanupBestCandidatesContext((void **)&v30, v39);
            v8 = v30;
            v10 = 0;
            v28 = 0;
          }
        }
        while ( LargestPageIndex < 3 );
        if ( Pool )
          ExFreePoolWithTag(Pool, 0);
      }
LABEL_36:
      MiChangePageAttributeAndZeroBatch(v38, (__int64)v7, v29, CLFS_LSN_NULL_EXT);
      MiDereferencePageChains(v7);
      MiCleanupBestCandidatesContext((void **)&v30, v39);
      result = (__int64)v35;
      for ( i = 0LL; ; i = (_QWORD *)result )
      {
        result = *(_QWORD *)result;
        if ( !result )
          break;
      }
      while ( i )
      {
        v24 = (_QWORD **)i[1];
        v25 = i - 2;
        v26 = i;
        if ( v24 )
        {
          v27 = *v24;
          for ( i = (_QWORD *)i[1]; v27; v27 = (_QWORD *)*v27 )
            i = v27;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v26 )
              break;
            v26 = i;
          }
        }
        result = MiConvertSmallPageRangeToLarge(*v25, *((unsigned int *)v25 + 2));
      }
    }
  }
  return result;
}
