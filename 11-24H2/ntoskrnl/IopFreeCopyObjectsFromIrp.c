/*
 * XREFs of IopFreeCopyObjectsFromIrp @ 0x14025F930
 * Callers:
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 * Callees:
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14025F988 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopUnlockAndFreeMdl @ 0x14025FCC8 (IopUnlockAndFreeMdl.c)
 */

__int64 __fastcall IopFreeCopyObjectsFromIrp(__int64 a1)
{
  __int64 result; // rax
  struct _MDL *v3; // rcx

  result = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0
    && result
    && _bittest16((const signed __int16 *)(result + 2), 9u)
    && *(_QWORD *)(a1 + 112) )
  {
    v3 = *(struct _MDL **)(a1 + 8);
    if ( v3 )
    {
      IopUnlockAndFreeMdl(v3);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    return IopFreeCopyObjectsFromDataBuffer(*(_QWORD *)(a1 + 112), 0LL);
  }
  return result;
}
