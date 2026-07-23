/*
 * XREFs of RtlCharToInteger @ 0x140A4C210
 * Callers:
 *     IopCheckDiskName @ 0x140593DE8 (IopCheckDiskName.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140C197EC (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  PCSZ v5; // r9
  CHAR v6; // al
  const CHAR *v7; // rdx
  char v8; // cl
  CHAR v9; // bl
  PCSZ v10; // rax
  int v11; // edx
  int v12; // r8d
  ULONG v13; // eax
  ULONG v14; // eax
  _BYTE *v16; // r9

  v5 = String;
  v6 = *String;
  while ( 1 )
  {
    v7 = v5;
    v8 = v6;
    v9 = v6;
    ++v5;
    if ( v6 > 32 )
      break;
    v6 = *v5;
    if ( !*v5 )
    {
      v5 = v7;
      break;
    }
  }
  if ( ((v8 - 43) & 0xFD) == 0 )
    v8 = *v5++;
  v10 = v5;
  switch ( Base )
  {
    case 0u:
      v11 = 0;
      Base = 10;
      if ( v8 != 48 )
        break;
      v8 = *v5;
      v16 = v5 + 1;
      switch ( v8 )
      {
        case 'x':
          v11 = 4;
          Base = 16;
          break;
        case 'o':
          v11 = 3;
          Base = 8;
          break;
        case 'b':
          v11 = 1;
          Base = 2;
          break;
        default:
          v16 = v10;
          goto LABEL_40;
      }
      v8 = *v16;
LABEL_40:
      v5 = v16 + 1;
      break;
    case 0xAu:
      v11 = 0;
      break;
    case 2u:
      v11 = 1;
      break;
    case 8u:
      v11 = 3;
      break;
    case 0x10u:
      v11 = 4;
      break;
    default:
      return -1073741811;
  }
  v12 = 0;
  while ( v8 )
  {
    if ( (unsigned __int8)(v8 - 48) > 9u )
    {
      if ( (unsigned __int8)(v8 - 65) > 5u )
      {
        if ( (unsigned __int8)(v8 - 97) > 5u )
          break;
        v13 = v8 - 87;
      }
      else
      {
        v13 = v8 - 55;
      }
    }
    else
    {
      v13 = v8 - 48;
    }
    if ( v13 >= Base )
      break;
    if ( v11 )
      v12 = v13 | (v12 << v11);
    else
      v12 = v13 + Base * v12;
    v8 = *v5++;
  }
  v14 = -v12;
  if ( v9 != 45 )
    v14 = v12;
  *Value = v14;
  return 0;
}
