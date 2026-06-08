/*
 * XREFs of PepQueryPlatformStateResidency @ 0x140003E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepQueryPlatformStateResidency(_QWORD *a1, int *a2)
{
  _DWORD *v2; // r8
  int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v9; // [rsp+28h] [rbp-10h]

  v2 = a2 + 2;
  v8[1] = 0;
  v4 = *a2;
  v5 = 0;
  v8[0] = v4;
  v9 = v2;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = v5++;
      v6 *= 2LL;
      *(_QWORD *)&v2[2 * v6] = -1LL;
      *(_QWORD *)&v9[2 * v6 + 2] = 0LL;
      if ( v5 >= v8[0] )
        break;
      v2 = v9;
    }
  }
  return PoFxProcessorNotification(*a1, 23LL, v8);
}
