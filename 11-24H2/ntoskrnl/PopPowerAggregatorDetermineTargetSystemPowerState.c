/*
 * XREFs of PopPowerAggregatorDetermineTargetSystemPowerState @ 0x14099EB18
 * Callers:
 *     PopPowerAggregatorHandleResumeIntent @ 0x1405D4E80 (PopPowerAggregatorHandleResumeIntent.c)
 *     PopPowerAggregatorHandleSystemTransitionIntent @ 0x14099EAA0 (PopPowerAggregatorHandleSystemTransitionIntent.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopIsHibernateSupported @ 0x140A88308 (PopIsHibernateSupported.c)
 */

__int64 __fastcall PopPowerAggregatorDetermineTargetSystemPowerState(int a1, char a2, int *a3, __int64 a4)
{
  _DWORD *v8; // r10
  unsigned int v9; // r9d
  int v10; // r8d
  bool v11; // al
  bool v12; // al
  bool v13; // al
  bool v14; // al
  bool v16; // zf
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  _BYTE v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char v21; // [rsp+23h] [rbp-55h]
  char v22; // [rsp+24h] [rbp-54h]
  char v23; // [rsp+25h] [rbp-53h]
  char v24; // [rsp+26h] [rbp-52h]
  char v25; // [rsp+28h] [rbp-50h]
  char v26; // [rsp+36h] [rbp-42h]

  memset_0(v20, 0, 0x4CuLL);
  PopFilterCapabilities(&PopCapabilities, v20);
  v8 = PopPolicy;
  v9 = 0;
  v16 = v21 == 0;
  v10 = a1;
  *(_BYTE *)(a4 + 4) = a1;
  *(_DWORD *)(a4 + 8) = v8[15];
  *(_DWORD *)(a4 + 12) = v8[22];
  v11 = !v16;
  v16 = v22 == 0;
  *(_BYTE *)(a4 + 16) = v11;
  v12 = !v16;
  v16 = v23 == 0;
  *(_BYTE *)(a4 + 17) = v12;
  v13 = !v16;
  v16 = v24 == 0;
  *(_BYTE *)(a4 + 18) = v13;
  v14 = !v16;
  v16 = v25 == 0;
  *(_BYTE *)(a4 + 19) = v14;
  *(_BYTE *)(a4 + 20) = !v16;
  *(_BYTE *)(a4 + 21) = v26;
  *(_BYTE *)(a4 + 22) = PopPromoteHibernateToShutdown != 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          switch ( v10 )
          {
            case 1:
LABEL_3:
              *a3 = v10;
              *(_BYTE *)(a4 + 5) = v10;
              return v9;
            case 2:
            case 3:
            case 4:
              if ( v21 != (_BYTE)v9 || v22 != (_BYTE)v9 || v23 != (_BYTE)v9 )
              {
                if ( !a2 )
                  goto LABEL_3;
                v16 = v8[15] == v9;
LABEL_21:
                if ( !v16 )
                  goto LABEL_3;
                goto LABEL_22;
              }
              break;
            case 5:
              if ( (unsigned __int8)PopIsHibernateSupported(v20) )
              {
                if ( !a2 )
                  goto LABEL_3;
                v16 = v8[22] == v9;
                goto LABEL_21;
              }
              break;
            case 6:
              goto LABEL_3;
          }
          if ( !a2 )
            return (unsigned int)-1073741637;
LABEL_22:
          if ( !a1 )
            break;
          v10 = 1;
        }
        if ( v10 )
          break;
        v10 = 4;
      }
      v17 = v10 - 2;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
            break;
        }
      }
      v10 = 5;
    }
    if ( v19 != 1 )
      return (unsigned int)-1073741811;
    v10 = PopPromoteHibernateToShutdown != 0 ? 6 : 1;
  }
}
