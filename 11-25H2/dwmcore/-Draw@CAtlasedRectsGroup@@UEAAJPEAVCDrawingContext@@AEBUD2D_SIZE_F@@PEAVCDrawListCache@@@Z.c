/*
 * XREFs of ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DEFA0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1801DF120 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsGroup::Draw(
        CAtlasedRectsGroup *this,
        const void **a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // ebx
  char *v9; // rdi
  int v10; // eax
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  int v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-40h] BYREF
  int *v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+58h] [rbp-28h]
  int v21; // [rsp+5Ch] [rbp-24h]
  int *v22; // [rsp+60h] [rbp-20h]
  int v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+6Ch] [rbp-14h]

  v8 = 0;
  if ( !CAtlasedRectsGroup::IsEmptyDrawing(this) )
  {
    v9 = (char *)(a2 + 3);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))((char *)a2 + 24);
      v21 = 0;
      v24 = 0;
      v17 = v14;
      v16 = 7;
      v19 = &v16;
      v22 = &v17;
      v20 = 4;
      v23 = 4;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        v15,
        3u,
        &v18);
    }
    v10 = CContent::Draw(this, a2, a3, a4);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD5u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v12 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))((char *)a2 + 24);
      v21 = 0;
      v24 = 0;
      v16 = v12;
      v19 = &v17;
      v22 = &v16;
      v20 = 4;
      v23 = 4;
      v17 = 7;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v13,
        3u,
        &v18);
    }
  }
  return v8;
}
