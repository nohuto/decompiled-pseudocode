/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18003ECAC
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1801D5530 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1801D5970 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003EF80 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18007609C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  int RenderTargetBitmap; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  int v9; // r11d
  int v10; // esi
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // r12d
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  unsigned __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  char v25[8]; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-21h]
  _DWORD *v27; // [rsp+40h] [rbp-19h]
  __int64 v28; // [rsp+48h] [rbp-11h]
  int v29; // [rsp+50h] [rbp-9h]
  int v30; // [rsp+60h] [rbp+7h] BYREF
  int v31; // [rsp+64h] [rbp+Bh]
  int v32; // [rsp+68h] [rbp+Fh]
  int v33; // [rsp+6Ch] [rbp+13h]
  __int128 v34; // [rsp+70h] [rbp+17h] BYREF

  v3 = *((_DWORD *)this + 481);
  v30 = 0;
  v31 = 0;
  v32 = v3;
  v33 = *((_DWORD *)this + 482);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_GETBITS,
      a3,
      1LL,
      &v34);
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v6 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0xA4u, 0LL);
  }
  else
  {
    v7 = CaptureBitsResponse::RenderForCapture(this);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xA7u, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 184LL))(*((_QWORD *)this + 6)) )
    {
      FastRegion::CRegion::BeginIterator(*((_QWORD *)this + 6) + 2520LL, v25);
      v9 = v33;
      v10 = v32;
      v11 = v31;
      v12 = v30;
      while ( (unsigned __int64)v27 < v26 )
      {
        v13 = 2 * v29;
        v34 = 0LL;
        DWORD1(v34) = *v27;
        HIDWORD(v34) = v27[2];
        LODWORD(v34) = *(_DWORD *)(v28 + 4 * v13);
        v14 = DWORD1(v34) - *((_DWORD *)this + 480);
        v15 = v34 - *((_DWORD *)this + 479);
        v16 = *(_DWORD *)(v28 + 4 * v13 + 4) - *((_DWORD *)this + 479);
        v17 = HIDWORD(v34) - *((_DWORD *)this + 480);
        v18 = v16;
        if ( v12 > v15 )
          v15 = v12;
        v19 = (unsigned int)v10;
        LODWORD(v34) = v15;
        if ( v11 > v14 )
          v14 = v11;
        DWORD1(v34) = v14;
        if ( v10 >= v16 )
          v19 = (unsigned int)v16;
        else
          v18 = v10;
        DWORD2(v34) = v18;
        v20 = v17;
        if ( v9 < v17 )
          v20 = v9;
        HIDWORD(v34) = v20;
        if ( (int)v19 <= v15 )
          goto LABEL_30;
        v21 = v9;
        if ( v9 >= v17 )
          v21 = v17;
        if ( v21 <= v14 )
        {
LABEL_30:
          v34 = 0uLL;
        }
        else
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, int))(**((_QWORD **)this + 8) + 128LL))(
                  *((_QWORD *)this + 8),
                  &v34,
                  *((_QWORD *)this + 246),
                  (unsigned int)v15,
                  v14);
          v6 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xBEu, 0LL);
            break;
          }
          v10 = v32;
          v11 = v31;
          v12 = v30;
        }
        FastRegion::Internal::CRgnData::StepIterator(
          (FastRegion::Internal::CRgnData *)v19,
          (struct FastRegion::CRegion::Iterator *)v25);
      }
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 8) + 128LL))(
              *((_QWORD *)this + 8),
              &v30,
              *((_QWORD *)this + 246),
              0LL,
              0);
      v6 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC4u, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_Stop,
      v8,
      1LL,
      &v34);
  return v6;
}
