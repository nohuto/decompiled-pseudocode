/*
 * XREFs of ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140609018
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     SmFpPreAllocate @ 0x1404BE790 (SmFpPreAllocate.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  unsigned int i; // ecx
  char *v5; // rdx
  char *v6; // rax
  __int64 result; // rax
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v9[2]; // [rsp+28h] [rbp-10h] BYREF
  char v10; // [rsp+30h] [rbp-8h] BYREF

  v9[0] = 1048832;
  v2 = 21;
  v8[0] = 1049217;
  v9[1] = 1049217;
  v3 = *(_DWORD *)(a1 + 2000);
  if ( (v3 & 2) != 0 )
    v2 = 1048597;
  v8[1] = v2;
  if ( (v3 & 1) == 0 )
  {
    for ( i = 0; i < 2; ++i )
    {
      v5 = &v10;
      if ( !i )
        v5 = (char *)v9;
      v6 = (char *)v9;
      if ( !i )
        v6 = (char *)v8;
      while ( v6 < v5 )
      {
        *(_DWORD *)v6 &= 0xF00FFFFF;
        v6 += 4;
      }
    }
  }
  result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 1704), v8, 2u);
  if ( (int)result >= 0 )
  {
    result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 1584), v9, 2u);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
