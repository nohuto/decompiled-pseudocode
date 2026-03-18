/*
 * XREFs of flagString @ 0x1400D13C0
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1402031E4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     ?RtlStringCchCatA@@YAJPEAD_KPEBD@Z @ 0x1400D1588 (-RtlStringCchCatA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall flagString(__int64 a1)
{
  __int16 v1; // bx
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 UserSessionState; // rax
  unsigned __int64 v21; // rdx

  v1 = a1;
  *(_BYTE *)(W32GetUserSessionState(a1) + 12320) = 0;
  if ( (v1 & 1) == 0
    || (v14 = W32GetUserSessionState(v2), (int)RtlStringCchCatA((char *)(v14 + 12320), v15, "|NEW") >= 0) )
  {
    if ( (v1 & 2) == 0
      || (v3 = W32GetUserSessionState(v2), (int)RtlStringCchCatA((char *)(v3 + 12320), v4, "|INRANGE") >= 0) )
    {
      if ( (v1 & 4) == 0
        || (v5 = W32GetUserSessionState(v2), (int)RtlStringCchCatA((char *)(v5 + 12320), v6, "|INCONTACT") >= 0) )
      {
        if ( (v1 & 0x2000) == 0
          || (v7 = W32GetUserSessionState(v2), (int)RtlStringCchCatA((char *)(v7 + 12320), v8, "|PRIMARY") >= 0) )
        {
          if ( (v1 & 0x4000) == 0
            || (v9 = W32GetUserSessionState(v2), (int)RtlStringCchCatA((char *)(v9 + 12320), v10, "|CONFIDENCE") >= 0) )
          {
            if ( v1 >= 0
              || (v16 = W32GetUserSessionState(v2), (int)RtlStringCchCatA((char *)(v16 + 12320), v17, "|CANCELED") >= 0) )
            {
              if ( (v1 & 0x10) == 0
                || (v11 = W32GetUserSessionState(v2),
                    (int)RtlStringCchCatA((char *)(v11 + 12320), v12, "|FIRSTBUTTON") >= 0) )
              {
                if ( (v1 & 0x20) == 0
                  || (v18 = W32GetUserSessionState(v2),
                      (int)RtlStringCchCatA((char *)(v18 + 12320), v19, "|SECONDBUTTON") >= 0) )
                {
                  if ( (v1 & 0x40) != 0 )
                  {
                    UserSessionState = W32GetUserSessionState(v2);
                    RtlStringCchCatA((char *)(UserSessionState + 12320), v21, "|THIRDBUTTON");
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return W32GetUserSessionState(v2) + 12320;
}
