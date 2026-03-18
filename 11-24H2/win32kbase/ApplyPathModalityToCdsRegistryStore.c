/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x140122B28
 * Callers:
 *     ApplyPathsModality @ 0x1401C67FC (ApplyPathsModality.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140122CD0 (DrvUpdateDisplayDriverParameters.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rsi
  unsigned int v4; // r15d
  __int64 v5; // rcx
  __int64 i; // rbx
  int updated; // ebp
  struct _devicemodeW *v8; // r14
  unsigned int j; // edx
  __int64 k; // rcx
  __int64 result; // rax

  v3 = (char *)PALLOCMEM(220LL, 0x73726447u);
  if ( v3 )
  {
    v4 = 0;
    v5 = *(_QWORD *)(W32GetSessionState(v2) + 88);
    for ( i = *(_QWORD *)(v5 + 1096); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
      {
        v8 = (struct _devicemodeW *)v3;
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 20); ++j )
        {
          v5 = 296LL * j;
          if ( *(_QWORD *)(v5 + a1 + 304)
            && !_bittest64((const signed __int64 *)(v5 + a1 + 56), 0x24u)
            && *(_DWORD *)(i + 240) == *(_DWORD *)(v5 + a1 + 72)
            && *(_DWORD *)(i + 244) == *(_DWORD *)(v5 + a1 + 76)
            && *(_DWORD *)(i + 248) == *(_DWORD *)(v5 + a1 + 80) )
          {
            v8 = *(struct _devicemodeW **)(v5 + a1 + 304);
            break;
          }
        }
        for ( k = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5) + 88) + 1096LL); ; k = *(_QWORD *)(k + 128) )
        {
          if ( !k )
          {
            updated = -1073741811;
LABEL_4:
            WdLogSingleEntry4(2LL, i, a1);
            WdLogGlobalForLineNumber = 12482;
            v4 = updated;
            goto LABEL_5;
          }
          if ( k == i )
            break;
        }
        updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)k, v8, v8 == (struct _devicemodeW *)v3);
        if ( updated < 0 )
          goto LABEL_4;
      }
LABEL_5:
      ;
    }
    GreDeleteFastMutex(v3);
    return v4;
  }
  else
  {
    WdLogSingleEntry2(6LL, 220LL, a1);
    result = 3221225626LL;
    WdLogGlobalForLineNumber = 12445;
  }
  return result;
}
