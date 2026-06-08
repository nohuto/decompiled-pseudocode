/*
 * XREFs of AmdPrepareEnergyValue @ 0x140002C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AmdPrepareEnergyValue(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rdx

  v3 = 0LL;
  v5 = a2;
  v7 = 0LL;
  v8 = 6LL * a2;
  if ( a2 >= 0 )
  {
    if ( a2 >= 2 )
    {
      if ( a2 < 3 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
        if ( v15 )
          v7 = v15 + 40LL * (a2 - 2);
      }
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
      if ( v9 )
        v7 = v9 + 40 * v5;
    }
  }
  v10 = *((int *)&unk_14001501C + 2 * v8);
  if ( (int)v10 >= 0 )
  {
    if ( (int)v10 >= 2 )
    {
      if ( (int)v10 < 3 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
        if ( v16 )
          v3 = v16 + 40LL * ((int)v10 - 2);
      }
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
      if ( v11 )
        v3 = v11 + 40 * v10;
    }
  }
  v12 = *(_QWORD *)(v7 + 16);
  v13 = a3 - v12 + 0xFFFFFFFF;
  if ( a3 >= v12 )
    v13 = a3 - v12;
  result = *(_QWORD *)(v3 + 32) * v13;
  *(_QWORD *)(v7 + 32) += result;
  return result;
}
