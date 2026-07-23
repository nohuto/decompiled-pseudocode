/*
 * XREFs of PnpFindAlternateStringData @ 0x140A17758
 * Callers:
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     PiAuditDeviceOperation @ 0x140A68944 (PiAuditDeviceOperation.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpFindAlternateStringData(_WORD *a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  int v5; // r10d
  __int64 result; // rax
  int v7; // ebx
  _WORD *v8; // rsi
  __int16 *v9; // rcx
  _WORD *i; // rdx
  __int16 v11; // ax
  _WORD *v12; // rcx

  v5 = (int)a1;
  if ( a2 > 2 && *a1 == 64 )
  {
    v7 = 0;
    v8 = &a1[(unsigned __int64)a2 >> 1];
    v9 = a1 + 1;
    for ( i = v9 + 1; i < v8; ++i )
    {
      v11 = *v9;
      if ( !*v9 )
        break;
      if ( v11 == 44 )
      {
        if ( ((*i - 35) & 0xFFF5) != 0 || *i == 43 )
          return 0LL;
        v7 = 1;
      }
      else if ( v11 == 59 )
      {
        if ( !v7 )
          return 0LL;
        v12 = v9 + 1;
        result = 1LL;
        *a3 = v12;
        *a4 = a2 + v5 - (_DWORD)v12;
        return result;
      }
      ++v9;
    }
  }
  return 0LL;
}
