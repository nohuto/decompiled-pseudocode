/*
 * XREFs of HsaSetDeviceSvmCapabilities @ 0x140570D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaSetDeviceSvmCapabilities(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = **(unsigned int **)(a2 + 40);
  if ( (unsigned int)v2 >= 0x10000 )
    return 3221225485LL;
  else
    return v2 >= *(_QWORD *)(a1 + 40) >> 5 ? 0xC000000D : 0;
}
