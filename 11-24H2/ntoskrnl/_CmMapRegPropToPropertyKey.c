/*
 * XREFs of _CmMapRegPropToPropertyKey @ 0x1409C4D28
 * Callers:
 *     _CmRaisePropertyChangeEvent @ 0x1409C42C4 (_CmRaisePropertyChangeEvent.c)
 * Callees:
 *     <none>
 */

DEVPROPKEY *__fastcall CmMapRegPropToPropertyKey(int a1, int a2)
{
  __int64 v2; // r8
  int v4; // ecx
  DEVPROPKEY **v5; // rcx
  unsigned int v6; // r9d
  unsigned int i; // edx
  DEVPROPKEY **v8; // rax

  v2 = 0LL;
  v4 = a1 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return (DEVPROPKEY *)v2;
    v5 = &CmClassRegPropMap;
    v6 = 9;
  }
  else
  {
    v5 = &CmDeviceRegPropMap;
    v6 = 33;
  }
  for ( i = 0; i < v6; ++i )
  {
    v8 = v5;
    if ( *((_DWORD *)v5 + 3) == a2 )
      break;
    v5 += 3;
    v8 = 0LL;
  }
  if ( v8 )
    return *v8;
  return (DEVPROPKEY *)v2;
}
