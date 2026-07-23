/*
 * XREFs of MiApplyDynamicRelocations @ 0x140C5ADDC
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140C57120 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     LdrApplyDynamicRelocations @ 0x1405ED2C8 (LdrApplyDynamicRelocations.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x14093E62C (LdrCaptureDynamicRelocationTableHeader.c)
 *     VslApplyDynamicRelocations @ 0x140C1B968 (VslApplyDynamicRelocations.c)
 */

__int64 __fastcall MiApplyDynamicRelocations(char *BaseOfImage, ULONG64 Size, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 result; // rax
  unsigned int *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+28h] [rbp-30h]
  ULONG Sizea; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+44h] [rbp-14h] BYREF

  Sizea = 0;
  LODWORD(v15) = 0;
  v6 = Size;
  if ( (MiFlags & 0x4000) != 0 )
    return VslApplyDynamicRelocations((__int64)BaseOfImage, a3, a4);
  v9 = (unsigned int *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Sizea);
  if ( !v9 || Sizea != *v9 )
    return 0LL;
  result = LdrCaptureDynamicRelocationTableHeader(BaseOfImage, v6, (__int64)v9, *v9, 0LL, 523, &v15, 0LL);
  if ( (int)result >= 0 )
    return LdrApplyDynamicRelocations((__int64)BaseOfImage, &BaseOfImage[(unsigned int)v15], v10, v11, v12, v13, a3, a4);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  return result;
}
