/*
 * XREFs of ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x180227B5C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180222AAC (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180032FC0 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetProjectedShadowCasters(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  _DWORD *v4; // r11
  __int64 result; // rax
  __int64 v6; // rcx
  char v7; // r10
  __int64 v8; // r11
  _QWORD *v9; // r10
  __int64 v10; // r11
  __int64 v11; // r10

  v2 = (__int64 *)(a1 + 232);
  v4 = (_DWORD *)*v2;
  result = *(unsigned int *)*v2;
  if ( a2 )
  {
    if ( (result & 0x80000) != 0 )
    {
      result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 13);
      if ( (unsigned int)result < *(_DWORD *)(v10 + 4) )
      {
        v11 = 8LL * (unsigned int)result;
        result = ((unsigned __int8)*(_DWORD *)(v10 + 4) + 15) & 7;
        v9 = (_QWORD *)(*(unsigned int *)(v10 + 4) + 15LL + v10 + v11 - result);
      }
      *v9 = a2;
    }
    else
    {
      result = (__int64)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)v2, 13);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (result & 0x80000) != 0 )
  {
    v6 = *v2;
    *v4 = result & 0xFFF7FFFF;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v6, 13);
    if ( (unsigned int)result < *(_DWORD *)(v8 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v8 + 8) = v7;
    }
  }
  return result;
}
