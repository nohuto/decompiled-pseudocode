/*
 * XREFs of IidValidateDeviceId @ 0x140817884
 * Callers:
 *     PipIommuRetrieveDeviceId @ 0x140733FE8 (PipIommuRetrieveDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IidValidateDeviceId(__int64 a1, __int64 a2)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8

  if ( (unsigned int)(*(_DWORD *)a1 - 1) > 4 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 )
    {
      v12 = *(unsigned __int16 *)(a1 + 14);
      if ( (_WORD)v12 )
      {
        if ( v11 >= a1 + 24 )
        {
          v10 = v11 + v12;
          return a1 + a2 < v10 ? 0x80000005 : 0;
        }
        return (unsigned int)-1073741503;
      }
    }
    return (unsigned int)-1073741306;
  }
  if ( *(_DWORD *)a1 == 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      if ( v5 >= a1 + 24 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( *(_BYTE *)(v5 + v6) );
        v8 = v6 == -1;
        v7 = v6 + 1;
        if ( v8 || v7 == 1 )
          return (unsigned int)-1073479624;
        v10 = v5 + v7;
        return a1 + a2 < v10 ? 0x80000005 : 0;
      }
      return (unsigned int)-1073741503;
    }
    return (unsigned int)-1073741306;
  }
  return 0;
}
