/*
 * XREFs of IoSetFsTrackOffsetState @ 0x140435360
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x140435420 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int16 v6; // dx
  __int64 IrpExtension; // rax

  if ( *(char *)(a1 + 71) >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 200);
    if ( v5 )
    {
      v6 = *(_WORD *)(v5 + 2);
      if ( (v6 & 0x92) != 0 )
      {
        if ( (v6 & 2) == 0 )
          return 3221225659LL;
        *(_QWORD *)(v5 + 40) = 0LL;
        *(_WORD *)(v5 + 2) = v6 & 0xFFFE;
      }
    }
  }
  IrpExtension = IopAllocateIrpExtension(a1, 5LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_QWORD *)(IrpExtension + 40) = a2;
  *(_QWORD *)(IrpExtension + 48) = a3;
  return 0LL;
}
