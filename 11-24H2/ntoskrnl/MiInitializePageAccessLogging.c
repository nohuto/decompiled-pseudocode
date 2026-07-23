/*
 * XREFs of MiInitializePageAccessLogging @ 0x140469B1C
 * Callers:
 *     MiGetCcAccessLog @ 0x14093A7A4 (MiGetCcAccessLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageAccessLogging(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  *(_QWORD *)(a2 + 32) = a2 + 64;
  v3 = (_QWORD *)(a2 + a3 - 8);
  *(_DWORD *)(a2 + 8) = 0;
  *v3 = 0LL;
  *(_QWORD *)(a2 + 48) = v3;
  *(_QWORD *)(a2 + 40) = v3 - 1;
  *(_QWORD *)a2 = 0LL;
  v4 = a1 - 1024;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    v4 = 0LL;
  *(_QWORD *)(a2 + 56) = v4;
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a2 + 16) = MEMORY[0xFFFFF78000000320];
  return result;
}
