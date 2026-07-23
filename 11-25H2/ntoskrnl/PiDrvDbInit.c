/*
 * XREFs of PiDrvDbInit @ 0x14072AE2C
 * Callers:
 *     PiPnpRtlInit @ 0x14071ACC4 (PiPnpRtlInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404996EC (CmIsStateSeparationEnabled.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14072AA18 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodes @ 0x14072D82C (PiDrvDbSetupNodes.c)
 *     PiDrvDbSuspendNodes @ 0x14072D9B8 (PiDrvDbSuspendNodes.c)
 *     DrvDbOpenContext @ 0x140813828 (DrvDbOpenContext.c)
 */

__int64 __fastcall PiDrvDbInit(int a1)
{
  int v1; // edx
  int v2; // edi
  __int64 *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // eax

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      v8 = ((__int64 (*)(void))PiDrvDbSetupNodes)();
      v1 = v8;
      if ( v8 >= 0 )
        return (unsigned int)PiDrvDbSuspendNodes(0LL, (unsigned int)v8);
    }
  }
  else
  {
    qword_140F89318 = (__int64)&PiDrvDbNodeList;
    PiDrvDbNodeList = (__int64)&PiDrvDbNodeList;
    v1 = DrvDbOpenContext();
    if ( v1 >= 0 )
    {
      v2 = 0;
      for ( i = &qword_140009F18; ; i += 4 )
      {
        LODWORD(v4) = *((_DWORD *)i - 4);
        if ( ((v4 & 4) == 0 || !CmIsStateSeparationEnabled()) && ((v4 & 0x80u) == 0LL || CmIsStateSeparationEnabled()) )
        {
          v1 = PiDrvDbRegisterNode((PCWSTR)*(i - 3), *i);
          if ( v1 < 0 )
            break;
        }
        if ( (unsigned int)++v2 >= 3 )
        {
          if ( v1 >= 0 )
          {
            v1 = PiDrvDbEnumDriverStoreNodes(v4);
            if ( v1 >= 0 )
            {
              LOBYTE(v5) = 1;
              v6 = PiDrvDbSuspendNodes(v5, 0LL);
              v1 = v6;
              if ( v6 >= 0 )
                return (unsigned int)PiDrvDbSetupNodes(0LL, (unsigned int)v6);
            }
          }
          return (unsigned int)v1;
        }
      }
    }
  }
  return (unsigned int)v1;
}
