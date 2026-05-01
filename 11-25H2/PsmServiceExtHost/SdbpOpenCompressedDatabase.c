/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x18009BDB4
 * Callers:
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x180091E98 (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x180093C6C (SdbpOpenDatabaseInMemory.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v5; // rbx
  __m128i *v8; // rax
  PVOID Heap; // rbp
  _DWORD *v11; // rax
  unsigned __int32 Size; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = a2;
  v3 = *a1;
  v4 = 0;
  LODWORD(v13) = 0;
  v5 = 0LL;
  if ( g_ExpandCallback
    && *(_DWORD *)(v3 + 20) >= 0x14u
    && (v8 = *(__m128i **)(v3 + 8), Size = v8[1].m128i_u32[0], v8->m128i_i32[2] == 1717724282)
    && _mm_cvtsi128_si32(_mm_srli_si128(*v8, 12)) == g_ExpectedAlgorithm
    && (LODWORD(v13) = v8[1].m128i_i32[0], (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size)) != 0LL) )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(PVOID, __int64 *, __int64, _QWORD))g_ExpandCallback)(
                         Heap,
                         &v13,
                         *(_QWORD *)(v3 + 8) + 20LL,
                         (unsigned int)(*(_DWORD *)(v3 + 20) - 20)) )
    {
      v11 = SdbpOpenDatabaseInMemory((__int64)Heap, v13, a3);
      v5 = (__int64)v11;
      if ( v11 )
      {
        v11[6] |= 0xCu;
        v4 = 1;
        LODWORD(v13) = 0;
        goto LABEL_11;
      }
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    AslFree(NtCurrentPeb()->ProcessHeap, Heap);
    LODWORD(v13) = 0;
    if ( v5 )
    {
      SdbCloseDatabaseRead(v5);
      v5 = 0LL;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
LABEL_11:
  SdbCloseDatabaseRead(*a1);
  *a1 = v5;
  return v4;
}
