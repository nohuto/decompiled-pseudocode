/*
 * XREFs of MiCreateVsmEnclave @ 0x1407F7CA0
 * Callers:
 *     MiCreateEnclave @ 0x1407F77F4 (MiCreateEnclave.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     PsCreateVsmEnclave @ 0x140A7F734 (PsCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateVsmEnclave(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 ProcessPartition; // rax
  int v7; // r8d
  _BYTE *v8; // r9
  int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rdx
  BOOL v12; // ebx
  __int64 result; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  if ( (ULONG *)ProcessPartition == &MiSystemPartition )
    LODWORD(v11) = 0;
  else
    v11 = *(_QWORD *)(ProcessPartition + 184);
  v12 = 0;
  if ( a5 >= 4 )
    v12 = (*v8 & 1) != 0;
  result = PsCreateVsmEnclave(
             v9,
             v11,
             a2[6] << 12,
             ((a2[7] << 12) | 0xFFFu) - (a2[6] << 12) + 1,
             v7 == 17,
             v10,
             a5,
             (__int64)(a2 + 18));
  if ( (int)result >= 0 )
  {
    if ( v12 )
      a2[16] |= 4u;
    return 0LL;
  }
  return result;
}
