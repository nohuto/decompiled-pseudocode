/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002F5A0
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003FA40 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetDirtyRegion@CRedirectedGDISurface@@QEAAJ_KPEAPEAUHRGN__@@@Z @ 0x180027530 (-GetDirtyRegion@CRedirectedGDISurface@@QEAAJ_KPEAPEAUHRGN__@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180028278 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x18002EDA0 (-AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18002F954 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1801EA800 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x180206804 (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x1802077B8 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x18020D97C (McTemplateU0xxq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        unsigned int *a3,
        bool *a4)
{
  int v5; // ecx
  unsigned int v8; // r13d
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  _QWORD *v13; // rcx
  bool v14; // di
  void *v15; // rsi
  const struct tagRECT *v17; // rsi
  PVOID v18; // rax
  CGdiSpriteBitmap *v19; // r14
  HANDLE ProcessHeap; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r15
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // rdx
  int v30; // eax
  _QWORD *v31; // rax
  CGdiSpriteBitmap *v32; // rsi
  __int64 v33; // rdx
  CRedirectedGDISurface *v34; // rcx
  HGDIOBJ ho; // [rsp+40h] [rbp-59h] BYREF
  __int64 Buffer; // [rsp+48h] [rbp-51h] BYREF
  __int128 v37; // [rsp+50h] [rbp-49h]
  LPVOID lpMem; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v39[18]; // [rsp+68h] [rbp-31h] BYREF

  *a4 = 0;
  v5 = *(_DWORD *)a2;
  lpMem = v39;
  v39[0] = 0;
  v8 = 0;
  v9 = v5 - 1;
  if ( !v9 )
  {
    v17 = (const struct tagRECT *)((char *)a2 + 60);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxqNR2_EventWriteTransfer(
        0,
        (_DWORD)a2,
        *((_QWORD *)a2 + 2),
        *((_QWORD *)a2 + 3),
        *((_DWORD *)a2 + 14));
    Buffer = *((_QWORD *)a2 + 2);
    v37 = 0LL;
    v18 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
    v14 = 1;
    if ( v18 )
    {
      v19 = (CGdiSpriteBitmap *)*((_QWORD *)v18 + 2);
      if ( v19 )
      {
        CRegion::AddRectangles((struct FastRegion::Internal::CRgnData **)&lpMem, v17, *((_DWORD *)a2 + 14));
        CGdiSpriteBitmap::AddDirtyRegion(v19, (struct CRegion *)&lpMem, 1);
      }
    }
    goto LABEL_6;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_43;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 2;
    if ( !v12 )
    {
      v13 = (_QWORD *)*((_QWORD *)this + 26);
      v14 = 0;
      if ( v13 && v13[7] == *((_QWORD *)a2 + 2) && *((_BYTE *)this + 220) )
      {
        (*(void (__fastcall **)(_QWORD *, const struct _D3DKMT_PRESENTHISTORYTOKEN *, unsigned int *))(*v13 + 40LL))(
          v13,
          a2,
          a3);
        *((_BYTE *)this + 220) = 0;
        v14 = 1;
      }
      goto LABEL_6;
    }
    if ( v12 == 1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxq_EventWriteTransfer(
          1,
          (unsigned int)&EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDISYSMEM,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 4),
          *((_DWORD *)a2 + 6));
      Buffer = *((_QWORD *)a2 + 2);
      v37 = 0LL;
      v31 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
      v14 = 1;
      if ( v31 )
      {
        v32 = (CGdiSpriteBitmap *)v31[2];
        if ( v32 )
        {
          v33 = *((_QWORD *)a2 + 4);
          v34 = (CRedirectedGDISurface *)*((_QWORD *)v32 + 16);
          ho = 0LL;
          if ( (int)CRedirectedGDISurface::GetDirtyRegion(v34, v33, (HRGN *)&ho) >= 0 )
          {
            if ( ho )
            {
              CRegion::SetHRGN((CRegion *)&lpMem, (HRGN)ho);
              CGdiSpriteBitmap::AddDirtyRegion(v32, (struct CRegion *)&lpMem, 1);
              DeleteObject(ho);
            }
          }
        }
      }
      goto LABEL_6;
    }
LABEL_43:
    *a4 = 1;
    goto LABEL_7;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxqNR3_EventWriteTransfer(
      0,
      (_DWORD)a2,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4),
      *((_DWORD *)a2 + 10));
  v21 = (_QWORD *)*((_QWORD *)this + 11);
  while ( 1 )
  {
    v14 = 1;
    if ( v21 == (_QWORD *)((char *)this + 80) )
      break;
    v22 = v21 - 20;
    v21 = (_QWORD *)v21[1];
    if ( v22[52] == *((_QWORD *)a2 + 3) )
    {
      if ( v22 )
      {
        CRegion::AddRectangles(
          (struct FastRegion::Internal::CRgnData **)&lpMem,
          (const struct tagRECT *)((char *)a2 + 44),
          *((_DWORD *)a2 + 10));
        if ( *(_DWORD *)lpMem )
        {
          v23 = *((_DWORD *)lpMem + 2);
          v24 = *((_DWORD *)lpMem + 3);
          v25 = *((_DWORD *)lpMem + 2 * *(int *)lpMem + 1);
          v26 = -1;
          if ( *((int *)lpMem + 1) >= 0 )
            v26 = *((_DWORD *)lpMem + 1);
          *((_DWORD *)v22 + 86) = v26;
          v27 = -1;
          if ( v24 >= 0 )
            v27 = v24;
          *((_DWORD *)v22 + 87) = v27;
          v28 = -1;
          if ( v23 >= 0 )
            v28 = v23;
          *((_DWORD *)v22 + 88) = v28;
          if ( v25 < 0 )
            v25 = -1;
          *((_DWORD *)v22 + 89) = v25;
          CGdiSpriteBitmap::AddDirtyRegion((CGdiSpriteBitmap *)v22, (struct CRegion *)&lpMem, 1);
        }
      }
      break;
    }
  }
  v29 = *((_QWORD *)a2 + 4);
  if ( v29 )
  {
    v30 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, v29);
    v8 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xB7u, 0LL);
      goto LABEL_7;
    }
  }
LABEL_6:
  *a4 = v14;
LABEL_7:
  v15 = lpMem;
  if ( v39 != lpMem && lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v15);
  }
  return v8;
}
