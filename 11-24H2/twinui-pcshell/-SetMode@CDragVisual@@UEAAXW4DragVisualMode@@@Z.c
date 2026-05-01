/*
 * XREFs of ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180543750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805456C4 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1805459C8 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::SetMode(__int64 a1, int a2, __int64 a3)
{
  int v4; // edx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r12d
  int v10; // ecx
  char updated; // al
  int v12; // ecx
  char v13; // al
  int v14; // ecx
  __int128 v15; // xmm0
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  GUID v17; // [rsp+38h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(a1 + 124);
  if ( a2 != v4 )
  {
    v6 = 4;
    if ( v4 != 6 )
      v6 = 0;
    v17 = GUID_NULL;
    if ( v4 == 4
      && (v7 = *(_QWORD *)(a1 + 88)) != 0
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) )
    {
      v6 |= 8u;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 88);
      if ( v8 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, 0LL, 0LL, 0LL);
    }
    v9 = v6;
    if ( *(_DWORD *)(a1 + 124) == 1 || *(_DWORD *)(a1 + 124) == 4 )
    {
      *(_DWORD *)(a1 + 308) = MulDiv(
                                *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 200),
                                100,
                                *(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200));
      v17 = (GUID)xmmword_1807B2AD0;
    }
    if ( !a2 )
    {
      v10 = *(_DWORD *)(a1 + 124);
      *(_BYTE *)(a1 + 254) = 0;
      if ( (unsigned int)(v10 - 5) <= 1 )
      {
        *(_DWORD *)(a1 + 308) = MulDiv(
                                  *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 216),
                                  100,
                                  *(_DWORD *)(a1 + 224) - *(_DWORD *)(a1 + 216));
      }
      else if ( v10 == 2 )
      {
        v6 |= 2u;
      }
      updated = CDragVisual::_UpdateThumbnailRect(a1 - 24);
      v12 = v6 | 1;
      if ( !updated )
        v12 = v6;
      v6 = v12;
      goto LABEL_35;
    }
    if ( a2 == 6 )
    {
      v6 |= 2u;
      if ( *(_DWORD *)(a1 + 124) != 2 )
        v6 = v9;
      goto LABEL_35;
    }
    if ( (*(_DWORD *)(a1 + 124) & 0xFFFFFFF9) == 0 && *(_DWORD *)(a1 + 124) != 2 && (unsigned int)(a2 - 2) <= 1 )
    {
      v13 = CDragVisual::_UpdateThumbnailRect(a1 - 24);
      v14 = v6 | 1;
      if ( !v13 )
        v14 = v6;
      v6 = v14;
      if ( a2 == 2 )
      {
        v15 = xmmword_1807B2AB0;
        v6 = v14 | 2;
LABEL_34:
        v17 = (GUID)v15;
        goto LABEL_35;
      }
      if ( a2 == 3 )
      {
        v15 = xmmword_1807B2AC0;
        goto LABEL_34;
      }
    }
LABEL_35:
    *(_DWORD *)(a1 + 124) = a2;
    if ( v6 )
    {
      v16 = *(_QWORD *)(a1 + 48);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher((__int64 *)&v18, &v16, (__int64)&v17, 0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      CDragVisual::_UpdateThumbnail(a1 - 24, 1LL, v6);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)&v18);
    }
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McGenEventWrite_EventWriteTransfer(
          MICROSOFT_TWINUI_PUBLISHER_Context,
          &DragVisual_ModeChange_Info,
          a3,
          1u,
          &v18);
    }
    return;
  }
  if ( *(_BYTE *)(a1 + 253) && (unsigned __int8)CDragVisual::_UpdateThumbnailRect(a1 - 24) )
    CDragVisual::_UpdateThumbnail(a1 - 24, 4 - (unsigned int)(*(_DWORD *)(a1 + 124) != 6), 1LL);
}
