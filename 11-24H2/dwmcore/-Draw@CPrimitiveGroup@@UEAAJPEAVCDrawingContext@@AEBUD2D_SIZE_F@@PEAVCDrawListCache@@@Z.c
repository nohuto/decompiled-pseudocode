/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C3900
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801109C0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1801C3E00 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?GetCurrentZ@CDrawingContext@@UEBAHXZ @ 0x1801C4270 (-GetCurrentZ@CDrawingContext@@UEBAHXZ.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1801C429C (McTemplateU0ppffff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::Draw(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CDrawListCache *v4; // rdi
  __int64 v8; // rbx
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int64 v17; // r8
  __int64 (*v19)(void); // rax
  int v20; // eax
  __int64 v21; // r8
  CDrawingContext *v22; // rcx
  __int64 (__fastcall *v23)(CDrawingContext *__hidden); // rax
  int CurrentZ; // eax
  __int64 v25; // r8
  __int64 v26; // r8
  unsigned int v27; // r15d
  __int64 *v28; // rcx
  __int64 v29; // rax
  CPrimitiveGroup *v30; // rbx
  __int64 v31; // rax
  int (__fastcall *v32)(CPrimitiveGroup *, __int64, struct D2D_RECT_F *); // rdi
  __int64 v33; // rax
  CPrimitiveGroup *v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  struct D2D_RECT_F v36; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+70h] [rbp-90h] BYREF
  CPrimitiveGroup **v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  CPrimitiveGroup **v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int128 v43; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-50h]
  __int128 v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  struct D2D_RECT_F *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]

  *(_QWORD *)&v37 = a4;
  v4 = a4;
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    v27 = 0;
    if ( *((_DWORD *)this + 40) )
    {
      do
      {
        v28 = (__int64 *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v27) + 72LL);
        v29 = *v28;
        v34 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, CPrimitiveGroup **))(v29 + 64))(v28, &v34) >= 0 )
        {
          v30 = v34;
          v31 = *(_QWORD *)v34;
          *(_QWORD *)&v36.left = 0LL;
          v32 = *(int (__fastcall **)(CPrimitiveGroup *, __int64, struct D2D_RECT_F *))(v31 + 96);
          v33 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
          if ( v32(v30, v33, &v36) >= 0 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v36.left + 112LL))(
              *(_QWORD *)&v36.left,
              ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
          if ( *(_QWORD *)&v36.left )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v36.left + 16LL))(*(_QWORD *)&v36.left);
        }
        if ( v34 )
          (*(void (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)v34 + 16LL))(v34);
        ++v27;
      }
      while ( v27 < *((_DWORD *)this + 40) );
      v4 = (struct CDrawListCache *)v37;
    }
  }
  if ( *((_QWORD *)this + 59) )
  {
    if ( *((_BYTE *)a2 + 7936) )
    {
      if ( *((_BYTE *)a2 + 7937) )
        v8 = *((_QWORD *)a2 + 402);
      else
        v8 = *((_QWORD *)a2 + 994);
    }
    else
    {
      LODWORD(v8) = 0;
    }
    CDrawingContext::EtwLogCurrentState(a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      McTemplateU0ppffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        v9,
        v8,
        (_DWORD)this,
        *((_DWORD *)this + 27),
        *((_DWORD *)this + 28),
        *((_DWORD *)this + 29),
        *((_DWORD *)this + 30));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v22 = (struct CDrawingContext *)((char *)a2 + 24);
      v23 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*((_QWORD *)a2 + 3) + 8LL);
      if ( v23 == CDrawingContext::GetCurrentZ )
        CurrentZ = CDrawingContext::GetCurrentZ(v22);
      else
        CurrentZ = ((__int64 (__fastcall *)(CDrawingContext *, __int64 (__fastcall *)(CDrawingContext *__hidden)))v23)(
                     v22,
                     CDrawingContext::GetCurrentZ);
      LODWORD(v37) = CurrentZ;
      v35 = 18;
      v39 = (CPrimitiveGroup **)&v35;
      v40 = 4LL;
      v41 = (CPrimitiveGroup **)&v37;
      v42 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        (const EVENT_DESCRIPTOR *)"1",
        v25,
        3u,
        &v38);
    }
    v10 = *((_DWORD *)a2 + 74);
    LODWORD(v47) = 0;
    if ( v10 )
    {
      v11 = (unsigned int)(v10 - 1);
      v12 = *((_QWORD *)a2 + 36);
      v13 = *(_OWORD *)(68 * v11 + v12 + 16);
      v43 = *(_OWORD *)(68 * v11 + v12);
      v14 = *(_OWORD *)(68 * v11 + v12 + 32);
      v44 = v13;
      v15 = *(_OWORD *)(68 * v11 + v12 + 48);
      LODWORD(v47) = *(_DWORD *)(68 * v11 + v12 + 64);
    }
    else
    {
      v43 = _xmm;
      v14 = _xmm;
      v44 = _xmm;
      v15 = *(__int128 *)&_xmm.r;
      BYTE1(v47) = BYTE1(v47) & 0xC0 | 0x29;
      LOBYTE(v47) = -86;
    }
    v46 = v15;
    v45 = v14;
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v37 = 0LL;
      v36 = *(struct D2D_RECT_F *)((char *)this + 108);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v43, &v36, (float *)&v37);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        *(_QWORD *)&v44 = &v37;
        v36.left = *((FLOAT *)&v37 + 3);
        *(_QWORD *)&v45 = &v35;
        *(_QWORD *)&v46 = &v34;
        v47 = &v36;
        LODWORD(v34) = DWORD2(v37);
        v35 = DWORD1(v37);
        *((_QWORD *)&v44 + 1) = 4LL;
        *((_QWORD *)&v45 + 1) = 4LL;
        *((_QWORD *)&v46 + 1) = 4LL;
        v48 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT,
          v26,
          5u,
          (PEVENT_DATA_DESCRIPTOR)&v43);
      }
    }
    v16 = CContent::Draw(this, a2, a3, v4);
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x68u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v36.left = NAN;
      v39 = &v34;
      v34 = this;
      v41 = (CPrimitiveGroup **)&v36;
      v40 = 8LL;
      v42 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        v17,
        3u,
        &v38);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v19 = *(__int64 (**)(void))(*((_QWORD *)a2 + 3) + 8LL);
      if ( (char *)v19 == (char *)CDrawingContext::GetCurrentZ )
        v20 = CDrawingContext::GetCurrentZ((struct CDrawingContext *)((char *)a2 + 24));
      else
        v20 = v19();
      LODWORD(v34) = v20;
      LODWORD(v36.left) = 18;
      v39 = (CPrimitiveGroup **)&v36;
      v40 = 4LL;
      v41 = &v34;
      v42 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v21,
        3u,
        &v38);
    }
  }
  return 0LL;
}
