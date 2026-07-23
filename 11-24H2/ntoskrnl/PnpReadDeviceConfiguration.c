/*
 * XREFs of PnpReadDeviceConfiguration @ 0x1406F78F4
 * Callers:
 *     PnpGetDeviceResourcesFromRegistry @ 0x1409792B8 (PnpGetDeviceResourcesFromRegistry.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpReadDeviceConfiguration(void *a1, int a2, void **a3, _DWORD *a4)
{
  int v6; // edx
  int v7; // edx
  int RegistryValue; // edi
  __int64 Pool2; // rax
  unsigned int *v11; // r10
  unsigned int v12; // r8d
  _DWORD *i; // rax
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax

  *a3 = 0LL;
  *a4 = 0;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 3221225712LL;
    }
  }
  RegistryValue = IopGetRegistryValue(a1);
  if ( RegistryValue >= 0 )
  {
    if ( MEMORY[4] == 8 )
    {
      if ( MEMORY[0xC] )
      {
        Pool2 = ExAllocatePool2(0x100uLL, MEMORY[0xC], 0x36706E50u);
        *a3 = (void *)Pool2;
        if ( Pool2 )
        {
          *a4 = MEMORY[0xC];
          memmove(*a3, (const void *)MEMORY[8], MEMORY[0xC]);
          v11 = (unsigned int *)*a3;
          v12 = 0;
          for ( i = (char *)*a3 + 4; v12 < *v11; i = v15 )
          {
            if ( *i == -1 )
            {
              i[1] = 0;
              *i = 1;
            }
            v14 = i[3];
            v15 = i + 4;
            if ( v14 )
            {
              v16 = v14;
              do
              {
                v17 = 0LL;
                if ( *(_BYTE *)v15 == 5 )
                  v17 = (unsigned int)v15[1];
                v15 = (_DWORD *)((char *)v15 + v17 + 20);
                --v16;
              }
              while ( v16 );
            }
            ++v12;
          }
        }
        else
        {
          RegistryValue = -1073741670;
        }
      }
    }
    else
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(0LL, 0);
  }
  return (unsigned int)RegistryValue;
}
