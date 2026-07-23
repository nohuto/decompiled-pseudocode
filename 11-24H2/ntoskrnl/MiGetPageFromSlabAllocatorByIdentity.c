/*
 * XREFs of MiGetPageFromSlabAllocatorByIdentity @ 0x1404C3D84
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     MiGetPageFromSlabEntry @ 0x14021DA94 (MiGetPageFromSlabEntry.c)
 *     MiSetHintSlabEntry @ 0x140451A7C (MiSetHintSlabEntry.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocatorByIdentity(__int64 a1, unsigned __int8 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r15
  _QWORD *i; // r14
  _QWORD *v10; // rdi
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v6 = (_QWORD *)(a1 + 32);
    goto LABEL_5;
  }
  if ( a2 != 0xFF )
  {
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * a2);
LABEL_5:
    if ( v6 && *v6 == 1LL )
      return -1LL;
  }
  v7 = 0LL;
  v8 = 16LL * a2;
  for ( i = *(_QWORD **)(v8 + *(_QWORD *)(a1 + 88)); i != (_QWORD *)(v8 + *(_QWORD *)(a1 + 88)); i = (_QWORD *)*i )
  {
    v10 = i - 3;
    if ( i - 3 == *(_QWORD **)(a1 + 48) )
    {
      v7 = (__int64)(i - 3);
    }
    else
    {
      result = MiGetPageFromSlabEntry((__int64)(i - 3), a1);
      if ( result != -1 )
        goto LABEL_15;
    }
  }
  if ( v7 )
  {
    *(_QWORD *)(a1 + 48) = v7 | 2;
    v10 = (_QWORD *)v7;
    result = MiGetPageFromSlabEntry(v7, a1);
    if ( result != -1 )
    {
LABEL_15:
      *a3 = v10;
      return result;
    }
  }
  MiSetHintSlabEntry(a1, a2, 1, 1LL);
  return -1LL;
}
