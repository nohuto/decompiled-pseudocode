/*
 * XREFs of ??1CSparseIndexMapRT@@QEAA@XZ @ 0x14008960C
 * Callers:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x14008962C (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140044DFC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

void __fastcall CSparseIndexMapRT::~CSparseIndexMapRT(CSparseIndexMapRT *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    AERTDestroyZoneHeap(v3, a2, a3);
}
