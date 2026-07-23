/*
 * XREFs of PopPepCancelActivityRange @ 0x1403A6190
 * Callers:
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPepCancelActivityRange(__int64 a1, int a2, int a3, int a4, volatile signed __int32 *a5)
{
  int **v5; // r11
  int *v6; // rax
  __int64 v7; // r8
  int v8; // r9d

  if ( a3 <= a4 )
  {
    v5 = (int **)(a1 + 8LL * a3);
    v6 = &dword_140001028[34 * a2 + a3];
    v7 = (unsigned int)(a4 - a3 + 1);
    do
    {
      if ( *v6 )
      {
        v8 = **v5;
        if ( (*v6 & v8) != 0 )
        {
          if ( (v8 & 2) != 0 )
            _InterlockedDecrement(a5);
          **v5 &= 0xFFFFFFFC;
        }
      }
      ++v6;
      ++v5;
      --v7;
    }
    while ( v7 );
  }
}
