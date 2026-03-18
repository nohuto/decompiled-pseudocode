/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     IsPTPIVEnabled @ 0x14004FBE8 (IsPTPIVEnabled.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1400DE554 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105780 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     IsExemptInjectionDevice @ 0x140125E9C (IsExemptInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x14019D408 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1401F3550 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1401F3574 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x1402085D8 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 *     IsPenIVEnabled @ 0x140217E98 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x140217EF0 (IsTouchIVEnabled.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x14021ADC4 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ApiSetGetLatestInputTransform @ 0x140222358 (ApiSetGetLatestInputTransform.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        int a3,
        int a4)
{
  int v5; // ebx
  char v6; // al
  CTouchProcessor *v7; // rcx
  unsigned int v8; // r12d
  const struct CPointerInfoNode *v9; // r14
  unsigned int v10; // r15d
  CInputDest *v11; // rsi
  char v12; // bl
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned int v22; // ecx
  __int64 v23; // rdx
  int v24; // r15d
  __int64 v25; // r8
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  bool v29; // di
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  unsigned int v33; // r13d
  __int64 v34; // r14
  __int64 v35; // r12
  __int64 v36; // rdx
  bool v37; // cf
  __int64 i; // rax
  __int64 v39; // r10
  __int64 v40; // r9
  int v41; // ecx
  int v43; // eax
  _OWORD *v44; // rax
  __int128 v45; // xmm1
  HWND ContainerHwndDest; // rax
  __int64 v47; // r10
  __int64 v48; // r11
  __int64 v49; // r9
  struct DEVICEINFO *v50; // rax
  struct CPTPProcessor *Processor; // rax
  bool v52; // di
  __int64 UserSessionState; // rax
  int v54; // r8d
  int v55; // edx
  __int16 v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+50h] [rbp-B0h]
  size_t Sizea; // [rsp+58h] [rbp-A8h]
  HWND WindowHandle; // [rsp+60h] [rbp-A0h]
  struct tagRIMPOINTERINFONODE *v62; // [rsp+68h] [rbp-98h]
  _QWORD v63[2]; // [rsp+70h] [rbp-90h] BYREF
  int v64; // [rsp+80h] [rbp-80h]
  int v65; // [rsp+84h] [rbp-7Ch]
  _OWORD v66[15]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v67[64]; // [rsp+180h] [rbp+80h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16191);
  v5 = *(_DWORD *)(*((_QWORD *)a2 + 30) + 168LL);
  if ( v5 == 2 )
  {
    v6 = IsTouchIVEnabled();
  }
  else
  {
    if ( v5 == 3 && (unsigned __int8)IsPenIVEnabled() )
      goto LABEL_6;
    if ( v5 != 5 )
      return;
    v6 = IsPTPIVEnabled();
  }
  if ( !v6 )
    return;
LABEL_6:
  v8 = 0;
  v9 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  v10 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v11 = (const struct CPointerInfoNode *)((char *)v9 + 352);
    v12 = 1;
    do
    {
      if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(v7, a2, v9, a4)
        && CInputDest::GetContainerInfo(v11) )
      {
        ++v8;
        v7 = (CTouchProcessor *)(unsigned int)*CInputDest::GetContainerId(v11);
        *(_DWORD *)v9 |= 0x1000u;
        *((_DWORD *)v11 - 87) |= 0x2000u;
        *((_DWORD *)v11 + 30) = (_DWORD)v7;
      }
      ++v10;
      v9 = (const struct CPointerInfoNode *)((char *)v9 + 480);
      v11 = (CInputDest *)((char *)v11 + 480);
    }
    while ( v10 < *((_DWORD *)a2 + 12) );
    if ( v8 )
    {
      memset(v66, 0, sizeof(v66));
      if ( !IsExemptInjectionDevice(*((_QWORD *)a2 + 8)) )
      {
        v13 = *(_QWORD *)(*((_QWORD *)a2 + 32) + 16LL);
        if ( a3 )
          v14 = *(_QWORD *)(v13 + 24);
        else
          v14 = *(_QWORD *)(v13 + 16);
        *(_QWORD *)&v66[2] = v14;
      }
      v15 = *(_OWORD *)((char *)a2 + 88);
      v66[3] = *(_OWORD *)((char *)a2 + 72);
      v16 = *(_OWORD *)((char *)a2 + 104);
      v66[4] = v15;
      v17 = *(_OWORD *)((char *)a2 + 120);
      v66[5] = v16;
      v18 = *(_OWORD *)((char *)a2 + 136);
      v66[6] = v17;
      v19 = *(_OWORD *)((char *)a2 + 152);
      v66[7] = v18;
      v20 = *(_OWORD *)((char *)a2 + 168);
      v66[8] = v19;
      v21 = *(_OWORD *)((char *)a2 + 200);
      v66[9] = v20;
      v66[10] = *(_OWORD *)((char *)a2 + 184);
      v66[11] = v21;
      v22 = *((_DWORD *)a2 + 14);
      v23 = *((_QWORD *)a2 + 29);
      LODWORD(v66[12]) = a3;
      *(_QWORD *)((char *)&v66[12] + 4) = 0LL;
      *(_QWORD *)&v66[13] = 0LL;
      HIDWORD(v66[1]) = v22;
      v24 = 24 * (v22 + 10);
      *(_QWORD *)&v66[14] = 0LL;
      if ( v22 )
      {
        v25 = v22;
        do
        {
          v26 = *(_DWORD *)(v23 + 8);
          v23 = *(_QWORD *)(v23 + 24);
          v24 += (v26 + 7) & 0xFFFFFFF8;
          --v25;
        }
        while ( v25 );
      }
      v27 = 192LL * v8;
      if ( v27 <= 0xFFFFFFFF )
      {
        Sizea = (unsigned int)v27;
        v28 = Win32AllocPoolZInitImpl(256LL, (unsigned int)v27, 0x43547072u);
        if ( v28 )
        {
          v33 = 0;
          if ( *((_DWORD *)a2 + 12) )
          {
            v34 = *((_QWORD *)a2 + 30) + 4LL;
            do
            {
              if ( (*(_DWORD *)v34 & 0x2000) != 0 && (*(_DWORD *)v34 & 0x4000) == 0 )
              {
                v35 = 0LL;
                memset((void *)v28, 0, Sizea);
                v37 = v33 < *((_DWORD *)a2 + 12);
                for ( i = v33; ; v37 = (unsigned int)i < *((_DWORD *)a2 + 12) )
                {
                  v57 = i;
                  if ( !v37 )
                  {
                    v65 = 0;
                    v24 += 192 * v35;
                    DWORD2(v66[1]) = v35;
                    *((_QWORD *)&v66[14] + 1) = v28;
                    v63[0] = v66;
                    LODWORD(v66[0]) = v24;
                    v64 = *(_DWORD *)(v34 + 468);
                    v63[1] = a2;
                    IVRootDeliver::Pointer::SendTouchInput(
                      (IVRootDeliver::Pointer *)v63,
                      (struct CContainerPointerInput *)v36);
                    if ( (*(_DWORD *)(v28 + 28) & 0x10000) != 0 )
                    {
                      v50 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*(_QWORD *)(v28 + 32), 19);
                      Processor = CPTPProcessorFactory::GetProcessor(v50);
                      if ( Processor )
                      {
                        *((_DWORD *)Processor + 97) |= 2u;
                        *((_DWORD *)Processor + 96) = v64;
                      }
                    }
                    break;
                  }
                  v39 = *((_QWORD *)a2 + 30);
                  v40 = 480 * i;
                  v41 = *(_DWORD *)(v39 + 480 * i + 4);
                  if ( (v41 & 0x2000) != 0 )
                  {
                    v36 = 0x4000LL;
                    if ( (v41 & 0x4000) == 0
                      && *(_WORD *)(v34 + 468) == *(_WORD *)(v39 + v40 + 472)
                      && *(_WORD *)(v34 + 470) == *(_WORD *)(v39 + v40 + 474) )
                    {
                      v43 = *(_DWORD *)(v39 + v40 + 156);
                      *(_DWORD *)(v39 + v40 + 4) = v41 | 0x4000;
                      v62 = (struct tagRIMPOINTERINFONODE *)(v28 + 192 * v35);
                      *(_DWORD *)v62 = v43;
                      v44 = (_OWORD *)(v40 + v39 + 160);
                      *(_OWORD *)((char *)v62 + 8) = *v44;
                      *(_OWORD *)((char *)v62 + 24) = v44[1];
                      *(_OWORD *)((char *)v62 + 40) = v44[2];
                      *(_OWORD *)((char *)v62 + 56) = v44[3];
                      *(_OWORD *)((char *)v62 + 72) = v44[4];
                      *(_OWORD *)((char *)v62 + 88) = v44[5];
                      *(_OWORD *)((char *)v62 + 104) = v44[6];
                      v45 = v44[7];
                      v44 += 8;
                      *(_OWORD *)((char *)v62 + 120) = v45;
                      *(_OWORD *)((char *)v62 + 136) = *v44;
                      *(_OWORD *)((char *)v62 + 152) = v44[1];
                      *(_OWORD *)((char *)v62 + 168) = v44[2];
                      *((_QWORD *)v62 + 23) = *((_QWORD *)v44 + 6);
                      *((_DWORD *)v62 + 7) &= 0xFF87FFFE;
                      ContainerHwndDest = CInputDest::GetContainerHwndDest((CInputDest *)(v34 + 348));
                      *(_QWORD *)(v48 + 40) = ContainerHwndDest;
                      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v49 + v47 + 352));
                      memset(v67, 0, sizeof(v67));
                      if ( !(unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v67)
                        || !CTouchProcessor::TransformPointerCoordinates((const struct tagINPUT_TRANSFORM *)v67, v62) )
                      {
                        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
                        {
                          v12 = 0;
                        }
                        v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
                          LOBYTE(v54) = v52;
                          LOBYTE(v55) = v12;
                          WPP_RECORDER_AND_TRACE_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v55,
                            v54,
                            *(_QWORD *)(UserSessionState + 69400),
                            2,
                            4,
                            342,
                            (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
                            (char)WindowHandle);
                        }
                        return;
                      }
                      v35 = (unsigned int)(v35 + 1);
                    }
                  }
                  i = (unsigned int)(v57 + 1);
                }
              }
              ++v33;
              v34 += 480LL;
            }
            while ( v33 < *((_DWORD *)a2 + 12) );
          }
          GreDeleteFastMutex((char *)v28);
          return;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v12 = 0;
        }
        v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v32 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        v56 = 341;
LABEL_70:
        LOBYTE(v31) = v29;
        LOBYTE(v30) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v31,
          v32,
          2,
          4,
          v56,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        return;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        v56 = 340;
        goto LABEL_70;
      }
    }
  }
}
