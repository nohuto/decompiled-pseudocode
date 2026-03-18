/*
 * XREFs of ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1802B5EA0
 * Callers:
 *     ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802CC7D0 (-Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802CC950 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800615A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180063F70 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ??$reset@PEAE$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z @ 0x18018BB14 (--$reset@PEAE$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CRegion::CreateHRGN(int **this, HRGN *a2)
{
  unsigned int RectangleCount; // eax
  unsigned int v5; // esi
  HRGN Region; // rsi
  signed int v7; // eax
  signed int v8; // ebx
  int v9; // r15d
  DWORD v10; // r12d
  RGNDATA *p_Data; // rbx
  char *Buffer; // rsi
  _DWORD *v13; // rcx
  int v14; // eax
  FastRegion::Internal::CRgnData *v15; // rcx
  __int64 v16; // rdx
  void *v17; // rax
  signed int LastError; // eax
  _BYTE v20[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h]
  _DWORD *v22; // [rsp+40h] [rbp-C0h]
  FastRegion::Internal::CRgnData *v23; // [rsp+48h] [rbp-B8h]
  int v24; // [rsp+50h] [rbp-B0h]
  RECT rect; // [rsp+60h] [rbp-A0h] BYREF
  RGNDATA Data; // [rsp+70h] [rbp-90h] BYREF

  RectangleCount = FastRegion::CRegion::GetRectangleCount(this);
  v5 = RectangleCount;
  if ( RectangleCount > 1 )
  {
    *(_QWORD *)&rect.left = 0LL;
    v9 = 16 * RectangleCount;
    v10 = 16 * RectangleCount + 32;
    memset_0(&Data, 0, 0x120uLL);
    if ( v5 > 0x10 )
    {
      v17 = MIDL_user_allocate(v10);
      std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>((void **)&rect, v17);
      p_Data = *(RGNDATA **)&rect.left;
      if ( !*(_QWORD *)&rect.left )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x61u, 0LL);
        goto LABEL_23;
      }
    }
    else
    {
      p_Data = &Data;
    }
    *(_QWORD *)&p_Data->rdh.rcBound.left = 0LL;
    *(_QWORD *)&p_Data->rdh.rcBound.right = 0LL;
    p_Data->rdh.nCount = v5;
    Buffer = p_Data->Buffer;
    p_Data->rdh.dwSize = 32;
    p_Data->rdh.iType = 1;
    p_Data->rdh.nRgnSize = v9;
    FastRegion::CRegion::BeginIterator(this, (__int64)v20);
    while ( 1 )
    {
      v13 = v22;
      if ( (unsigned __int64)v22 >= v21 )
        break;
      *((_DWORD *)Buffer + 1) = *v22;
      v14 = v13[2];
      v15 = v23;
      *((_DWORD *)Buffer + 3) = v14;
      v16 = 2 * v24;
      *(_DWORD *)Buffer = *((_DWORD *)v15 + v16);
      *((_DWORD *)Buffer + 2) = *((_DWORD *)v15 + v16 + 1);
      Buffer += 16;
      FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)v20);
    }
    SetLastError(0);
    Region = ExtCreateRegion(0LL, v10, p_Data);
    if ( Region )
    {
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&rect);
      goto LABEL_17;
    }
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x7Du, 0LL);
LABEL_23:
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&rect);
    return (unsigned int)v8;
  }
  rect = 0LL;
  FastRegion::CRegion::GetBoundingRect(this, &rect);
  SetLastError(0);
  Region = CreateRectRgnIndirect(&rect);
  if ( Region )
  {
LABEL_17:
    v8 = 0;
    *a2 = Region;
    return (unsigned int)v8;
  }
  v7 = GetLastError();
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0x80070000;
  if ( v8 >= 0 )
    v8 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x4Cu, 0LL);
  return (unsigned int)v8;
}
