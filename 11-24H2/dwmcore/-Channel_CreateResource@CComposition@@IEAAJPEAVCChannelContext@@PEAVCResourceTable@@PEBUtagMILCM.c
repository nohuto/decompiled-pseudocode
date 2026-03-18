/*
 * XREFs of ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1800DAAC0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x1800DA890 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180191B00 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1801B52E0 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Channel_CreateResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_CREATERESOURCE *a4)
{
  int v4; // r12d
  unsigned int v5; // ebx
  CComposition *v8; // r10
  CMILRefCountImpl *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 (*v15)(void); // rax
  int v16; // eax
  unsigned int v17; // edx
  CMILRefCountImpl *v18; // r8
  int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // r9d
  unsigned int *v24; // r14
  __int64 (__fastcall *v25)(CMILRefCountImpl *); // rax
  __int64 v26; // r8
  _DWORD *v27; // rdx
  struct CChannelContext *v28; // rcx
  unsigned int v30; // edx
  __int64 v31; // rcx
  int v32; // eax
  CMILRefCountImpl *v33; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-91h] BYREF
  struct CChannelContext *v35; // [rsp+40h] [rbp-89h]
  int v36; // [rsp+48h] [rbp-81h] BYREF
  CComposition *v37; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-71h] BYREF
  CMILRefCountImpl *v39; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+70h] [rbp-59h] BYREF
  int *v41; // [rsp+80h] [rbp-49h]
  __int64 v42; // [rsp+88h] [rbp-41h]
  int *v43; // [rsp+90h] [rbp-39h]
  __int64 v44; // [rsp+98h] [rbp-31h]
  unsigned __int64 *v45; // [rsp+A0h] [rbp-29h]
  __int64 v46; // [rsp+A8h] [rbp-21h]
  CComposition **v47; // [rsp+B0h] [rbp-19h]
  __int64 v48; // [rsp+B8h] [rbp-11h]
  CMILRefCountImpl **v49; // [rsp+C0h] [rbp-9h]
  __int64 v50; // [rsp+C8h] [rbp-1h]

  v4 = *((_DWORD *)a4 + 2);
  v5 = *((_DWORD *)a4 + 1);
  v35 = a2;
  v37 = this;
  v8 = this;
  v33 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !v4 || !v5 )
  {
    v22 = 398;
LABEL_19:
    v23 = -2147024809;
    v14 = -2147024809;
    v19 = -2147024809;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, v22, 0LL);
    v21 = 71;
    goto LABEL_13;
  }
  if ( v5 >= *((_DWORD *)a3 + 7) )
  {
    v32 = HANDLE_TABLE::ResizeToFit((struct CResourceTable *)((char *)a3 + 16), v5);
    if ( v32 < 0 )
    {
      v19 = v32;
      v14 = v32;
      v23 = v32;
      v22 = 411;
      goto LABEL_20;
    }
    v8 = v37;
    a2 = v35;
  }
  v11 = *((_QWORD *)a3 + 5);
  v12 = *((_DWORD *)a3 + 6) * v5;
  if ( *(_DWORD *)(v12 + v11) )
  {
    v22 = 426;
    goto LABEL_19;
  }
  *(_DWORD *)(v12 + v11) = v4;
  v10 = *((_QWORD *)a3 + 5) + *((_DWORD *)a3 + 6) * v5;
  *(_QWORD *)(v10 + 8) = 0LL;
  v13 = CResourceFactory::Create(v8, a2, *((unsigned int *)a4 + 2), &v33);
  v14 = v13;
  if ( v13 < 0 )
  {
    v19 = v13;
    v21 = 76;
    goto LABEL_13;
  }
  v15 = *(__int64 (**)(void))(*(_QWORD *)v33 + 56LL);
  if ( (char *)v15 == (char *)CInteraction::Initialize )
    v16 = CInteraction::Initialize(v33);
  else
    v16 = v15();
  v14 = v16;
  if ( v16 < 0 )
  {
    v19 = v16;
    v21 = 82;
    goto LABEL_13;
  }
  v17 = *((_DWORD *)a4 + 1);
  v14 = -2147024890;
  v18 = v33;
  v19 = -2147024890;
  if ( !v17 )
    goto LABEL_12;
  if ( v17 >= *((_DWORD *)a3 + 7) )
    goto LABEL_12;
  v20 = *((_QWORD *)a3 + 5);
  if ( !*(_DWORD *)(*((_DWORD *)a3 + 6) * v17 + v20) )
    goto LABEL_12;
  v24 = (unsigned int *)(v20 + *((_DWORD *)a3 + 6) * v17);
  if ( !v24 )
  {
    v19 = -2147024890;
LABEL_12:
    v21 = 83;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v21, 0LL);
    if ( v10 )
      CResourceTable::DeleteHandle(a3, *((_DWORD *)a4 + 1));
    if ( v33 )
    {
      (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v33 + 16LL))(v33);
      v33 = 0LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x5DBu, 0LL);
    goto LABEL_33;
  }
  *((_QWORD *)v24 + 1) = v33;
  v25 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v18 + 8LL);
  if ( v25 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference(v18);
  else
    v25(v18);
  v26 = *v24;
  v27 = (_DWORD *)*((_QWORD *)a3 + 7);
  if ( (_DWORD)v26 != 192 )
  {
    switch ( (int)v26 )
    {
      case 32:
      case 33:
      case 36:
      case 39:
      case 41:
        ++v27[30];
        v26 = (unsigned int)(v26 - 32);
        goto LABEL_38;
      case 42:
        ++v27[31];
        v26 = (unsigned int)(v26 - 32);
        goto LABEL_38;
      case 46:
      case 165:
        ++v27[26];
        v26 = (unsigned int)(v26 - 32);
        goto LABEL_38;
      case 92:
        ++v27[29];
        v26 = (unsigned int)(v26 - 32);
        goto LABEL_38;
      case 93:
      case 166:
      case 184:
        break;
      default:
        ++v27[27];
        goto LABEL_28;
    }
  }
  ++v27[28];
  if ( (_DWORD)v26 == 192 )
  {
LABEL_40:
    ++dword_1803FAE40;
  }
  else
  {
LABEL_28:
    v26 = (unsigned int)(v26 - 32);
LABEL_38:
    switch ( (int)v26 )
    {
      case 0:
      case 1:
      case 4:
      case 7:
      case 9:
        ++dword_1803FAE48;
        break;
      case 10:
        ++dword_1803FAE4C;
        break;
      case 14:
      case 133:
        ++dword_1803FAE38;
        break;
      case 60:
        ++dword_1803FAE44;
        break;
      case 61:
      case 134:
      case 152:
        goto LABEL_40;
      default:
        ++dword_1803FAE3C;
        break;
    }
  }
  v14 = 0;
  v28 = v35;
  *((_QWORD *)v33 + 7) = v35;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
  {
    v30 = *((_DWORD *)v28 + 6);
    v31 = *((unsigned int *)a4 + 1);
    v39 = v33;
    LODWORD(v37) = *((_DWORD *)a4 + 2);
    v36 = v31;
    v38 = v31 | ((unsigned __int64)v30 << 32);
    v34 = v30;
    v41 = (int *)&v34;
    v42 = 4LL;
    v43 = &v36;
    v45 = &v38;
    v47 = &v37;
    v49 = &v39;
    v44 = 4LL;
    v46 = 8LL;
    v48 = 4LL;
    v50 = 8LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_DCOMPEVENT_RESOURCE,
      v26,
      6u,
      &v40);
  }
  v9 = v33;
  v33 = 0LL;
LABEL_33:
  if ( v9 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v9 + 16LL))(v9);
  return v14;
}
