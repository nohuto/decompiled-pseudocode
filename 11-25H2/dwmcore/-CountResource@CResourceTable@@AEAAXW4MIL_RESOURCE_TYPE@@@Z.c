/*
 * XREFs of ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x1801AFC10
 * Callers:
 *     ?CompleteDuplicateResource@CChannelContext@@QEAAJI@Z @ 0x1801AFA18 (-CompleteDuplicateResource@CChannelContext@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CResourceTable::CountResource(__int64 a1, unsigned int a2)
{
  _DWORD *result; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx

  result = *(_DWORD **)(a1 + 56);
  if ( a2 <= 0x2D )
  {
    if ( a2 != 45 )
    {
      if ( a2 == 32 || a2 == 33 || a2 == 36 || a2 == 38 || a2 == 40 )
      {
        ++result[30];
        goto LABEL_27;
      }
      if ( a2 == 41 )
      {
        ++result[31];
LABEL_25:
        ++dword_180406E5C;
        return result;
      }
      goto LABEL_8;
    }
    goto LABEL_39;
  }
  switch ( a2 )
  {
    case 0x5Bu:
      ++result[29];
      goto LABEL_37;
    case 0x5Cu:
      goto LABEL_35;
    case 0xA3u:
LABEL_39:
      ++result[26];
      goto LABEL_9;
    case 0xA4u:
    case 0xB6u:
    case 0xBEu:
LABEL_35:
      ++result[28];
LABEL_10:
      v3 = a2 - 91;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( !v4 )
        {
LABEL_34:
          ++dword_180406E50;
          return result;
        }
        v5 = v4 - 71;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 18;
            if ( v7 )
            {
              if ( v7 != 8 )
                goto LABEL_16;
            }
          }
          goto LABEL_34;
        }
        goto LABEL_38;
      }
LABEL_37:
      ++dword_180406E54;
      return result;
  }
LABEL_8:
  ++result[27];
LABEL_9:
  if ( a2 > 0x2D )
    goto LABEL_10;
  if ( a2 == 45 )
  {
LABEL_38:
    ++dword_180406E48;
    return result;
  }
LABEL_27:
  v8 = a2 - 32;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 3;
      if ( v10 )
      {
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 2;
          if ( v12 )
          {
            if ( v12 != 1 )
            {
LABEL_16:
              ++dword_180406E4C;
              return result;
            }
            goto LABEL_25;
          }
        }
      }
    }
  }
  ++dword_180406E58;
  return result;
}
