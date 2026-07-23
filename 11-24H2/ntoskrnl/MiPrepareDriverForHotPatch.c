/*
 * XREFs of MiPrepareDriverForHotPatch @ 0x1407F5B04
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     RtlGetHotPatchSize @ 0x1406A44AC (RtlGetHotPatchSize.c)
 *     MiLockHotPatchPages @ 0x1407F3D80 (MiLockHotPatchPages.c)
 *     RtlDetermineHotPatchUndoExtent @ 0x14082F76C (RtlDetermineHotPatchUndoExtent.c)
 */

__int64 __fastcall MiPrepareDriverForHotPatch(__int64 a1)
{
  int *v1; // rsi
  unsigned int i; // r14d
  int v4; // edi
  __int64 *v5; // rcx
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int j; // ebx
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(int **)(a1 + 32);
  for ( i = RtlGetHotPatchSize(*(_DWORD **)(a1 + 24)); ; v1 = (int *)(v8 + 4LL * v6 * i) )
  {
    v4 = *v1;
    if ( !*v1 )
      break;
    v5 = (__int64 *)(a1 + 8);
    v6 = *v1 & 0xFFF;
    if ( v4 < 0 )
      v7 = *v5;
    else
      v7 = *(_QWORD *)a1;
    if ( v4 < 0 )
      v5 = (__int64 *)a1;
    v8 = (__int64)(v1 + 1);
    v9 = *v5;
    result = MiLockHotPatchPages(v7, v8, v6, i, v4, 0);
    if ( (int)result < 0 )
      return result;
    if ( (v4 & 0xFC000) == 0x5C000 )
    {
      result = MiLockHotPatchPages(v9, v8, v4 & 0xFFF, i, v4, 1u);
      if ( (int)result < 0 )
        return result;
    }
  }
  v11 = *(_QWORD *)(a1 + 40);
  if ( v11 )
  {
    v15 = 0;
    v14 = 0;
    v12 = *(_QWORD *)a1;
    for ( j = 0; (unsigned __int8)RtlDetermineHotPatchUndoExtent(v11, 1, j, (unsigned int)&v15, (__int64)&v14); ++j )
    {
      result = MiLockDriverPageRange(v12, v15, v14, 1, 0LL);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
