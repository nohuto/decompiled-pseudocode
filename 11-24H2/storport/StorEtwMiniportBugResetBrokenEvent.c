/*
 * XREFs of StorEtwMiniportBugResetBrokenEvent @ 0x1400A873C
 * Callers:
 *     StorTickEventQueue @ 0x14002EE90 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer @ 0x1400A77B8 (McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugResetBrokenEvent(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // edi
  __int64 v5; // rsi
  char v6; // r11
  int v7; // r12d
  __int64 v8; // r13
  NTSTATUS result; // eax
  char v10; // r15
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  unsigned int *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // r10
  unsigned __int8 v17; // r10
  char v18; // r14
  unsigned int v19; // r15d
  unsigned int v20; // ebp
  unsigned int *v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23; // r11
  __int64 v24; // rcx

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  v5 = 0LL;
  v6 = *(_BYTE *)(v3 + 2);
  if ( v6 == 40 )
    v7 = *(_DWORD *)(v3 + 20);
  else
    v7 = *(unsigned __int8 *)(v3 + 2);
  v8 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v8 + 104);
  if ( !v7 )
  {
    if ( v6 == 40 )
    {
      v10 = 0;
      if ( !*(_DWORD *)(v3 + 20) )
      {
        v11 = *(_DWORD *)(v3 + 56);
        v12 = 0;
        if ( v11 )
        {
          v13 = (unsigned int *)(v3 + 120);
          do
          {
            v14 = *v13;
            v15 = v5;
            if ( (unsigned int)v14 >= 0x80 )
            {
              v16 = *(unsigned int *)(v3 + 16);
              if ( (unsigned int)v14 < (unsigned int)v16 )
              {
                if ( *(_DWORD *)(v14 + v3) == 64 )
                {
                  if ( v14 + 40 <= v16 )
                  {
                    LOBYTE(v7) = 0;
                    if ( *(_BYTE *)(v14 + v3 + 10) )
                      v5 = v14 + v3 + 24;
                    goto LABEL_28;
                  }
                }
                else if ( *(_DWORD *)(v14 + v3) == 65 )
                {
                  if ( v14 + 56 <= v16 )
                  {
                    v10 = 1;
                    if ( !*(_BYTE *)(v14 + v3 + 10) )
                      break;
                    v5 = v14 + v3 + 24;
                  }
                }
                else if ( *(_DWORD *)(v14 + v3) == 66 && v14 + 40 <= v16 )
                {
                  v5 = v14 + v3 + 32;
                  if ( !*(_DWORD *)(v14 + v3 + 12) )
                    v5 = v15;
                  break;
                }
                if ( v10 )
                  break;
              }
            }
            ++v12;
            ++v13;
          }
          while ( v12 < v11 );
        }
        LOBYTE(v7) = 0;
      }
    }
    else
    {
      v5 = v3 + 72;
    }
LABEL_28:
    if ( v5 )
    {
      v17 = 0;
      if ( v6 == 40 )
      {
        v18 = 0;
        if ( !*(_DWORD *)(v3 + 20) )
        {
          v19 = *(_DWORD *)(v3 + 56);
          v20 = 0;
          if ( v19 )
          {
            v21 = (unsigned int *)(v3 + 120);
            do
            {
              v22 = *v21;
              if ( (unsigned int)v22 >= 0x80 )
              {
                v23 = *(unsigned int *)(v3 + 16);
                if ( (unsigned int)v22 < (unsigned int)v23 )
                {
                  if ( *(_DWORD *)(v22 + v3) == 64 )
                  {
                    if ( v22 + 40 <= v23 )
                    {
                      v17 = *(_BYTE *)(v22 + v3 + 10);
                      break;
                    }
                  }
                  else if ( *(_DWORD *)(v22 + v3) == 65 )
                  {
                    if ( v22 + 56 <= v23 )
                    {
                      v17 = *(_BYTE *)(v22 + v3 + 10);
                      v18 = 1;
                    }
                  }
                  else if ( *(_DWORD *)(v22 + v3) == 66 && v22 + 40 <= v23 )
                  {
                    break;
                  }
                  if ( v18 )
                    break;
                }
              }
              ++v20;
              ++v21;
            }
            while ( v20 < v19 );
          }
        }
      }
      else
      {
        v17 = *(_BYTE *)(v3 + 10);
      }
      v4 = v17;
    }
  }
  if ( (byte_140171464 & 0x10) != 0 )
  {
    v24 = v8 + 242;
    LOBYTE(v24) = BYTE1(result);
    return McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer(
             v24,
             v8 + 177,
             (const GUID *)(a1 + 728),
             *(const wchar_t **)(a3 + 8),
             *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
             *(_QWORD *)(v8 + 24) + 5064LL,
             result,
             SBYTE1(result),
             SBYTE2(result),
             v8 + 2104,
             (const char *)(v8 + 168),
             (const char *)(v8 + 177),
             (const char *)(v8 + 242),
             v7,
             v4,
             v5,
             a2);
  }
  return result;
}
