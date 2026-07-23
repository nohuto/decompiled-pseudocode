/*
 * XREFs of IommupDeviceGetPasidSettings @ 0x14054B960
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FD034 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IommupDeviceGetPasidSettings(__int64 *a1, char *a2, char *a3, _BYTE *a4)
{
  char v4; // r11
  unsigned int v5; // ebx
  char v6; // di
  char v7; // al
  __int64 *v8; // r10
  int v9; // ecx
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a1 )
  {
    v8 = a1;
    while ( *((_DWORD *)v8 + 4) != 3 )
    {
      v8 = (__int64 *)*v8;
      if ( v8 == a1 )
        goto LABEL_13;
    }
    if ( v8 )
    {
      v9 = *((_DWORD *)v8 + 6);
      if ( v9 )
      {
        if ( v9 == 1 )
          v4 = 1;
        else
          v5 = -1073741811;
      }
      else
      {
        v6 = 1;
      }
      v7 = *((_BYTE *)v8 + 28);
    }
  }
LABEL_13:
  *a4 = v7;
  result = v5;
  *a3 = v6;
  *a2 = v4;
  return result;
}
