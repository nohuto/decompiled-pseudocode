/*
 * XREFs of ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14008FEF4
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14008FC40 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140042740 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140043C0C (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140044DFC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140076B0C (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 */

__int64 __fastcall CSparseIndexMapRT::SetMapSize(CSparseIndexMapRT *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 <= *((_DWORD *)this + 4) )
    goto LABEL_11;
  if ( *((_QWORD *)this + 3) )
    *((_QWORD *)this + 3) = 0LL;
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    AERTDestroyZoneHeap(v6, a2, a3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = (void *)AERTCreateZoneHeap(4 * v4);
  *((_QWORD *)this + 1) = v7;
  if ( v7 )
  {
    v8 = AERTZoneAllocate(4 * v4, v7);
    *((_QWORD *)this + 3) = v8;
    if ( !v8 )
    {
      v3 = -2147024882;
      AERTDestroyZoneHeap(*((_QWORD *)this + 1), v9, v10);
      *((_QWORD *)this + 1) = 0LL;
      return v3;
    }
    AERTLockZoneHeap(v8, v9, v10);
    *((_DWORD *)this + 4) = v4;
LABEL_11:
    *(_DWORD *)this = v4;
    return v3;
  }
  return (unsigned int)-2147024882;
}
