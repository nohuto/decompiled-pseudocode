/*
 * XREFs of ?RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802D0590
 * Callers:
 *     ?RenderAndPresent@CHolographicInteropTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x180278280 (-RenderAndPresent@CHolographicInteropTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CHolographicInteropTarget@@WFA@EAAJPEAVCDrawingContext@@@Z @ 0x180278290 (-RenderAndPresent@CHolographicInteropTarget@@WFA@EAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xx_EventWriteTransfer.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x180211948 (McTemplateU0xxx_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x1802BD130 (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1802CF5F4 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802D0A38 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x1802D0CF0 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     ?UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802D359C (-UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderAndPresent(
        CHolographicInteropTarget *this,
        struct CDrawingContext *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r8
  bool v4; // r15
  _QWORD *v7; // rcx
  __int64 v8; // rax
  DWORD v9; // eax
  __int64 v10; // rcx
  unsigned int i; // edi
  struct CHolographicInteropTexture *v12; // rax
  struct CHolographicInteropTexture *v13; // rbp
  unsigned int v14; // r9d
  __int64 v15; // rdi
  void *v16; // rbp
  void *v17; // r14
  __int64 v18; // r8
  CHolographicInteropTaskQueue *v19; // rcx
  CD3DDevice *v20; // rcx
  unsigned int v21; // edi
  CHolographicInteropTexture *TextureAtIndex; // rax
  struct _EVENT_DATA_DESCRIPTOR PerformanceCount; // [rsp+40h] [rbp-48h] BYREF

  LOBYTE(v2) = 0;
  v3 = qword_1803FEB10 + 1;
  v4 = 0;
  ++qword_1803FEB10;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
  {
    McTemplateU0xx_EventWriteTransfer((__int64)this, &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER, v3, qword_1803FEB18);
    LODWORD(v3) = qword_1803FEB10;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 11);
  if ( (unsigned int)((__int64)(v7[19] - v7[18]) >> 3) )
  {
    v8 = v7[5];
    if ( v8 )
    {
      if ( !*(_BYTE *)(v8 + 216) )
      {
        v9 = WaitForSingleObject(*((HANDLE *)this + 23), 0xAu);
        v10 = *((_QWORD *)this + 11);
        if ( v9 )
        {
          v21 = 0;
          for ( LODWORD(v2) = (__int64)(*(_QWORD *)(v10 + 152) - *(_QWORD *)(v10 + 144)) >> 3; v21 < (unsigned int)v2; ++v21 )
          {
            TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 11), v21);
            if ( TextureAtIndex )
              CHolographicInteropTexture::UpdateDirtyRegion(TextureAtIndex);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
            McTemplateU0xxx_EventWriteTransfer(
              v10,
              &EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED,
              qword_1803FEB10,
              qword_1803FEB18,
              0LL);
          CComposition::ScheduleCompositionPass(*((_QWORD *)this - 9), 0, 0x8000u);
        }
        else
        {
          v2 = (__int64)(*(_QWORD *)(v10 + 152) - *(_QWORD *)(v10 + 144)) >> 3;
          v4 = (_DWORD)v2 != 0;
          for ( i = 0; i < (unsigned int)v2; ++i )
          {
            v12 = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 11), i);
            v13 = v12;
            if ( v12 && *((_BYTE *)v12 + 2144) )
            {
              CHolographicInteropTexture::UpdateDirtyRegion(v12);
              CHolographicInteropTarget::RenderTexture(
                (CHolographicInteropTarget *)((char *)this - 96),
                a2,
                v13,
                v14,
                0);
            }
          }
          ++qword_1803FEB18;
          v15 = *((_QWORD *)this + 11);
          v16 = (void *)*((_QWORD *)this + 23);
          v17 = (void *)*((_QWORD *)this + 22);
          PerformanceCount.Ptr = 0LL;
          QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
          v19 = *(CHolographicInteropTaskQueue **)(v15 + 48);
          if ( v19 && *(_BYTE *)(v15 + 240) )
            CHolographicInteropTaskQueue::PostMessageW(v19, 5u, 0LL, 0LL, v17, v16, (void *)PerformanceCount.Ptr);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED,
              v18,
              1u,
              &PerformanceCount);
          v20 = (CD3DDevice *)*((_QWORD *)this + 13);
          if ( v20 )
            CD3DDevice::EnqueueSetEvent(v20, *((void **)this + 22));
        }
        LODWORD(v3) = qword_1803FEB10;
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xxxx_EventWriteTransfer(
      v3 - qword_1803FEB18,
      (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE,
      v3,
      qword_1803FEB18,
      v3 - qword_1803FEB18,
      v2);
  if ( v4 )
  {
    ++*((_DWORD *)this + 35);
    PerformanceCount.Ptr = 0LL;
    QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
    *((_QWORD *)this + 18) = PerformanceCount.Ptr;
  }
  return 0LL;
}
