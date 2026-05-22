/*
 * XREFs of ?FlushInteresting@DragRecognizer@@UEAAXW4GestureType@@@Z @ 0x1801ADDD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DragRecognizer::FlushInteresting(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( ((unsigned int)result & a2) != 0 )
  {
    result = *(_QWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 30) &= ~8u;
    *(_QWORD *)(a1 + 64) = result;
  }
  return result;
}
