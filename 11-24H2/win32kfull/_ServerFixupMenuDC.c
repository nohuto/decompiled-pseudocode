/*
 * XREFs of _ServerFixupMenuDC @ 0x14015A1FC
 * Callers:
 *     SfnINLPUAHDRAWMENUITEM @ 0x1401CCCE0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1401CF210 (SfnINLPUAHINITMENU.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401DDB20 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1401ED350 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x140202F70 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _WindowFromDC @ 0x14015A3B8 (_WindowFromDC.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1401BD7D4 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     GetDpiMetricsForWindow @ 0x1402F1798 (GetDpiMetricsForWindow.c)
 */

HDC __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  HDC DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // r8
  __int64 DpiMetricsForWindow; // rax
  __int64 v20; // rax
  int TextAlign; // r8d
  __int64 v22; // rcx
  _DWORD **v23; // rax
  bool v24; // zf
  __int64 v25[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v25, v10);
    v12 = WindowFromDC(a1);
    v14 = v12;
    if ( v12 )
    {
      DCEx = (HDC)_GetDCEx(v12, 0LL, 65539LL);
      UserSessionState = W32GetUserSessionState(v16, v15);
      GreSelectBrush(DCEx, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4752LL), v18);
      DpiMetricsForWindow = GetDpiMetricsForWindow(v14);
      GreSelectFont(DCEx, *(HFONT *)(DpiMetricsForWindow + 8));
      v20 = ValidateHmenu(a2, 1LL);
      v26 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v25, v20);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v25) )
      {
        TextAlign = GreGetTextAlign(a1);
        if ( a4 )
        {
          v13 = *(_QWORD *)v25[0];
          if ( *(_QWORD *)(*(_QWORD *)v25[0] + 88LL) )
          {
            v22 = v26;
            if ( !v26 )
              v22 = *(_QWORD *)v25[0];
            v23 = (_DWORD **)MNGetpItemFromIndex(v22, a3);
            if ( !v23 )
              goto LABEL_5;
            v24 = (**v23 & 0x2000) == 0;
            goto LABEL_15;
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)v25[0] + 88LL) )
        {
          v24 = (***(_DWORD ***)(*(_QWORD *)v25[0] + 88LL) & 0x2000) == 0;
LABEL_15:
          if ( !v24 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
LABEL_5:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v25, v13);
  }
  return DCEx;
}
