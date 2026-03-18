/*
 * XREFs of ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x180063B90
 * Callers:
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x180063990 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 *     ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180066ACC (-PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802CA6B0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x180040084 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetPhysicalBackBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x180063E70 (-GetPhysicalBackBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MarkFullValid@CSwapChainBuffer@@UEAAXXZ @ 0x180063F60 (-MarkFullValid@CSwapChainBuffer@@UEAAXXZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180063F70 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?GetPhysicalFrontBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x180063FB0 (-GetPhysicalFrontBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ.c)
 *     ?GetD3D11Resource@CLegacySwapChainBuffer@@UEAAPEAUID3D11Resource@@XZ @ 0x180064000 (-GetD3D11Resource@CLegacySwapChainBuffer@@UEAAPEAUID3D11Resource@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlaySwapChain::CopyFrontToBackBuffer(COverlaySwapChain *this)
{
  __int64 (*v2)(void); // rax
  struct ISwapChainBuffer *PhysicalBackBuffer; // rax
  CLegacySwapChainBuffer *v4; // r15
  FastRegion::CRegion *v5; // rbx
  int v7; // esi
  struct ID3D11Resource *(__fastcall *v8)(CLegacySwapChainBuffer *__hidden); // rax
  struct ID3D11Resource *D3D11Resource; // rax
  struct ISwapChainBuffer *(__fastcall *v10)(CDDisplaySwapChain *__hidden); // rax
  struct ISwapChainBuffer *PhysicalFrontBuffer; // rax
  __int64 v12; // r8
  ULONGLONG v13; // r9
  int *v14; // rdx
  __int64 v15; // r13
  int v16; // r15d
  int v17; // r14d
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v20; // edi
  __int64 v21; // rcx
  int v22; // esi
  ULONGLONG Ptr; // rcx
  ULONGLONG v24; // r8
  ULONGLONG v25; // r13
  void (__fastcall *v26)(CSwapChainBuffer *__hidden); // rax
  int RectangleCount; // eax
  int v28; // [rsp+68h] [rbp-69h]
  struct ID3D11Resource *v29; // [rsp+70h] [rbp-61h]
  int *v30; // [rsp+78h] [rbp-59h]
  ULONGLONG v31; // [rsp+80h] [rbp-51h]
  CSwapChainBuffer *v32; // [rsp+88h] [rbp-49h]
  __int64 v33; // [rsp+90h] [rbp-41h]
  FastRegion::CRegion *v34; // [rsp+98h] [rbp-39h]
  char v35[8]; // [rsp+A0h] [rbp-31h] BYREF
  unsigned __int64 v36; // [rsp+A8h] [rbp-29h]
  int *v37; // [rsp+B0h] [rbp-21h]
  ULONGLONG v38; // [rsp+B8h] [rbp-19h]
  int v39; // [rsp+C0h] [rbp-11h]
  int v40; // [rsp+C4h] [rbp-Dh]
  _DWORD v41[4]; // [rsp+D0h] [rbp-1h] BYREF
  int v42; // [rsp+E0h] [rbp+Fh]
  int v43; // [rsp+E4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E8h] [rbp+17h] BYREF

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 192LL);
  if ( (char *)v2 == (char *)CLegacySwapChain::GetPhysicalBackBuffer )
    PhysicalBackBuffer = CLegacySwapChain::GetPhysicalBackBuffer(this);
  else
    PhysicalBackBuffer = (struct ISwapChainBuffer *)v2();
  v4 = PhysicalBackBuffer;
  v32 = PhysicalBackBuffer;
  v5 = (FastRegion::CRegion *)(*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)PhysicalBackBuffer + 96LL))(PhysicalBackBuffer);
  v34 = v5;
  if ( **(_DWORD **)v5 )
  {
    v7 = 0;
    v28 = 0;
    v8 = *(struct ID3D11Resource *(__fastcall **)(CLegacySwapChainBuffer *__hidden))(*(_QWORD *)v4 + 152LL);
    if ( v8 == CLegacySwapChainBuffer::GetD3D11Resource )
      D3D11Resource = CLegacySwapChainBuffer::GetD3D11Resource(v4);
    else
      D3D11Resource = v8(v4);
    v29 = D3D11Resource;
    v10 = *(struct ISwapChainBuffer *(__fastcall **)(CDDisplaySwapChain *__hidden))(*(_QWORD *)this + 200LL);
    if ( v10 == CDDisplaySwapChain::GetPhysicalFrontBuffer )
      PhysicalFrontBuffer = CDDisplaySwapChain::GetPhysicalFrontBuffer(this);
    else
      PhysicalFrontBuffer = v10(this);
    v33 = (*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)PhysicalFrontBuffer + 152LL))(PhysicalFrontBuffer);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start,
        v12,
        1u,
        &v44);
    FastRegion::CRegion::BeginIterator(v5, v35);
    v13 = v38;
    v14 = v37;
    LODWORD(v15) = v40;
    v16 = v39;
    v31 = v38;
    v30 = v37;
LABEL_12:
    while ( (unsigned __int64)v14 < v36 )
    {
      v17 = *v14;
      v41[2] = 0;
      v18 = 2 * v16;
      v19 = *(_DWORD *)(v13 + 4 * v18);
      v20 = *(_DWORD *)(v13 + 4 * v18 + 4);
      v21 = *(_QWORD *)(*((_QWORD *)this + 5) + 560LL);
      v41[0] = v19;
      v41[1] = v17;
      v41[3] = v20;
      v43 = 1;
      v44.Ptr = (ULONGLONG)(v14 + 2);
      v42 = v14[2];
      v22 = v42;
      (*(void (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *, _DWORD))(*(_QWORD *)v21 + 920LL))(
        v21,
        v29,
        0LL,
        v19,
        v17,
        0,
        v33,
        0,
        v41,
        0);
      v14 = v30;
      v13 = v31;
      ++v16;
      v7 = (v22 - v17) * (v20 - v19) + v28;
      v28 = v7;
      if ( v16 >= (int)v15 )
      {
        Ptr = v44.Ptr;
        while ( 1 )
        {
          v24 = Ptr;
          v13 = Ptr + *(int *)(Ptr + 4);
          v25 = *(int *)(Ptr + 12) - v13;
          v30 = (int *)Ptr;
          v14 = (int *)Ptr;
          v31 = v13;
          Ptr += 8LL;
          v15 = (__int64)(Ptr + v25) >> 3;
          if ( (_DWORD)v15 )
            break;
          if ( v24 >= v36 )
            goto LABEL_12;
        }
        v16 = 0;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v34);
      McTemplateU0qq_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
        RectangleCount,
        v7);
    }
    v26 = *(void (__fastcall **)(CSwapChainBuffer *__hidden))(*(_QWORD *)v32 + 128LL);
    if ( v26 == CSwapChainBuffer::MarkFullValid )
      CSwapChainBuffer::MarkFullValid(v32);
    else
      v26(v32);
  }
  return 0LL;
}
