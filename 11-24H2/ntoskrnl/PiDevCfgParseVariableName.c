/*
 * XREFs of PiDevCfgParseVariableName @ 0x140417FA0
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1405A3EAC (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0 (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 */

bool __fastcall PiDevCfgParseVariableName(_WORD *a1, UNICODE_STRING *a2, _DWORD *a3)
{
  const WCHAR *i; // rbx
  int v5; // edi
  WCHAR v6; // ax
  int v8; // eax

  i = 0LL;
  v5 = 0;
  if ( *a1 == 36 )
  {
    for ( i = a1 + 1; ; ++i )
    {
      v6 = *i;
      if ( !*i )
        break;
      if ( v6 == 63 )
      {
        v8 = 0x10000;
      }
      else if ( v6 == 33 )
      {
        v8 = 0x20000;
      }
      else if ( v6 == 43 )
      {
        v8 = 0x40000;
      }
      else
      {
        if ( v6 != 45 )
        {
          if ( v6 == 36 )
            ++i;
          break;
        }
        v8 = 0x80000;
      }
      v5 |= v8;
    }
  }
  RtlInitUnicodeString(a2, i);
  *a3 = v5;
  return i != 0LL;
}
