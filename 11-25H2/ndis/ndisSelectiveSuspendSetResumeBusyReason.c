/*
 * XREFs of ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E270 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E770 (-ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14005B8E0 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061D50 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061E30 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848F0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140085080 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSelectiveSuspendSetResumeBusyReason(_DWORD *a1, char a2, unsigned int a3, int a4)
{
  int v6; // eax
  _DWORD *v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // r12
  _DWORD *v10; // rcx
  __int16 v11; // r13
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rbp
  char v15; // si
  int v16; // edi
  unsigned __int16 v17; // dx
  int v18; // r10d
  unsigned int v19; // r8d
  int v20; // ebp
  int v21; // eax
  unsigned __int16 v22; // dx
  int v23; // r10d
  unsigned int v24; // r8d
  int v25; // ebp
  int v26; // eax
  unsigned __int16 v27; // dx
  int v28; // r10d
  unsigned int v29; // r8d
  int v30; // ebp
  int v31; // eax
  unsigned __int16 v32; // dx
  int v33; // r10d
  unsigned int v34; // r8d
  int v35; // eax
  __int64 v36; // rcx

  if ( a3 )
  {
    if ( a2 )
    {
      a1[157] = a3;
      a1[158] = a4;
    }
    else
    {
      a1[159] = a3;
      a1[160] = a4;
    }
    if ( a3 != 7 && (unsigned int)(a4 + 50265855) > 1 )
    {
      if ( a3 <= 0xF )
      {
        v6 = a3;
      }
      else
      {
        if ( a3 - 33 > 0x20 )
          return;
        v6 = a3 - 17;
      }
      if ( v6 >= 0 && (unsigned __int64)v6 < 0x31 )
      {
        v7 = &a1[4 * v6];
        v7[185] = a3;
        if ( a2 )
          ++*((_WORD *)v7 + 368);
        else
          ++*((_WORD *)v7 + 369);
        if ( a4 )
        {
          v8 = -1;
          v9 = a1 + 380;
          v10 = a1 + 384;
          HIBYTE(v11) = 0;
          v12 = -1;
          v13 = -1;
          LODWORD(v14) = 0;
          v15 = 0;
          v16 = 2;
          do
          {
            v17 = *((_WORD *)v10 - 6);
            if ( v17 )
              *((_WORD *)v10 - 6) = --v17;
            v18 = *((unsigned __int16 *)v10 - 7);
            v19 = v18 + v17;
            v20 = v19 + v14;
            if ( !v15 )
            {
              v21 = *(v10 - 2);
              if ( v21 == a4 )
              {
                *((_WORD *)v10 - 6) = v17 + 1;
                if ( a2 )
                {
                  ++*((_WORD *)v10 - 8);
                  v15 = 1;
                }
                else
                {
                  v15 = 1;
                  *((_WORD *)v10 - 7) = v18 + 1;
                }
              }
              else if ( v21 )
              {
                if ( v19 < v8 && !*((_WORD *)v10 - 8) )
                {
                  v8 = v18 + v17;
                  v12 = v16 - 2;
                }
              }
              else
              {
                v13 = v16 - 2;
              }
            }
            v22 = *(_WORD *)v10;
            if ( *(_WORD *)v10 )
              *(_WORD *)v10 = --v22;
            v23 = *((unsigned __int16 *)v10 - 1);
            v24 = v23 + v22;
            v25 = v24 + v20;
            if ( !v15 )
            {
              v26 = v10[1];
              if ( v26 == a4 )
              {
                *(_WORD *)v10 = v22 + 1;
                if ( a2 )
                {
                  ++*((_WORD *)v10 - 2);
                  v15 = 1;
                }
                else
                {
                  v15 = 1;
                  *((_WORD *)v10 - 1) = v23 + 1;
                }
              }
              else if ( v26 )
              {
                if ( v24 < v8 && !*((_WORD *)v10 - 2) )
                {
                  v8 = v23 + v22;
                  v12 = v16 - 1;
                }
              }
              else
              {
                v13 = v16 - 1;
              }
            }
            v27 = *((_WORD *)v10 + 6);
            if ( v27 )
              *((_WORD *)v10 + 6) = --v27;
            v28 = *((unsigned __int16 *)v10 + 5);
            v29 = v28 + v27;
            v30 = v29 + v25;
            if ( !v15 )
            {
              v31 = v10[4];
              if ( v31 == a4 )
              {
                *((_WORD *)v10 + 6) = v27 + 1;
                if ( a2 )
                {
                  ++*((_WORD *)v10 + 4);
                  v15 = 1;
                }
                else
                {
                  v15 = 1;
                  *((_WORD *)v10 + 5) = v28 + 1;
                }
              }
              else if ( v31 )
              {
                if ( v29 < v8 && !*((_WORD *)v10 + 4) )
                {
                  v8 = v28 + v27;
                  v12 = v16;
                }
              }
              else
              {
                v13 = v16;
              }
            }
            v32 = *((_WORD *)v10 + 12);
            if ( v32 )
              *((_WORD *)v10 + 12) = --v32;
            v33 = *((unsigned __int16 *)v10 + 11);
            v34 = v33 + v32;
            v14 = v34 + v30;
            if ( !v15 )
            {
              v35 = v10[7];
              if ( v35 == a4 )
              {
                *((_WORD *)v10 + 12) = v32 + 1;
                if ( a2 )
                {
                  ++*((_WORD *)v10 + 10);
                  v15 = 1;
                }
                else
                {
                  v15 = 1;
                  *((_WORD *)v10 + 11) = v33 + 1;
                }
              }
              else if ( v35 )
              {
                if ( v34 < v8 && !*((_WORD *)v10 + 10) )
                {
                  v8 = v33 + v32;
                  v12 = v16 + 1;
                }
              }
              else
              {
                v13 = v16 + 1;
              }
            }
            v16 += 4;
            v10 += 12;
          }
          while ( (unsigned int)(v16 - 2) < 8 );
          if ( !v15 )
          {
            if ( v13 == -1 )
            {
              if ( v12 == -1 )
                return;
              v13 = v12;
              LOWORD(v9[3 * v12 + 1]) = (unsigned __int64)(v14 + 4) >> 3;
            }
            else
            {
              LOWORD(v9[3 * v13 + 1]) = 255;
            }
            v36 = 3LL * v13;
            v9[v36 + 2] = a4;
            LOWORD(v9[v36]) = a2 != 0;
            LOBYTE(v11) = a2 == 0;
            HIWORD(v9[v36]) = v11;
          }
        }
      }
    }
  }
}
