/*
 * XREFs of VfThunkRemoveTargetNotify @ 0x140B972BC
 * Callers:
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x140BA65A0 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkRemoveTargetNotify(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 1) == 0 )
  {
    ((void (*)(void))ViThunkFreeSharedThunksArray)();
    ViThunkFreeSharedThunksArray(a1 + 24);
    return ViThunkFreeSharedThunksArray(a1 + 32);
  }
  return result;
}
