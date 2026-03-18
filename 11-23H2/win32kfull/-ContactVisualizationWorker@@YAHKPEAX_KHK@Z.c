/*
 * XREFs of ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01AC914
 * Callers:
 *     EditionContactVisualization @ 0x1C014F740 (EditionContactVisualization.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00A3310 (IsCurrentDesktopComposed.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C014F474 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     _GetPointerDeviceType @ 0x1C0152698 (_GetPointerDeviceType.c)
 *     DwmAsyncSendTouchContacts @ 0x1C01594E6 (DwmAsyncSendTouchContacts.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01ACD10 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01ACDE0 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01ACFB8 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01AD138 (-SwitchMouseCursors@@YAXK_N@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01AD3FC (FeedbackGetWindowSetting.c)
 */

_BOOL8 __fastcall ContactVisualizationWorker(unsigned int a1, char *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // r14d
  char *v7; // rdi
  void *v8; // r12
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  char *v17; // rbx
  int v18; // r8d
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // esi
  __int64 v22; // rax
  bool v23; // di
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // ecx
  BOOL v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rsi
  _BOOL8 v30; // rdx
  Feedback *v31; // rbx
  int v32; // eax
  __int64 i; // rdi
  __int64 v34; // rbx
  unsigned int v35; // esi
  void *v36; // rax
  struct tagDIGITIZER_CONTACT_INFO *v38; // [rsp+28h] [rbp-50h]
  int v39; // [rsp+30h] [rbp-48h] BYREF
  int v40; // [rsp+34h] [rbp-44h]
  int v41; // [rsp+38h] [rbp-40h] BYREF
  int v42; // [rsp+3Ch] [rbp-3Ch]
  Feedback *v43; // [rsp+40h] [rbp-38h]
  _DWORD v44[4]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v45[8]; // [rsp+58h] [rbp-20h] BYREF
  int v46; // [rsp+C0h] [rbp+48h] BYREF
  char *v47; // [rsp+C8h] [rbp+50h]
  __int64 v48; // [rsp+D0h] [rbp+58h]
  int v49; // [rsp+D8h] [rbp+60h]

  v49 = a4;
  v48 = a3;
  v47 = a2;
  v5 = a1;
  v6 = 0;
  v42 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v40 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v8 = (void *)Win32AllocPoolZInit(40 * v5, 1987081045LL);
  v13 = 0LL;
  if ( (_DWORD)v5 )
  {
    v14 = v48;
    do
    {
      v41 = 0;
      v15 = SGDGetUserSessionState(v12);
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              *(CTouchProcessor **)(v15 + 3424),
                                              v7,
                                              &v41);
      v43 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v17 = (char *)ContactVisualizationPointerEventInt + 8;
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          if ( *(_DWORD *)v17 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v17 + 2)) == 1 )
          {
            v19 = *((_DWORD *)v17 + 3);
            Feedback::gfIntegratedPenActive = (v19 >> 1) & 1;
            if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v19 & 0x10001) != 0 )
              SwitchMouseCursors(3u, 0);
            v44[0] = *((_DWORD *)v17 + 3);
            v44[1] = *((_DWORD *)v17 + 8);
            v44[2] = *((_DWORD *)v17 + 9);
            DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v17, (const struct tagPOINTERCURSORDATA *)v44);
          }
          else if ( !Feedback::gfIntegratedPenActive )
          {
            v20 = *((_DWORD *)v17 + 3);
            if ( (v20 & 0x2000) != 0 )
            {
              v46 = 0;
              v21 = 0;
              v45[0] = v20;
              v45[1] = *((_DWORD *)v17 + 8);
              v45[2] = *((_DWORD *)v17 + 9);
              if ( (unsigned int)(*(_DWORD *)v17 - 2) <= 1 )
              {
                v12 = *((_QWORD *)v17 + 3);
                if ( v12 )
                {
                  v22 = ValidateHwnd(v12);
                  if ( v22 )
                  {
                    if ( (unsigned int)FeedbackGetWindowSetting(v22, 13LL, 1LL, &v46) )
                      v21 = v46;
                  }
                }
              }
              if ( (*((_DWORD *)v17 + 3) & 0x10001) != 0 )
              {
                v23 = 0;
                if ( *(_DWORD *)v17 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v17 + 2)) == 2 || v21 )
                {
                  v26 = 4;
                }
                else
                {
                  if ( *(_DWORD *)v17 == 2
                    && (v24 = *((_QWORD *)v17 + 3)) != 0
                    && (v25 = ValidateHwnd(v24)) != 0
                    && (unsigned int)FeedbackGetWindowSetting(v25, 12LL, 1LL, &v46)
                    && v46
                    || !(unsigned int)IsCurrentDesktopComposed() )
                  {
                    v23 = 1;
                  }
                  v26 = *(_DWORD *)v17;
                }
                SwitchMouseCursors(v26, v23);
                v7 = v47;
              }
              if ( !v21 )
                DeferPointerCursorOperation(
                  (const struct tagPOINTER_INFO *)v17,
                  (const struct tagPOINTERCURSORDATA *)v45);
              v10 = v40;
            }
          }
          if ( a5 != 3 )
          {
            v39 = 0;
            if ( *(_DWORD *)v17 != 2
              || (unsigned int)Feedback::GetWindowVisualizationSetting(
                                 (Feedback *)v17,
                                 (const struct tagPOINTER_INFO *)(v10 == 0),
                                 a5 == 2,
                                 v10 == 2,
                                 (__int64)&v39,
                                 (int *)v38)
              || v39 )
            {
              if ( v8 )
              {
                v27 = 1;
                v28 = 5 * v13;
                v13 = (unsigned int)(v13 + 1);
                v29 = (__int64)v8 + 8 * v28;
                if ( *(_DWORD *)v17 == 3 )
                  v27 = Feedback::GetWindowBarrelVisualizationSetting(
                          (Feedback *)v17,
                          (const struct tagPOINTER_INFO *)(v41 != 0),
                          v18) != 0;
                v30 = v49 && a5 == 2;
                v31 = v43;
                Feedback::PointerEventIntToDigitizerContactInfo(
                  v43,
                  (const struct tagPOINTEREVENTINT *)v30,
                  v27,
                  v39,
                  v29,
                  v38);
                v32 = *((_DWORD *)v31 + 5);
                if ( (v32 & 0x10000) != 0 )
                {
                  EtwTraceContactVisualizationDown();
                }
                else if ( (v32 & 0x40000) != 0 )
                {
                  EtwTraceContactVisualizationUp();
                }
                v7 = v47;
              }
            }
          }
        }
      }
      v10 = v40;
      v7 += v14;
      v47 = v7;
      --v9;
    }
    while ( v9 );
    v6 = v42;
  }
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v13; i = v35 + (unsigned int)i )
    {
      v34 = gdwRitInputDesktopId;
      v35 = v13 - i;
      if ( (unsigned int)(v13 - i) > 0xB )
        v35 = 11;
      v36 = (void *)ReferenceDwmApiPort(v12, v11);
      v6 = DwmAsyncSendTouchContacts(v36, (__int64)v8 + 40 * i, v34, v35);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
