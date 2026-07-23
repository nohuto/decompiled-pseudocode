/*
 * XREFs of MiSetHintSlabEntry @ 0x140451A7C
 * Callers:
 *     MiGetPageFromSlabAllocatorByIdentity @ 0x1404C3D84 (MiGetPageFromSlabAllocatorByIdentity.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetHintSlabEntry(__int64 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( a2 == 0xFF )
      return;
    if ( a3 )
      v5 = *(_QWORD *)(a1 + 32);
    else
      v5 = *(_QWORD *)(a1 + 40);
    v4 = (_QWORD *)(v5 + 8LL * a2);
  }
  else
  {
    v4 = (_QWORD *)(a1 + 32);
    if ( !a3 )
      v4 = (_QWORD *)(a1 + 40);
  }
  if ( v4 )
    *v4 = a4;
}
