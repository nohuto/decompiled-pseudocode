/*
 * XREFs of MiCopyPtes @ 0x14038D998
 * Callers:
 *     MiCopyTopLevelMappings @ 0x14038D368 (MiCopyTopLevelMappings.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MxCopyPage @ 0x140C54604 (MxCopyPage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 */

__int64 __fastcall MiCopyPtes(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  ULONG_PTR v4; // r14
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a3;
    v4 = a2 - (_QWORD)BugCheckParameter2;
    v5 = BugCheckParameter2;
    do
    {
      v6 = *(_QWORD *)((char *)v5 + v4);
      if ( (v6 & 1) != 0 && _bittest64(&MiFlags, 0x24u) && (v6 & 0x20) == 0 )
      {
        result = 0xFFFFF6C000000000uLL;
        if ( (unsigned __int64)v5 >= 0xFFFFF6C000000000uLL )
          result = MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v5, *(_QWORD *)((char *)v5 + v4), 128LL);
      }
      *v5++ = v6;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
