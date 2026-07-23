/*
 * XREFs of IoInitializeIrpPriv @ 0x1404325B0
 * Callers:
 *     IoInitializeIrpEx @ 0x140432550 (IoInitializeIrpEx.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IovInitializeIrp @ 0x140BAB428 (IovInitializeIrp.c)
 */

char *__fastcall IoInitializeIrpPriv(char *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  size_t v5; // rsi
  char *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (char)a3;
  v5 = (unsigned __int16)a2;
  if ( (MmVerifierData & 0x10) != 0 )
    IovInitializeIrp(a1, a2, a3, retaddr);
  memset_0(a1, 0, v5);
  *((_WORD *)a1 + 1) = v5;
  a1[67] = v4 + 1;
  *(_WORD *)a1 = 6;
  a1[66] = v4;
  a1[70] = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)a1 + 5) = a1 + 32;
  *((_QWORD *)a1 + 4) = a1 + 32;
  result = &a1[64 * v4 + 208 + 8 * v4];
  *((_QWORD *)a1 + 23) = result;
  return result;
}
