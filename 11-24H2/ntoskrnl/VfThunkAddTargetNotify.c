/*
 * XREFs of VfThunkAddTargetNotify @ 0x140BA64F4
 * Callers:
 *     VfTargetDriversAdd @ 0x1403F01F8 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkCreateSharedExportInformation @ 0x140BA638C (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFreeSharedThunksArray @ 0x140BA65A0 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkAddTargetNotify(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r8

  v3 = (_DWORD *)(a1 + 16);
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *(_QWORD *)a1,
                        (__int64)&VfRegularThunks,
                        a3,
                        &VfRegularThunksBitMapHeader,
                        (ULONG_PTR *)(a1 + 16))
    || !(unsigned int)ViThunkCreateSharedExportInformation(
                        *(_QWORD *)a1,
                        (__int64)&VfPoolThunks,
                        v5,
                        &VfPoolThunksBitMapHeader,
                        (ULONG_PTR *)(a1 + 24))
    || (result = ViThunkCreateSharedExportInformation(
                   *(_QWORD *)a1,
                   (__int64)&VfDifThunks,
                   v7,
                   &VfDifThunksBitMapHeader,
                   (ULONG_PTR *)(a1 + 32)),
        !(_DWORD)result) )
  {
    ViThunkFreeSharedThunksArray(v3);
    ViThunkFreeSharedThunksArray(a1 + 24);
    result = ViThunkFreeSharedThunksArray(a1 + 32);
    *v3 |= 1u;
  }
  return result;
}
