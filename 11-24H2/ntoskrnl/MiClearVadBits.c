/*
 * XREFs of MiClearVadBits @ 0x140291DCC
 * Callers:
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 * Callees:
 *     MiClearVadCellBits @ 0x140291EE4 (MiClearVadCellBits.c)
 */

struct _KTHREAD *__fastcall MiClearVadBits(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  __int64 v11; // rsi
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a1 >> 16;
  v6 = a2 >> 16;
  v7 = 0;
  if ( a3
    && ((a1 ^ ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    LODWORD(v5) = v5 + 1;
  }
  if ( a4
    && ((a2 ^ ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    result = (struct _KTHREAD *)(v6 - 1);
    if ( !v6 )
      return result;
    LODWORD(v6) = v6 - 1;
  }
  result = KeGetCurrentThread();
  v12 = 0;
  Process = result->ApcState.Process;
  v11 = (__int64)&Process[2].ActiveProcessors[2].StaticBitmap[29];
  if ( Process[2].ActiveProcessors[3].StaticBitmap[23] )
  {
    LODWORD(result) = 0;
    do
    {
      MiClearVadCellBits(v11 + 72 * (_DWORD)result, v5, v6, v4, a4, (__int64)&v12);
      result = (struct _KTHREAD *)++v7;
    }
    while ( (unsigned __int64)v7 < *(_QWORD *)(v11 + 216) );
  }
  return result;
}
