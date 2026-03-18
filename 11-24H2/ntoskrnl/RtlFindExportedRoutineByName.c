/*
 * XREFs of RtlFindExportedRoutineByName @ 0x1408B0E30
 * Callers:
 *     PrExtControlOperations @ 0x140663EEC (PrExtControlOperations.c)
 *     KsepResolveShimHooks @ 0x14073F1BC (KsepResolveShimHooks.c)
 *     MiUnloadApproved @ 0x1407E78AC (MiUnloadApproved.c)
 *     MmCallDllInitialize @ 0x1407E7978 (MmCallDllInitialize.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiCompactServiceTable @ 0x1407FB23C (MiCompactServiceTable.c)
 *     MmGetSystemRoutineAddress @ 0x1408B0D70 (MmGetSystemRoutineAddress.c)
 *     PspLookupEntryPoint @ 0x140C3595C (PspLookupEntryPoint.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall RtlFindExportedRoutineByName(unsigned __int64 a1, unsigned __int8 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbp
  int v6; // r10d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  int v9; // r9d
  unsigned __int8 *v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // cl
  int v14; // eax
  unsigned __int64 result; // rax
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0;
  v4 = (_DWORD *)RtlImageDirectoryEntryToData(a1, 1, 0, &v16);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = 0;
  v7 = a1 + (unsigned int)v4[8];
  v8 = a1 + (unsigned int)v4[9];
  v9 = v4[6] - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 < v6 )
        return 0LL;
      v10 = a2;
      v11 = (v6 + v9) >> 1;
      v12 = a1 + *(unsigned int *)(v7 + 4LL * v11) - (_QWORD)a2;
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
      v14 = v13 < v10[v12] ? -1 : 1;
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
  if ( (unsigned int)*(unsigned __int16 *)(v8 + 2LL * v11) >= v5[5] )
    return 0LL;
  result = a1 + *(unsigned int *)(a1 + (unsigned int)v5[7] + 4LL * *(unsigned __int16 *)(v8 + 2LL * v11));
  if ( result > (unsigned __int64)v5 && result < (unsigned __int64)v5 + v16 )
    return 0LL;
  return result;
}
