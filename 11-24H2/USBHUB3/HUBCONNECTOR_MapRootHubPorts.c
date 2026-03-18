/*
 * XREFs of HUBCONNECTOR_MapRootHubPorts @ 0x1400851C8
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x140084F8C (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBCONNECTOR_RegisterPort @ 0x140085504 (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapRootHubPorts(__int64 a1)
{
  unsigned __int16 v1; // r8
  _QWORD **i; // rdx
  _QWORD *j; // rax
  _QWORD *v5; // rcx
  unsigned __int16 k; // r8
  _QWORD *m; // rax
  _QWORD *v8; // rcx
  unsigned __int16 v9; // bp
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // r12
  _UNKNOWN **v13; // rdx
  _QWORD *v14; // r15
  _QWORD *n; // rax
  _QWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *jj; // rax
  _QWORD *v20; // r14
  _QWORD *ii; // rax
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+30h] [rbp-38h]
  unsigned __int16 v25; // [rsp+70h] [rbp+8h]

  v1 = *(_WORD *)(a1 + 146);
  for ( i = (_QWORD **)(a1 + 2376); v1 <= *(_WORD *)(a1 + 148); ++v1 )
  {
    for ( j = *i; ; j = (_QWORD *)*j )
    {
      v5 = j - 31;
      if ( i == j )
        break;
      if ( *((_WORD *)v5 + 100) == v1 )
      {
        if ( j != (_QWORD *)248 )
        {
          *((_DWORD *)v5 + 342) = 1;
          *((_DWORD *)v5 + 343) = *(_DWORD *)(a1 + 96);
          *((_DWORD *)v5 + 348) = v1;
          *((_WORD *)v5 + 694) = 0;
        }
        break;
      }
    }
  }
  for ( k = *(_WORD *)(a1 + 152); ; ++k )
  {
    v9 = *(_WORD *)(a1 + 154);
    if ( k > v9 )
      break;
    for ( m = *i; ; m = (_QWORD *)*m )
    {
      v8 = m - 31;
      if ( i == m )
        break;
      if ( *((_WORD *)v8 + 100) == k )
      {
        if ( m != (_QWORD *)248 )
        {
          *((_DWORD *)v8 + 342) = 1;
          *((_DWORD *)v8 + 343) = *(_DWORD *)(a1 + 96);
          *((_DWORD *)v8 + 348) = k;
          *((_WORD *)v8 + 694) = 0;
        }
        break;
      }
    }
  }
  v10 = *(_WORD *)(a1 + 152);
  v11 = *(_WORD *)(a1 + 148);
  v12 = *(_WORD *)(a1 + 146);
  v25 = v11;
  if ( v10 <= v9 )
  {
    v13 = &WPP_RECORDER_INITIALIZED;
    while ( 1 )
    {
      if ( v12 > v11 )
        return;
      v14 = (_QWORD *)(a1 + 2376);
      for ( n = *(_QWORD **)(a1 + 2376); ; n = (_QWORD *)*n )
      {
        v16 = n - 31;
        if ( v14 == n )
          goto LABEL_39;
        if ( *((_WORD *)v16 + 100) == v12 )
          break;
      }
      if ( n != (_QWORD *)248 )
      {
        v17 = *((_DWORD *)v16 + 51);
        if ( (v17 & 0x10) != 0 )
        {
          if ( v12 == v11 )
          {
            *((_WORD *)v16 + 106) = v10;
            *((_WORD *)v16 + 107) = v9;
            while ( 2 )
            {
              if ( v10 <= v9 )
              {
                for ( ii = *(_QWORD **)(a1 + 2376); ; ii = (_QWORD *)*ii )
                {
                  v22 = ii - 31;
                  if ( v14 == ii )
                    goto LABEL_58;
                  if ( *((_WORD *)v22 + 100) == v10 )
                    break;
                }
                if ( ii == (_QWORD *)248 || (int)HUBCONNECTOR_RegisterPort(v22, v13) >= 0 )
                {
LABEL_58:
                  ++v10;
                  continue;
                }
              }
              break;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 2;
            WPP_RECORDER_SF_(v16[179], (_DWORD)v13, 6, 24, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
          }
          return;
        }
        *((_DWORD *)v16 + 348) = v10;
        if ( (v17 & 1) != 0 )
          break;
      }
LABEL_39:
      ++v10;
      ++v12;
      if ( v10 > v9 )
        return;
    }
    if ( (int)HUBCONNECTOR_RegisterPort(v16, &WPP_RECORDER_INITIALIZED) >= 0 )
    {
      for ( jj = *(_QWORD **)(a1 + 2376); ; jj = (_QWORD *)*jj )
      {
        v20 = jj - 31;
        if ( v14 == jj )
          goto LABEL_36;
        if ( *((_WORD *)v20 + 100) == v10 )
          break;
      }
      if ( jj == (_QWORD *)248 )
      {
LABEL_36:
        v13 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = v12;
          WPP_RECORDER_SF_d(v16[179], 2u, 6u, 0x19u, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids, v23);
          v13 = &WPP_RECORDER_INITIALIZED;
        }
        goto LABEL_38;
      }
      if ( (*((_DWORD *)v20 + 51) & 1) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v10;
        LODWORD(v23) = v12;
        WPP_RECORDER_SF_dD(v16[179], 2u, 6u, 0x1Au, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids, v23, v24);
      }
      if ( (int)HUBCONNECTOR_RegisterPort(v20, v18) >= 0 )
      {
        v13 = &WPP_RECORDER_INITIALIZED;
LABEL_38:
        v11 = v25;
        goto LABEL_39;
      }
    }
  }
}
