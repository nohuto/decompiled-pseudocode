/*
 * XREFs of ?DxFlipConsumedTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A692C
 * Callers:
 *     ?SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6250 (-SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEB.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6390 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W.c)
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6570 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatri.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DxFlipConsumedTelemetry(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const struct tagCOMPOSITION_TARGET_ID *a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  __int128 v16; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  int *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  int *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int64 *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  __int64 *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  int *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  __int128 *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v2 = *(_QWORD *)this;
    v16 = 0LL;
    if ( *(_DWORD *)(v2 + 56) > *(_DWORD *)(v2 + 48) && *(_DWORD *)(v2 + 60) > *(_DWORD *)(v2 + 52) )
    {
      v16 = *(_OWORD *)(v2 + 48);
      *(_QWORD *)(v2 + 56) = 0LL;
      *(_QWORD *)(v2 + 48) = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v3 = *(_QWORD *)this;
        v19 = 8LL;
        v21 = 8LL;
        v23 = 4LL;
        v11 = *(_DWORD *)(v3 + 156);
        v15 = *(_QWORD *)(v3 + 136);
        v14 = *(_QWORD *)(v3 + 40);
        v10 = *((_DWORD *)a2 + 6);
        v9 = *((_DWORD *)a2 + 5);
        v8 = *((_DWORD *)a2 + 4);
        v4 = *((unsigned int *)a2 + 2) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)a2 + 1)) << 32);
        v25 = 4LL;
        v5 = HIDWORD(*(_QWORD *)a2);
        v13 = v4;
        v6 = (int)v5;
        v7 = *(unsigned int *)a2;
        v27 = 4LL;
        v12 = v7 | (v6 << 32);
        v18 = &v12;
        v29 = 8LL;
        v20 = &v13;
        v22 = &v8;
        v24 = &v9;
        v26 = &v10;
        v28 = &v14;
        v30 = &v15;
        v32 = &v11;
        v34 = &v16;
        v31 = 8LL;
        v33 = 4LL;
        v35 = 16LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &Dx_Flip_Consumed,
          v2,
          0xAu,
          &v17);
      }
    }
  }
}
