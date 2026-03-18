/*
 * XREFs of ?Reset@?$DynArray@PEAVCResource@@$0A@@@QEAAXH@Z @ 0x1801EC2AC
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18013319C (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1801CA14C (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DynArray<CResource *,0>::Reset(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = 0;
  v2 = *(void **)a1;
  if ( v2 != *(void **)(a1 + 8) )
  {
    operator delete(v2);
    *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
    result = *(unsigned int *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
