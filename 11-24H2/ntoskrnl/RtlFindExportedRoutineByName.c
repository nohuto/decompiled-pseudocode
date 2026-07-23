/*
 * XREFs of RtlFindExportedRoutineByName @ 0x140907090
 * Callers:
 *     PrExtControlOperations @ 0x1406627DC (PrExtControlOperations.c)
 *     KsepResolveShimHooks @ 0x14073D0EC (KsepResolveShimHooks.c)
 *     MiUnloadApproved @ 0x1407E7E7C (MiUnloadApproved.c)
 *     MmCallDllInitialize @ 0x1407E7F48 (MmCallDllInitialize.c)
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiCompactServiceTable @ 0x1407FB9AC (MiCompactServiceTable.c)
 *     MmGetSystemRoutineAddress @ 0x140906FD0 (MmGetSystemRoutineAddress.c)
 *     PspLookupEntryPoint @ 0x140C37A9C (PspLookupEntryPoint.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  _DWORD *v4; // rax
  unsigned __int64 v5; // rbp
  int v6; // r10d
  char *v7; // rdi
  char *v8; // r14
  int v9; // r9d
  PCSTR v10; // rax
  int v11; // r8d
  signed __int64 v12; // rdx
  unsigned __int8 v13; // cl
  int v14; // eax
  PVOID result; // rax
  ULONG Size; // [rsp+40h] [rbp+8h] BYREF

  Size = 0;
  v4 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &Size);
  v5 = (unsigned __int64)v4;
  if ( !v4 )
    return 0LL;
  v6 = 0;
  v7 = (char *)BaseOfImage + (unsigned int)v4[8];
  v8 = (char *)BaseOfImage + (unsigned int)v4[9];
  v9 = v4[6] - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 < v6 )
        return 0LL;
      v10 = RoutineName;
      v11 = (v6 + v9) >> 1;
      v12 = (_BYTE *)BaseOfImage + *(unsigned int *)&v7[4 * v11] - RoutineName;
      while ( 1 )
      {
        v13 = *v10;
        if ( *v10 != v10[v12] )
          break;
        ++v10;
        if ( !v13 )
        {
          v14 = 0;
          goto LABEL_8;
        }
      }
      v14 = v13 < (unsigned int)v10[v12] ? -1 : 1;
LABEL_8:
      if ( v14 >= 0 )
        break;
      if ( !v11 )
        return 0LL;
      v9 = v11 - 1;
    }
    if ( v14 <= 0 )
      break;
    v6 = v11 + 1;
  }
  if ( (unsigned int)*(unsigned __int16 *)&v8[2 * v11] >= *(_DWORD *)(v5 + 20) )
    return 0LL;
  result = (char *)BaseOfImage
         + *(unsigned int *)((char *)BaseOfImage + 4 * *(unsigned __int16 *)&v8[2 * v11] + *(unsigned int *)(v5 + 28));
  if ( (unsigned __int64)result > v5 && (unsigned __int64)result < v5 + Size )
    return 0LL;
  return result;
}
