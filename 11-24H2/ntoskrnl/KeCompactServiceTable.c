/*
 * XREFs of KeCompactServiceTable @ 0x1405B2400
 * Callers:
 *     MiCompactServiceTable @ 0x1407FB9AC (MiCompactServiceTable.c)
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     KiLockServiceTable @ 0x1406964A8 (KiLockServiceTable.c)
 */

__int64 __fastcall KeCompactServiceTable(int *a1, unsigned __int8 *a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int8 *v5; // rbx
  int *v6; // r11
  __int64 v7; // rdi
  unsigned int v8; // eax

  v5 = a2;
  v6 = a1;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *v5++;
      *v6 = (v8 >> 2) | (16 * (*v6 + a5 - (_DWORD)a1));
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return KiLockServiceTable(a1, a2);
}
