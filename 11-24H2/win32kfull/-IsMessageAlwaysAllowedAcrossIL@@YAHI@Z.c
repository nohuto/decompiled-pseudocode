/*
 * XREFs of ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18
 * Callers:
 *     _PostMessageCheckIL @ 0x140085AB8 (_PostMessageCheckIL.c)
 *     _PostTransformableMessageIL @ 0x140118950 (_PostTransformableMessageIL.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x140140F70 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140165890 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x14017E558 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     NtUserPostThreadMessage @ 0x140244040 (NtUserPostThreadMessage.c)
 *     _ChangeWindowMessageFilterEx @ 0x14024ED84 (_ChangeWindowMessageFilterEx.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IsFmtBlocked@@YAHI@Z @ 0x140103EFC (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall IsMessageAlwaysAllowedAcrossIL(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx

  v2 = 0;
  if ( a1 <= 0x309 )
  {
    if ( a1 != 777 )
    {
      if ( a1 )
      {
        v3 = a1 - 3;
        if ( v3 )
        {
          v4 = v3 - 2;
          if ( v4 )
          {
            v5 = v4 - 8;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                v7 = v6 - 37;
                if ( v7 )
                {
                  v8 = v7 - 76;
                  if ( v8 )
                  {
                    v9 = v8 - 646;
                    if ( v9 )
                    {
                      if ( v9 != 3 )
                        return v2;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 1;
    }
    goto LABEL_23;
  }
  v11 = a1 - 778;
  if ( !v11 )
    goto LABEL_23;
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_23;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_23;
  v14 = v13 - 1;
  if ( !v14 )
    return 1;
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_23:
    LOBYTE(v2) = (unsigned int)IsFmtBlocked(128LL, a2) == 0;
    return v2;
  }
  v16 = v15 - 5;
  if ( !v16 )
    return 1;
  v17 = v16 - 7;
  if ( !v17 )
    return 1;
  v18 = v17 - 1;
  if ( !v18 || v18 == 4 )
    return 1;
  return v2;
}
