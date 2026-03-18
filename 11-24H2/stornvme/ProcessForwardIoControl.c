/*
 * XREFs of ProcessForwardIoControl @ 0x140014560
 * Callers:
 *     NVMeHwUnitControl @ 0x14000EC10 (NVMeHwUnitControl.c)
 * Callees:
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 *     NVMeCompletePendingForwardIoRequests @ 0x14001BEA8 (NVMeCompletePendingForwardIoRequests.c)
 */

int __fastcall ProcessForwardIoControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebp
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r9d
  unsigned __int16 v23; // dx
  __int64 v24; // r8
  unsigned int v25; // esi
  __int128 *v27; // [rsp+20h] [rbp-38h]
  __int64 v28; // [rsp+28h] [rbp-30h]
  __int128 v29; // [rsp+30h] [rbp-28h] BYREF
  __int128 v30; // [rsp+40h] [rbp-18h]

  LODWORD(v2) = *(_DWORD *)(a2 + 8);
  v29 = 0LL;
  v30 = 0LL;
  switch ( (int)v2 )
  {
    case 0:
      if ( *(_BYTE *)(a2 + 12) )
      {
        *(_DWORD *)(a1 + 4292) = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(a1 + 4296) = *(_DWORD *)(a2 + 20);
        *(_DWORD *)(a1 + 4300) = *(_DWORD *)(a2 + 24);
        LODWORD(v2) = *(_DWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 4304) = v2;
        v5 = *(_DWORD *)(a2 + 36);
        *(_DWORD *)(a1 + 4064) |= 0x80u;
        *(_DWORD *)(a1 + 4308) = v5;
      }
      else
      {
        *(_DWORD *)(a1 + 4064) &= ~0x80u;
        *(_QWORD *)(a1 + 4292) = 0LL;
        *(_QWORD *)(a1 + 4300) = 0LL;
        *(_DWORD *)(a1 + 4308) = 0;
      }
      break;
    case 1:
      v6 = *(_DWORD *)(a1 + 4064) | 0x100;
      v7 = *(_DWORD *)(a1 + 4064) & 0xFFFFFEFF;
      if ( !*(_BYTE *)(a2 + 12) )
        v7 = v6;
      *(_DWORD *)(a1 + 4064) = v7;
      break;
    case 2:
      v2 = *(unsigned __int8 *)(a2 + 50);
      v8 = *(_QWORD *)(a1 + 8 * v2 + 1672);
      if ( v8 )
      {
        LODWORD(v2) = *(_DWORD *)(v8 + 20);
        if ( (v2 & 0x200) == 0 )
        {
          LODWORD(v2) = v2 | 0x200;
          *(_DWORD *)(v8 + 20) = v2;
        }
      }
      v9 = 0;
      if ( *(_WORD *)(a1 + 330) )
      {
        do
        {
          v10 = (_QWORD *)(*(_QWORD *)(a1 + 936) + 208LL * v9);
          if ( v10[18] )
          {
            StorPortExtendedFunction(93LL, a1, 1LL, v10 + 8);
            v11 = v10[18];
            v12 = 0LL;
            if ( v11 )
            {
              do
              {
                v13 = *(_QWORD *)(v11 + 8);
                if ( *(_BYTE *)(v11 + 3) == *(_BYTE *)(a2 + 50) )
                {
                  if ( v12 )
                    *(_QWORD *)(v12 + 8) = v13;
                  else
                    v10[18] = v13;
                  if ( !v13 )
                    v10[19] = v12;
                  *(_QWORD *)(v11 + 8) = 0LL;
                  v14 = v10[23];
                  if ( v14 )
                    *(_QWORD *)(v14 + 8) = v11;
                  else
                    v10[22] = v11;
                  v10[23] = v11;
                }
                else
                {
                  v12 = v11;
                }
                v11 = v13;
              }
              while ( v13 );
            }
            StorPortNotification(4100LL, a1, &v29);
          }
          LODWORD(v2) = *(unsigned __int16 *)(a1 + 330);
          ++v9;
        }
        while ( v9 < (unsigned int)v2 );
      }
      break;
    case 3:
      v2 = *(unsigned __int8 *)(a2 + 50);
      v15 = *(_QWORD *)(a1 + 8 * v2 + 1672);
      if ( v15 )
      {
        LODWORD(v2) = *(_DWORD *)(v15 + 20);
        if ( (v2 & 0x200) != 0 )
        {
          LODWORD(v2) = v2 & 0xFFFFFDFF;
          *(_DWORD *)(v15 + 20) = v2;
        }
      }
      v16 = 0;
      if ( *(_WORD *)(a1 + 330) )
      {
        do
        {
          v17 = (_QWORD *)(*(_QWORD *)(a1 + 936) + 208LL * v16);
          if ( v17[22] )
          {
            v27 = &v29;
            StorPortExtendedFunction(93LL, a1, 1LL, v17 + 8);
            v18 = v17[22];
            v19 = 0LL;
            if ( v18 )
            {
              do
              {
                v20 = *(_QWORD *)(v18 + 8);
                if ( *(_BYTE *)(v18 + 3) == *(_BYTE *)(a2 + 50) )
                {
                  if ( v19 )
                    *(_QWORD *)(v19 + 8) = v20;
                  else
                    v17[22] = v20;
                  if ( !v20 )
                    v17[23] = v19;
                  *(_QWORD *)(v18 + 8) = 0LL;
                  v21 = v17[19];
                  if ( v21 )
                    *(_QWORD *)(v21 + 8) = v18;
                  else
                    v17[18] = v18;
                  v17[19] = v18;
                }
                else
                {
                  v19 = v18;
                }
                v18 = v20;
              }
              while ( v20 );
            }
            StorPortNotification(4100LL, a1, &v29);
          }
          ProcessPendingIoCommands(a1, v17, 0LL, 0LL, v27);
          LODWORD(v2) = *(unsigned __int16 *)(a1 + 330);
          ++v16;
        }
        while ( v16 < (unsigned int)v2 );
      }
      break;
    case 4:
      *(_BYTE *)(a2 + 12) = 0;
      v22 = 0;
      if ( *(_WORD *)(a1 + 330) )
      {
        do
        {
          v23 = 0;
          v24 = *(_QWORD *)(a1 + 936) + 208LL * v22;
          if ( *(_WORD *)(a1 + 328) )
          {
            while ( (*(_BYTE *)(*(_QWORD *)(v24 + 32) + 32LL * v23) & 0x48) != 0x48
                 || BYTE1(*(_DWORD *)(*(_QWORD *)(v24 + 32) + 32LL * v23)) != *(_BYTE *)(a2 + 50) )
            {
              if ( ++v23 >= *(_WORD *)(a1 + 328) )
                goto LABEL_57;
            }
            *(_BYTE *)(a2 + 12) = 1;
          }
LABEL_57:
          LODWORD(v2) = *(unsigned __int16 *)(a1 + 330);
          ++v22;
        }
        while ( v22 < (unsigned int)v2 );
      }
      break;
    case 5:
      v25 = 0;
      if ( *(_WORD *)(a1 + 330) )
      {
        do
        {
          LOBYTE(v28) = *(_BYTE *)(a2 + 12);
          NVMeCompletePendingForwardIoRequests(
            a1,
            *(_DWORD *)(a1 + 936) + 208 * v25,
            *(unsigned __int8 *)(a2 + 50),
            0,
            1,
            v28,
            v29,
            v30);
          LODWORD(v2) = *(unsigned __int16 *)(a1 + 330);
          ++v25;
        }
        while ( v25 < (unsigned int)v2 );
      }
      break;
    default:
      return v2;
  }
  return v2;
}
