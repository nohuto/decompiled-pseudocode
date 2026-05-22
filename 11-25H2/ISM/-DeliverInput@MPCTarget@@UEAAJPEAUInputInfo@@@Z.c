/*
 * XREFs of ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800763B0
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800FD9F0 (-DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x18001160C (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??$As@UIMPCInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMPCInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005FAF8 (--$As@UIMPCInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     IsSubscribedForEventType @ 0x180076668 (IsSubscribedForEventType.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     GetInputEventType @ 0x180099CD8 (GetInputEventType.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     GetHandEventType @ 0x1800FE0A0 (GetHandEventType.c)
 *     IsSubscribedForEventType_0 @ 0x1800FE194 (IsSubscribedForEventType_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCTarget::DeliverInput(MPCTarget *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  _QWORD *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  const char *v9; // r9
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, int *, _QWORD, char *, _OWORD *); // rsi
  unsigned int HandEventType; // eax
  __int64 InputEventType; // rbx
  unsigned int v14; // ebx
  ISMTracing *v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+40h] [rbp-19h] BYREF
  int v19; // [rsp+48h] [rbp-11h] BYREF
  _OWORD v20[3]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( (*(_DWORD *)a2 & 0x662600) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x10F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
  if ( (*(_DWORD *)a2 & 0x42600) == 0
    || (*(unsigned __int8 (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 88LL))(this) && *((_BYTE *)a2 + 3002) )
  {
    return 0LL;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 4);
  if ( !v6 )
    v6 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
  v18 = 0LL;
  v7 = v6[61];
  v8 = v6[62];
  if ( v7 == v8 )
    goto LABEL_27;
  do
  {
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMPCInputObjectProxy>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7 + 8),
                &v18) >= 0 )
      break;
    v7 += 16LL;
  }
  while ( v7 != v8 );
  if ( !v18 )
  {
LABEL_27:
    v14 = -2147417853;
  }
  else
  {
    v19 = *((_DWORD *)a2 + 18);
    v20[0] = *(_OWORD *)((char *)a2 + 312);
    v20[1] = *(_OWORD *)((char *)a2 + 328);
    v20[2] = *(_OWORD *)((char *)a2 + 344);
    switch ( *(_DWORD *)a2 )
    {
      case 0x200:
        if ( (unsigned __int8)IsSubscribedForEventType_0(*((unsigned int *)a2 + 16)) && !*((_BYTE *)a2 + 928) )
        {
          v10 = v18;
          v11 = *(void (__fastcall **)(__int64, int *, _QWORD, char *, _OWORD *))(*(_QWORD *)v18 + 24LL);
          HandEventType = GetHandEventType(*((unsigned int *)a2 + 16));
          v11(v10, &v19, HandEventType, (char *)a2 + 936, v20);
        }
        break;
      case 0x40000:
        if ( (unsigned __int8)IsSubscribedForEventType(4LL, v18) )
          (*(void (__fastcall **)(__int64, int *, char *, char *, _OWORD *))(*(_QWORD *)v18 + 32LL))(
            v18,
            &v19,
            (char *)a2 + 2504,
            (char *)a2 + 2512,
            v20);
        break;
      case 0x400:
      case 0x2000:
        InputEventType = (unsigned int)GetInputEventType(*((unsigned int *)a2 + 17));
        if ( (unsigned __int8)IsSubscribedForEventType(InputEventType, v18) )
          (*(void (__fastcall **)(__int64, int *, _QWORD, char *, _QWORD, _OWORD *))(*(_QWORD *)v18 + 40LL))(
            v18,
            &v19,
            (unsigned int)InputEventType,
            (char *)a2 + 2256,
            *((_QWORD *)a2 + 2),
            v20);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x171,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          v9);
    }
    v14 = 0;
  }
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCTarget_DeliverInput_(v15, this, a2, v14);
  }
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v14;
}
