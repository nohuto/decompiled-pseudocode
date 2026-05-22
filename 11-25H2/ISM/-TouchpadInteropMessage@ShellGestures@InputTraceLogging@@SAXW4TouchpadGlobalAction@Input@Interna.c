/*
 * XREFs of ?TouchpadInteropMessage@ShellGestures@InputTraceLogging@@SAXW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x180158B84
 * Callers:
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180158118 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180001330 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

char __fastcall InputTraceLogging::ShellGestures::TouchpadInteropMessage(int a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  const char *v11; // rax
  const char *v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 512LL);
    if ( (_BYTE)v2 )
    {
      if ( a1 )
      {
        v4 = a1 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              v7 = v6 - 1;
              if ( v7 )
              {
                v8 = v7 - 1;
                if ( v8 )
                {
                  v9 = v8 - 1;
                  if ( v9 )
                  {
                    v10 = v9 - 1;
                    if ( v10 )
                    {
                      if ( v10 == 1 )
                        v11 = "FiveFingerPressUp";
                      else
                        v11 = "UNKNOWN";
                    }
                    else
                    {
                      v11 = "FourFingerPressUp";
                    }
                  }
                  else
                  {
                    v11 = "ThreeFingerPressUp";
                  }
                }
                else
                {
                  v11 = "FiveFingerPressDown";
                }
              }
              else
              {
                v11 = "FourFingerPressDown";
              }
            }
            else
            {
              v11 = "ThreeFingerPressDown";
            }
          }
          else
          {
            v11 = "FiveFingerTap";
          }
        }
        else
        {
          v11 = "FourFingerTap";
        }
      }
      else
      {
        v11 = "ThreeFingerTap";
      }
      v13 = v11;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                     v3,
                     (__int64)&unk_1802187C7,
                     0LL,
                     0LL,
                     (const unsigned __int16 **)&v13);
    }
  }
  return (char)v2;
}
