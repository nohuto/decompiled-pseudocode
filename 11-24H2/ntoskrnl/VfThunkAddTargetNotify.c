/*
 * XREFs of VfThunkAddTargetNotify @ 0x140BA84F4
 * Callers:
 *     VfTargetDriversAdd @ 0x1403E3ED4 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkCreateSharedExportInformation @ 0x140BA838C (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFreeSharedThunksArray @ 0x140BA85A0 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkAddTargetNotify(__int64 *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r8

  v3 = a1 + 2;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        (__int64)&VfRegularThunks,
                        a3,
                        &VfRegularThunksBitMapHeader,
                        a1 + 2)
    || !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        (__int64)&VfPoolThunks,
                        v5,
                        &VfPoolThunksBitMapHeader,
                        a1 + 3)
    || (result = ViThunkCreateSharedExportInformation(*a1, (__int64)&VfDifThunks, v7, &VfDifThunksBitMapHeader, a1 + 4),
        !(_DWORD)result) )
  {
    ViThunkFreeSharedThunksArray(v3);
    ViThunkFreeSharedThunksArray(a1 + 3);
    result = ViThunkFreeSharedThunksArray(a1 + 4);
    *v3 |= 1u;
  }
  return result;
}
