/*
 * XREFs of HalpGetAvailableProximityId @ 0x140C133D0
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140C139F8 (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetAvailableProximityId()
{
  unsigned int v0; // r8d
  unsigned int v1; // edx
  unsigned int v2; // r9d
  __int64 v3; // rbx
  unsigned int *v4; // r10
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int64 result; // rax
  unsigned int v8; // ecx
  _DWORD *v9; // rdx

  v0 = 0;
  v1 = -1;
  v2 = *(_DWORD *)(HalpNumaConfig + 56);
  if ( !v2 )
    return v1 - 1;
  v3 = v2;
  v4 = *(unsigned int **)(HalpNumaConfig + 24);
  do
  {
    v5 = *v4;
    v6 = *v4++;
    if ( v1 <= v5 )
      v6 = v1;
    v1 = v6;
    if ( v0 >= v5 )
      v5 = v0;
    v0 = v5;
    --v3;
  }
  while ( v3 );
  if ( v6 )
    return v1 - 1;
  if ( v5 != -1 )
    return v5 + 1;
  for ( result = 4294967294LL; (_DWORD)result; result = (unsigned int)(result - 1) )
  {
    v8 = 0;
    v9 = *(_DWORD **)(HalpNumaConfig + 24);
    do
    {
      if ( (_DWORD)result == *v9 )
        break;
      ++v8;
      ++v9;
    }
    while ( v8 < v2 );
    if ( v8 == v2 )
      return result;
  }
  return 0LL;
}
