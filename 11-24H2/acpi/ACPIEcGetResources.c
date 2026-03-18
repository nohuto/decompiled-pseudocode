/*
 * XREFs of ACPIEcGetResources @ 0x14009CB88
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x14005FD10 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcGetResources(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // r11d
  _DWORD *v7; // rdx
  __int64 v8; // r10
  _DWORD *v9; // rax

  v3 = 0;
  if ( !a1 )
    return 2147483674LL;
  if ( !*a1 )
    return 3221225473LL;
  v6 = 0;
  if ( a1[4] )
  {
    v7 = a1 + 5;
    do
    {
      if ( *(_BYTE *)v7 == 1 )
      {
        v8 = (unsigned int)v7[1];
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            *(_QWORD *)(a3 + 32) = v8;
            *(_QWORD *)(a3 + 40) = v8;
          }
        }
        else
        {
          *(_QWORD *)(a3 + 24) = v8;
        }
      }
      if ( *(_BYTE *)v7 == 2 && !*(_DWORD *)(a3 + 2308) )
      {
        *(_DWORD *)(a3 + 2308) = v7[2];
        *(_BYTE *)(a3 + 2212) = 1;
      }
      ++v6;
      v7 += 5;
    }
    while ( v6 < a1[4] );
  }
  if ( *a2 && *(_BYTE *)(a3 + 2212) )
  {
    v9 = a2 + 5;
    while ( v3 < a2[4] )
    {
      if ( *(_BYTE *)v9 == 2 )
      {
        *(_OWORD *)(a3 + 2288) = *(_OWORD *)v9;
        *(_DWORD *)(a3 + 2304) = v9[4];
        return 0LL;
      }
      ++v3;
      v9 += 5;
    }
  }
  return 0LL;
}
