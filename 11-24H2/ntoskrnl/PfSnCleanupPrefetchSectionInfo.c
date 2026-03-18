/*
 * XREFs of PfSnCleanupPrefetchSectionInfo @ 0x14096BB78
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x14096A900 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PfpOpenHandleClose @ 0x14096B934 (PfpOpenHandleClose.c)
 */

void __fastcall PfSnCleanupPrefetchSectionInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  void *v7; // rcx
  void *v8; // rcx

  if ( (_BYTE)a3 )
  {
    v6 = *(_DWORD *)(a1 + 48);
    if ( (v6 & 1) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 32));
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_DWORD *)(a1 + 48) &= ~1u;
      v6 = *(_DWORD *)(a1 + 48);
    }
    if ( (v6 & 2) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 40));
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_DWORD *)(a1 + 48) &= ~2u;
      v6 = *(_DWORD *)(a1 + 48);
    }
    if ( (v6 & 4) != 0 )
    {
      PfpOpenHandleClose(a1, *(_QWORD *)(a2 + 8), a3, a4);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0x200000000LL;
      *(_DWORD *)(a1 + 48) &= ~4u;
    }
  }
  else
  {
    v7 = *(void **)(a1 + 32);
    if ( v7 )
      ObfDereferenceObject(v7);
    v8 = *(void **)(a1 + 40);
    if ( v8 )
      ObfDereferenceObject(v8);
    if ( _bittest64((const signed __int64 *)(a1 + 24), 0x22u) )
      PfpOpenHandleClose(a1, *(_QWORD *)(a2 + 8), a3, a4);
  }
}
