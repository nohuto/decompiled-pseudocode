/*
 * XREFs of ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14002479C
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140024230 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003EABC (-WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003EC48 (-WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003ED30 (-WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003EDB8 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003EF1C (-WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003F468 (-WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003F550 (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003F8E0 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400536D0 (-WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140053A6C (-WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140057298 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140057F34 (-WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140058624 (-WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140059EB8 (-WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14005AE18 (-WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072310 (-WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072488 (-WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072518 (-WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072678 (-WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072708 (-WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MESSAGE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072798 (-WriteDxgDiagnosticsEvent_MESSAGE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072818 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400728A8 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072938 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400729C8 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140072A58 (-WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

void __fastcall WriteDxgDiagnosticsEvent(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rcx
  const wchar_t *v3; // r9
  bool v4; // zf
  int v5; // edx

  v2 = *(int *)a1;
  if ( (int)v2 <= 30 )
  {
    if ( (_DWORD)v2 == 30 )
    {
      WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(a1);
      return;
    }
    if ( (int)v2 > 14 )
    {
      if ( (int)v2 <= 22 )
      {
        switch ( (_DWORD)v2 )
        {
          case 0x16:
            goto LABEL_37;
          case 0xF:
            WriteDxgDiagnosticsEvent_OUTPUTDUPL(a1);
            return;
          case 0x10:
            WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS(a1);
            return;
          case 0x11:
            goto LABEL_37;
          case 0x12:
            WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE(a1);
            return;
          case 0x13:
            WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START(a1);
            return;
        }
        v4 = (_DWORD)v2 == 21;
        goto LABEL_36;
      }
      switch ( (_DWORD)v2 )
      {
        case 0x17:
          goto LABEL_37;
        case 0x18:
          WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2(a1);
          return;
        case 0x19:
          WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX(a1);
          return;
      }
      if ( (_DWORD)v2 != 27 && (_DWORD)v2 != 28 )
      {
        if ( (_DWORD)v2 == 29 )
        {
          WriteDxgDiagnosticsEvent_MESSAGE_PACKET(a1);
          return;
        }
        goto LABEL_92;
      }
    }
    else
    {
      if ( (_DWORD)v2 == 14 )
        goto LABEL_37;
      if ( (int)v2 <= 7 )
      {
        if ( (_DWORD)v2 != 7 )
        {
          if ( !(_DWORD)v2 )
          {
            WdLogSingleEntry1(1LL, v2);
            v3 = L"DXGK_DIAG_TYPE_NONE (0x%lx), being logged but it never should";
            WdLogGlobalForLineNumber = 1441;
LABEL_93:
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, v3, *(int *)a1, 0LL, 0LL, 0LL, 0LL);
            return;
          }
          if ( (_DWORD)v2 != 1 )
          {
            switch ( (_DWORD)v2 )
            {
              case 2:
                WriteDxgDiagnosticsEvent_HPD(a1);
                return;
              case 3:
                WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN(a1);
                return;
              case 4:
                WriteDxgDiagnosticsEvent_USER_CDS(a1);
                return;
              case 5:
                WriteDxgDiagnosticsEvent_DRV_CDS(a1);
                return;
              case 6:
                WriteDxgDiagnosticsEvent_CODE_POINT(a1);
                return;
            }
            goto LABEL_92;
          }
        }
        goto LABEL_37;
      }
      if ( (_DWORD)v2 == 8 )
      {
        WriteDxgDiagnosticsEvent_MONITOR_MGR(a1);
        return;
      }
      if ( (_DWORD)v2 == 9 )
      {
        WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND(a1);
        return;
      }
      if ( (_DWORD)v2 != 10 )
      {
        if ( (_DWORD)v2 == 11 || (_DWORD)v2 == 12 )
          goto LABEL_37;
        v4 = (_DWORD)v2 == 13;
LABEL_36:
        if ( v4 )
          goto LABEL_37;
LABEL_92:
        WdLogSingleEntry1(1LL, v2);
        v3 = L"Unrecognized diag type 0x%lx, being logged";
        WdLogGlobalForLineNumber = 1682;
        goto LABEL_93;
      }
    }
LABEL_71:
    WdLogSingleEntry1(3LL, v2);
    WdLogGlobalForLineNumber = 1639;
    return;
  }
  if ( (int)v2 <= 45 )
  {
    if ( (_DWORD)v2 == 45 )
    {
      WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket(a1);
      return;
    }
    if ( (int)v2 <= 38 )
    {
      if ( (_DWORD)v2 != 38 && (_DWORD)v2 != 31 && (_DWORD)v2 != 32 && (_DWORD)v2 != 33 )
      {
        switch ( (_DWORD)v2 )
        {
          case '"':
            WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN(a1);
            return;
          case '$':
            WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET(a1);
            return;
          case '%':
            WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(a1);
            return;
        }
        goto LABEL_92;
      }
      goto LABEL_37;
    }
    switch ( (_DWORD)v2 )
    {
      case '\'':
LABEL_37:
        WdLogSingleEntry1(1LL, v2);
        v3 = L"Obsolete diag type 0x%lx, being logged";
        WdLogGlobalForLineNumber = 1618;
        goto LABEL_93;
      case '(':
        WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3(a1);
        return;
      case ')':
        WriteDxgDiagnosticsEvent_ADAPTER_START2(a1);
        return;
      case '*':
        goto LABEL_71;
    }
    v5 = v2 - 43;
    if ( (_DWORD)v2 == 43 )
    {
      WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket(a1);
      return;
    }
    goto LABEL_70;
  }
  if ( (int)v2 <= 52 )
  {
    switch ( (_DWORD)v2 )
    {
      case '4':
        return;
      case '.':
        goto LABEL_37;
      case '/':
        WriteDxgDiagnosticsEvent_SDC(a1);
        return;
      case '0':
        WriteDxgDiagnosticsEvent_QDC(a1);
        return;
      case '1':
        WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS(a1);
        return;
    }
    v5 = v2 - 50;
    if ( (_DWORD)v2 == 50 )
    {
      WriteDxgDiagnosticsEvent_BML_PACKET(a1);
      return;
    }
LABEL_70:
    if ( v5 != 1 )
      goto LABEL_92;
    goto LABEL_71;
  }
  if ( (_DWORD)v2 != 53 && (_DWORD)v2 != 54 && (_DWORD)v2 != 55 && (_DWORD)v2 != 56 && (unsigned int)(v2 - 57) >= 2 )
    goto LABEL_92;
}
