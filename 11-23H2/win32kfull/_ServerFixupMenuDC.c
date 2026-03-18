/*
 * XREFs of _ServerFixupMenuDC @ 0x1C023424C
 * Callers:
 *     SfnINLPUAHDRAWMENU @ 0x1C0209510 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C0209870 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1C0209C20 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C0209F80 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C020B0F0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C00E40B0 (MNGetpItemFromIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00E4940 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 *     _WindowFromDC @ 0x1C01BD748 (_WindowFromDC.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C0232F10 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C02D7170 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C02D7214 (GreSetTextAlign.c)
 */

__int64 __fastcall ServerFixupMenuDC(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  const struct tagWND *v10; // rax
  const struct tagWND *v11; // rbx
  __int64 *DPIMETRICS; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD **v15; // rax
  bool v16; // zf
  _QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v18, 0LL);
    v19 = 0LL;
    v10 = WindowFromDC(a1);
    v11 = v10;
    if ( v10 )
    {
      DCEx = _GetDCEx(v10, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      DPIMETRICS = (__int64 *)GetDPIMETRICS(v11);
      GreSelectFontInternal(DCEx, *DPIMETRICS, 1);
      v13 = ValidateHmenu(a2);
      v19 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v18, v13);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v18) )
      {
        GreGetTextAlign((HDC)a1);
        if ( a4 && *(_QWORD *)(*(_QWORD *)v18[0] + 88LL) )
        {
          v14 = v19;
          if ( !v19 )
            v14 = *(_QWORD *)v18[0];
          v15 = (_DWORD **)MNGetpItemFromIndex(v14, a3);
          if ( !v15 )
            goto LABEL_15;
          v16 = (**v15 & 0x2000) == 0;
          goto LABEL_13;
        }
        if ( *(_QWORD *)(*(_QWORD *)v18[0] + 88LL) )
        {
          v16 = (***(_DWORD ***)(*(_QWORD *)v18[0] + 88LL) & 0x2000) == 0;
LABEL_13:
          if ( !v16 )
            GreSetTextAlign((HDC)a1);
        }
      }
    }
LABEL_15:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v18);
  }
  return DCEx;
}
