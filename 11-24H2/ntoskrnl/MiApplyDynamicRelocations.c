/*
 * XREFs of MiApplyDynamicRelocations @ 0x140C58C4C
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140C54F90 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     LdrApplyDynamicRelocations @ 0x1405EFCE8 (LdrApplyDynamicRelocations.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1408F40C4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     VslApplyDynamicRelocations @ 0x140C19930 (VslApplyDynamicRelocations.c)
 */

__int64 __fastcall MiApplyDynamicRelocations(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v15[5]; // [rsp+44h] [rbp-14h] BYREF

  v14 = 0;
  v15[0] = 0;
  if ( (MiFlags & 0x4000) != 0 )
    return VslApplyDynamicRelocations(a1, a3, a4);
  v9 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1, 0xAu, &v14);
  if ( !v9 || v14 != *v9 )
    return 0LL;
  result = LdrCaptureDynamicRelocationTableHeader(a1, a2, (__int64)v9, *v9, 0LL, 523, v15, 0LL);
  if ( (int)result >= 0 )
    return LdrApplyDynamicRelocations(a1, (_DWORD *)(a1 + v15[0]), v10, v11, v12, v13, a3, a4);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  return result;
}
