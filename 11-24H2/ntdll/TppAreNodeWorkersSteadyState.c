/*
 * XREFs of TppAreNodeWorkersSteadyState @ 0x1800EA638
 * Callers:
 *     TppWorkerFindTask @ 0x18004FB00 (TppWorkerFindTask.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppAreNodeWorkersSteadyState(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r9d
  int v3; // r8d
  int *v4; // r10
  __int64 v5; // r11
  int v6; // ecx
  int v7; // eax

  v1 = 0;
  v2 = 0x7FFFFFFF;
  v3 = 0;
  if ( TppNumberNodes )
  {
    v4 = *(int **)(a1 + 40);
    v5 = (unsigned int)TppNumberNodes;
    do
    {
      v6 = *v4;
      v7 = *v4++;
      if ( v3 >= v6 )
        v7 = v3;
      v3 = v7;
      if ( v2 <= v6 )
        v6 = v2;
      v2 = v6;
      --v5;
    }
    while ( v5 );
  }
  if ( v2 > 0 && v3 - v2 < 4 )
    return 1;
  return v1;
}
