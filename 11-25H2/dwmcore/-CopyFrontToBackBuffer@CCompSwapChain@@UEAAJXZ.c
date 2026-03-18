/*
 * XREFs of ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802D0950
 * Callers:
 *     ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802D1160 (-Present@CCompSwapChain@@QEAAJII@Z.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180084360 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1801A178C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CCompSwapChain::CopyFrontToBackBuffer(CCompSwapChain *this)
{
  _DWORD *v2; // rdi
  const struct FastRegion::Internal::CRgnData **v3; // rsi
  __int64 v4; // r8
  int v5; // edi
  ULONG v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  FastRegion::Internal::CRgnData *v11; // rcx
  int RectangleCount; // eax
  _BYTE v14[8]; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-41h]
  _DWORD *v16; // [rsp+68h] [rbp-39h]
  __int64 v17; // [rsp+70h] [rbp-31h]
  int v18; // [rsp+78h] [rbp-29h]
  int *v19; // [rsp+88h] [rbp-19h] BYREF
  int v20; // [rsp+90h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+D8h] [rbp+37h] BYREF

  v2 = (_DWORD *)((char *)this + 144);
  if ( **((_DWORD **)this + 28) )
  {
    v3 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 296);
  }
  else
  {
    if ( *v2 != 3 )
      return 0LL;
    v3 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 296);
    if ( !**((_DWORD **)this + 37) )
      return 0LL;
  }
  v20 = 0;
  v19 = &v20;
  CRegion::Copy((FastRegion::CRegion **)&v19, (FastRegion::CRegion **)this + 28);
  if ( *v2 == 3 )
    CRegion::Union((const struct FastRegion::Internal::CRgnData **)&v19, v3);
  v5 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)"\"",
      v4,
      1u,
      &v21);
  FastRegion::CRegion::BeginIterator(&v19, (__int64)v14);
  while ( (unsigned __int64)v16 < v15 )
  {
    v6 = v16[2];
    v7 = 2 * v18;
    HIDWORD(v21.Ptr) = *v16;
    v21.Reserved = v6;
    v8 = *(_DWORD *)(v17 + 4 * v7);
    v9 = *((_QWORD *)this + 11);
    v21.Size = *(_DWORD *)(v17 + 4 * v7 + 4);
    v10 = *((_QWORD *)this + 7);
    LODWORD(v21.Ptr) = v8;
    CD3DDevice::CopySubresourceRegion(v10, *((_QWORD *)this + 12), 0, (int *)&v21, v9, 0, v8, SHIDWORD(v21.Ptr), 0);
    v11 = (FastRegion::Internal::CRgnData *)((v21.Reserved - HIDWORD(v21.Ptr)) * (v21.Size - LODWORD(v21.Ptr)));
    v5 += (int)v11;
    FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v14);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    RectangleCount = FastRegion::CRegion::GetRectangleCount(&v19);
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
      RectangleCount,
      v5);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v19);
  return 0LL;
}
