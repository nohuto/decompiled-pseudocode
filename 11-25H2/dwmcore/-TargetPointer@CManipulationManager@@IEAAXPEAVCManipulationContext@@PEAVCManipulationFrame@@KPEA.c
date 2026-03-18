/*
 * XREFs of ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017F170
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AE950 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x18017EDFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18017F7EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x18017F840 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801AF4A8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801E4320 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180211A1C (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x18021AF20 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180223F14 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x18024DAE4 (-GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationManager *this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r15
  __int64 v7; // rbx
  unsigned __int64 v10; // r11
  __int64 v11; // r13
  unsigned int *v12; // rbx
  __int64 v13; // r12
  int v14; // edx
  __int64 v15; // r8
  struct CInteraction *v16; // rax
  int PointerTarget; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  void **v20; // r10
  int v21; // r15d
  __int64 v22; // rcx
  __int128 v23; // xmm1
  __int64 (__fastcall *v24)(void **, __int64, __int64, _QWORD, __int128 *, int *); // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // r9d
  __int128 v37; // xmm1
  unsigned int v38; // r8d
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int64 v46; // rdx
  void ***v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // r9
  __int64 v50; // r10
  char IsRoute; // al
  char v52; // r8
  __int64 v53; // rdx
  void **v54; // rax
  void **v55; // rdi
  struct CInteraction *HoverTarget; // rax
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  void **v58; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A0h] BYREF
  void **v60; // [rsp+68h] [rbp-98h] BYREF
  int v61; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v62; // [rsp+74h] [rbp-8Ch] BYREF
  void **v63; // [rsp+78h] [rbp-88h] BYREF
  __int128 v64; // [rsp+80h] [rbp-80h] BYREF
  __int128 v65; // [rsp+90h] [rbp-70h]
  __int128 v66; // [rsp+A0h] [rbp-60h]
  __int128 v67; // [rsp+B0h] [rbp-50h]
  __int128 v68; // [rsp+C0h] [rbp-40h]
  __int128 v69; // [rsp+D0h] [rbp-30h]
  __int128 v70; // [rsp+E0h] [rbp-20h]
  __int128 v71; // [rsp+F0h] [rbp-10h]
  __int128 v72; // [rsp+100h] [rbp+0h]
  __int128 v73; // [rsp+110h] [rbp+10h]
  __int128 v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+30h]
  unsigned int v76; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v77; // [rsp+190h] [rbp+90h] BYREF
  int v78; // [rsp+198h] [rbp+98h] BYREF

  v5 = a5;
  v58 = 0LL;
  v7 = a4;
  v57 = 1;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v58);
  v10 = *((_QWORD *)this + 35);
  v11 = 248 * v7;
  v12 = (unsigned int *)((char *)a3 + 248 * v7 + 368);
  if ( v10 )
    v13 = *((_QWORD *)this + 36) * (*((_QWORD *)v12 + 10) % v10) / v10
        + *((_QWORD *)this + 36) * (*((_QWORD *)v12 + 10) / v10);
  else
    v13 = 1000LL * v12[16];
  if ( (*((_BYTE *)a3 + 176) & 2) != 0 )
  {
    v47 = &v58;
    goto LABEL_25;
  }
  if ( (v12[3] & 0x40004) != 0 || CManipulationFrame::IsMousewheelFrame(a3) )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      a3,
                      (const struct tagPOINTER_INFO *)v12,
                      a2,
                      (struct TargetingInfo *)&v57);
    v20 = v58;
    v21 = PointerTarget;
    v22 = 128LL;
    if ( PointerTarget >= 0 && v58 && v57 )
    {
      v23 = *(_OWORD *)((char *)a3 + 200);
      v24 = (__int64 (__fastcall *)(void **, __int64, __int64, _QWORD, __int128 *, int *))*((_QWORD *)*v58 + 23);
      v64 = *(_OWORD *)((char *)a3 + 184);
      v25 = *(_OWORD *)((char *)a3 + 216);
      v65 = v23;
      v26 = *(_OWORD *)((char *)a3 + 232);
      v66 = v25;
      v27 = *(_OWORD *)((char *)a3 + 248);
      v67 = v26;
      v28 = *(_OWORD *)((char *)a3 + 264);
      v68 = v27;
      v29 = *(_OWORD *)((char *)a3 + 280);
      v69 = v28;
      v30 = *(_OWORD *)((char *)a3 + 296);
      v70 = v29;
      v31 = *(_OWORD *)((char *)a3 + 312);
      v71 = v30;
      v32 = *(_OWORD *)((char *)a3 + 328);
      v72 = v31;
      v33 = *(_OWORD *)((char *)a3 + 344);
      v34 = *((_QWORD *)a3 + 45);
      v73 = v32;
      v74 = v33;
      v75 = v34;
      LOBYTE(v34) = 1;
      v35 = v24(v58, v13, v34, 0LL, &v64, &v57);
      v20 = v58;
      v21 = v35;
    }
    if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
    {
      v76 = v12[9];
      v77 = v12[8];
      v61 = v57;
      v62 = v12[1];
      v78 = v21;
      v63 = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v22,
        byte_1803D5398,
        v18,
        v19,
        (__int64)&v62,
        (__int64)&v63,
        (__int64)&v61,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v78);
    }
    v36 = v12[1];
    v37 = *((_OWORD *)a3 + 3);
    v38 = *((_DWORD *)a3 + 6);
    v64 = *((_OWORD *)a3 + 2);
    v39 = *((_OWORD *)a3 + 4);
    v65 = v37;
    v40 = *((_OWORD *)a3 + 5);
    v66 = v39;
    v41 = *((_OWORD *)a3 + 6);
    v67 = v40;
    v42 = *((_OWORD *)a3 + 7);
    v68 = v41;
    v43 = *((_OWORD *)a3 + 8);
    v69 = v42;
    v44 = *((_OWORD *)a3 + 9);
    v70 = v43;
    v45 = *((_OWORD *)a3 + 10);
    v71 = v44;
    v72 = v45;
    InputTraceLogging::GestureTargeting::SetPointerResult(
      *((_QWORD *)a3 + 56),
      v64,
      v38,
      v36,
      (const struct TargetingInfo *)&v57);
    if ( *v12 == 2 && (v57 == 2 || v58 && v57 == 1) )
      *((_QWORD *)this + 38) = 0LL;
    v46 = v12[1];
    v60 = 0LL;
    v59 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v46, &v59);
    if ( v21 < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v58, &v60);
    if ( v57 )
    {
      if ( v58 != v60 )
      {
        if ( (_DWORD)v59 )
        {
          TargetingInfo::IsRoute((TargetingInfo *)&v59);
          IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v57);
          if ( v52 != IsRoute )
          {
            *((_BYTE *)a3 + v11 + 608) |= 1u;
            *((_BYTE *)a3 + 176) |= 4u;
          }
        }
      }
    }
    else
    {
      if ( (v12[3] & 0x40000) == 0 )
      {
        v5 = a5;
        *a5 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_POINTER_BUFFERED,
            v12[2],
            v12[1]);
        goto LABEL_24;
      }
      v57 = 1;
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v58);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(a2, v12[1], &v57);
    v5 = a5;
LABEL_24:
    v47 = &v60;
LABEL_25:
    Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(v47);
    goto LABEL_26;
  }
  if ( (v14 & 0x800002) == 0 )
  {
    v53 = v12[1];
    v60 = 0LL;
    v59 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v53, &v59);
    v54 = v58;
    v55 = v60;
    if ( v58 != v60 )
    {
      if ( v60 )
      {
        (*(void (__fastcall **)(void **))*v60)(v60);
        v54 = v58;
      }
      a5 = v54;
      v58 = v55;
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&a5);
      v55 = v60;
    }
    if ( !(_DWORD)v59 && !v55 )
    {
      HoverTarget = CManipulationContext::GetHoverTarget(*((CManipulationContext **)this + 30), v12[1]);
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v58, HoverTarget);
    }
    goto LABEL_24;
  }
  if ( (v14 & 0x20002) == 0x20002 && (v14 & 4) == 0 )
  {
    v16 = CManipulationContext::GetHoverTarget(*((CManipulationContext **)this + 30), v12[1]);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v58, v16);
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(a2, v12[1], &v57);
  }
LABEL_26:
  if ( v58 && v57 != 2 )
  {
    v48 = ConvertToInputType(*v12, v12[3], v15, *v58);
    (*(void (__fastcall **)(__int64, _QWORD, void **))(v49 + 72))(v50, v48, v5);
  }
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v58);
}
