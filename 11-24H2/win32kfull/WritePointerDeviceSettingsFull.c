/*
 * XREFs of WritePointerDeviceSettingsFull @ 0x1402ACC7C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1402AC6E8 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1402AC88C (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1402ACA90 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 __fastcall WritePointerDeviceSettingsFull(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  unsigned int v6; // esi
  const unsigned __int16 **UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const unsigned __int16 **v10; // rbp
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  int v17; // ebx
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r8

  v5 = a1;
  v6 = 0;
  UserSessionState = (const unsigned __int16 **)W32GetUserSessionState(a1, a2);
  v10 = UserSessionState;
  v11 = v5 - 149;
  if ( v11 )
  {
    v12 = v11 - 2;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( !v13 )
        return SetFlickMap((struct tagFLICK_MAP *)a2, a3);
      v14 = v13 - 2;
      if ( !v14 )
        return SetCustomFlick((struct tagCUSTOM_FLICK *)a2);
      if ( v14 == 2 )
      {
        v15 = *(_DWORD *)(a2 + 4);
        if ( v15 <= 0x3C )
        {
          *((_DWORD *)UserSessionState + 4623) = v15;
          *(_DWORD *)(W32GetUserSessionState(v9, v8) + 18984) = v15;
        }
        v16 = *(_DWORD *)(a2 + 8);
        if ( v16 <= 0x3C )
        {
          *((_DWORD *)v10 + 4627) = v16;
          *(_DWORD *)(W32GetUserSessionState(v9, v8) + 18988) = v16;
        }
        v17 = *(_DWORD *)(a2 + 12);
        *((_DWORD *)v10 + 4631) = v17;
        v6 = 1;
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 18992) = v17;
        if ( a3 )
          return WritePredictionSettings(v10 + 2310, v18, v19);
      }
    }
    else
    {
      *((_DWORD *)UserSessionState + 4495) = *(_DWORD *)a2;
      v6 = 1;
      *((_DWORD *)UserSessionState + 4499) = *(_DWORD *)(a2 + 4);
      *((_DWORD *)UserSessionState + 4503) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)UserSessionState + 4507) = *(_DWORD *)(a2 + 12);
      *((_DWORD *)UserSessionState + 4511) = *(_DWORD *)(a2 + 16);
      *((_DWORD *)UserSessionState + 4515) = *(_DWORD *)(a2 + 20);
      *((_DWORD *)UserSessionState + 4519) = *(_DWORD *)(a2 + 24);
      if ( (!a3 || (v6 = WriteSettingValues(7LL, UserSessionState + 2246, 7LL)) != 0) && !*((_DWORD *)v10 + 4520) )
        *((_DWORD *)v10 + 4520) = 1;
    }
  }
  else
  {
    *((_DWORD *)UserSessionState + 4527) = *(_DWORD *)a2;
    v6 = 1;
    *((_DWORD *)UserSessionState + 4531) = *(_DWORD *)(a2 + 4);
    *((_DWORD *)UserSessionState + 4535) = *(_DWORD *)(a2 + 8);
    *((_DWORD *)UserSessionState + 4539) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)UserSessionState + 4543) = *(_DWORD *)(a2 + 16);
    *((_DWORD *)UserSessionState + 4547) = *(_DWORD *)(a2 + 20);
    *((_DWORD *)UserSessionState + 4551) = *(_DWORD *)(a2 + 24);
    *((_DWORD *)UserSessionState + 4555) = *(_DWORD *)(a2 + 28);
    *((_DWORD *)UserSessionState + 4559) = *(_DWORD *)(a2 + 32);
    *((_DWORD *)UserSessionState + 4563) = *(_DWORD *)(a2 + 36);
    if ( (!a3 || (v6 = WriteSettingValues(4LL, UserSessionState + 2262, 10LL)) != 0) && !*((_DWORD *)v10 + 4564) )
      *((_DWORD *)v10 + 4564) = 1;
  }
  return v6;
}
