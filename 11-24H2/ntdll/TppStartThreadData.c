/*
 * XREFs of TppStartThreadData @ 0x180084D10
 * Callers:
 *     TppJobpExecuteCallback @ 0x180084A50 (TppJobpExecuteCallback.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall TppStartThreadData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _QWORD *ThreadPoolData; // r10
  unsigned int v7; // eax
  _QWORD *v8; // rdx

  result = NtCurrentTeb();
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v7 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    *((_DWORD *)ThreadPoolData + 3) = v7;
    v8 = &ThreadPoolData[4 * v7];
    v8[4] = a2;
    v8[6] = a4;
    v8[5] = a3;
    result = (struct _TEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    v8[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    *a1 = v8 + 4;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
