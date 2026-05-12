/*
 * XREFs of StorEtwMiniportBugAbortTimeoutEvent @ 0x1400A84E0
 * Callers:
 *     StorTickEventQueue @ 0x14002EE90 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0quuujqqqbr7_EtwWriteTransfer @ 0x1400A744C (McTemplateK0quuujqqqbr7_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugAbortTimeoutEvent(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r10d
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // ecx
  __int64 *v6; // r8
  __int64 v7; // r8
  char v8; // r11
  int v9; // r13d
  NTSTATUS result; // eax
  char v11; // r15
  unsigned int v12; // r12d
  unsigned int v13; // ebp
  unsigned int *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int8 v18; // r9
  char v19; // r14
  unsigned int v20; // r15d
  unsigned int v21; // ebp
  unsigned int *v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned int v27; // [rsp+B8h] [rbp+10h]
  __int64 v28; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v3 = a1;
  v4 = 0LL;
  if ( *(_BYTE *)(v1 + 2) == 40 )
  {
    v5 = *(_DWORD *)(v1 + 40);
    v6 = *(__int64 **)(v1 + 64);
  }
  else
  {
    v5 = *(_DWORD *)(v1 + 20);
    v6 = *(__int64 **)(v1 + 24);
  }
  v7 = *v6;
  v27 = v5;
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(v7 + 20);
  else
    v9 = *(unsigned __int8 *)(v7 + 2);
  v28 = *(_QWORD *)(v3 + 224);
  result = *(_DWORD *)(v28 + 104);
  if ( !v9 )
  {
    if ( v8 == 40 )
    {
      v11 = 0;
      if ( !*(_DWORD *)(v7 + 20) )
      {
        v12 = *(_DWORD *)(v7 + 56);
        v13 = 0;
        if ( v12 )
        {
          v14 = (unsigned int *)(v7 + 120);
          do
          {
            v15 = *v14;
            v16 = v4;
            if ( (unsigned int)v15 >= 0x80 )
            {
              v17 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v15 < (unsigned int)v17 )
              {
                if ( *(_DWORD *)(v15 + v7) == 64 )
                {
                  if ( v15 + 40 <= v17 )
                  {
                    v3 = a1;
                    if ( *(_BYTE *)(v15 + v7 + 10) )
                      v4 = v15 + v7 + 24;
                    goto LABEL_31;
                  }
                }
                else if ( *(_DWORD *)(v15 + v7) == 65 )
                {
                  if ( v15 + 56 <= v17 )
                  {
                    v11 = 1;
                    if ( !*(_BYTE *)(v15 + v7 + 10) )
                      break;
                    v4 = v15 + v7 + 24;
                  }
                }
                else if ( *(_DWORD *)(v15 + v7) == 66 && v15 + 40 <= v17 )
                {
                  v4 = v15 + v7 + 32;
                  if ( !*(_DWORD *)(v15 + v7 + 12) )
                    v4 = v16;
                  break;
                }
                if ( v11 )
                  break;
              }
            }
            ++v13;
            ++v14;
          }
          while ( v13 < v12 );
        }
        v3 = a1;
      }
    }
    else
    {
      v4 = v7 + 72;
    }
LABEL_31:
    if ( v4 )
    {
      v18 = 0;
      if ( v8 == 40 )
      {
        v19 = 0;
        if ( !*(_DWORD *)(v7 + 20) )
        {
          v20 = *(_DWORD *)(v7 + 56);
          v21 = 0;
          if ( v20 )
          {
            v22 = (unsigned int *)(v7 + 120);
            do
            {
              v23 = *v22;
              if ( (unsigned int)v23 >= 0x80 )
              {
                v24 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v23 < (unsigned int)v24 )
                {
                  if ( *(_DWORD *)(v23 + v7) == 64 )
                  {
                    if ( v23 + 40 <= v24 )
                    {
                      v18 = *(_BYTE *)(v23 + v7 + 10);
                      break;
                    }
                  }
                  else if ( *(_DWORD *)(v23 + v7) == 65 )
                  {
                    if ( v23 + 56 <= v24 )
                    {
                      v18 = *(_BYTE *)(v23 + v7 + 10);
                      v19 = 1;
                    }
                  }
                  else if ( *(_DWORD *)(v23 + v7) == 66 && v23 + 40 <= v24 )
                  {
                    break;
                  }
                  if ( v19 )
                    break;
                }
              }
              ++v21;
              ++v22;
            }
            while ( v21 < v20 );
          }
        }
      }
      else
      {
        v18 = *(_BYTE *)(v7 + 10);
      }
      v2 = v18;
    }
  }
  if ( (byte_140171464 & 0x20) != 0 )
  {
    v25 = v28 + 2104;
    LOBYTE(v25) = BYTE1(result);
    return McTemplateK0quuujqqqbr7_EtwWriteTransfer(
             v25,
             v27,
             (const GUID *)(v3 + 728),
             *(_DWORD *)(*(_QWORD *)(v28 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v28 + 2104,
             v27,
             v9,
             v2,
             v4);
  }
  return result;
}
