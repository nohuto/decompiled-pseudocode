/*
 * XREFs of RtlCharToInteger @ 0x18007A3D0
 * Callers:
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D4828 (LdrpEnclaveAddForwarderModules.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  ULONG v3; // r11d
  PCSZ v4; // r10
  CHAR v5; // al
  const CHAR *v6; // rcx
  char v7; // r9
  CHAR v8; // di
  PCSZ v9; // rcx
  int v10; // eax
  int v11; // ebx
  unsigned int v12; // edx
  ULONG v13; // ecx
  _BYTE *v15; // r10

  v3 = Base;
  v4 = String;
  v5 = *String;
  while ( 1 )
  {
    v6 = v4;
    v7 = v5;
    v8 = v5;
    ++v4;
    if ( v5 > 32 )
      break;
    v5 = *v4;
    if ( !*v4 )
    {
      v4 = v6;
      break;
    }
  }
  if ( ((v7 - 43) & 0xFD) == 0 )
    v7 = *v4++;
  v9 = v4;
  switch ( Base )
  {
    case 0u:
      v10 = 0;
      v3 = 10;
      v11 = 0;
      if ( v7 == 48 )
      {
        v7 = *v4;
        v15 = v4 + 1;
        switch ( v7 )
        {
          case 'x':
            v11 = 4;
            v3 = 16;
            v7 = *v15;
            v4 = v15 + 1;
            break;
          case 'o':
            v11 = 3;
            v3 = 8;
            v7 = *v15;
            v4 = v15 + 1;
            break;
          case 'b':
            v11 = 1;
            v3 = 2;
            v7 = *v15;
            v4 = v15 + 1;
            break;
          default:
            v4 = v9 + 1;
            break;
        }
      }
      goto LABEL_7;
    case 2u:
      v11 = 1;
      break;
    case 8u:
      v11 = 3;
      v10 = 0;
      goto LABEL_7;
    case 0xAu:
      v10 = 0;
      v11 = 0;
      goto LABEL_7;
    case 0x10u:
      v11 = 4;
      break;
    default:
      return -1073741811;
  }
  v10 = 0;
LABEL_7:
  while ( v7 )
  {
    if ( (unsigned __int8)(v7 - 48) > 9u )
    {
      if ( (unsigned __int8)(v7 - 65) <= 5u )
      {
        v12 = v7 - 55;
      }
      else
      {
        if ( (unsigned __int8)(v7 - 97) > 5u )
          break;
        v12 = v7 - 87;
      }
    }
    else
    {
      v12 = v7 - 48;
    }
    if ( v12 >= v3 )
      break;
    v10 = v11 ? v12 | (v10 << v11) : v12 + v3 * v10;
    v7 = *v4++;
  }
  v13 = -v10;
  if ( v8 != 45 )
    v13 = v10;
  *Value = v13;
  return 0;
}
