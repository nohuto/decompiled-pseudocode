/*
 * XREFs of ?InitializeSpatializerInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400043A4
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003144 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeSpatializerInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h] BYREF
  GUID v10; // [rsp+2Ch] [rbp-24h]
  __int64 v11; // [rsp+3Ch] [rbp-14h]
  int v12; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v8 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_5849e670_4969_44de_8904_75ed892b627e,
         &v8) >= 0
    && (v9 = 32,
        v10 = GUID_e3eff23b_5360_40a1_8e7b_506b6283b5d4,
        LODWORD(v11) = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((char *)this + 16) + 56LL),
        v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
               a3,
               32LL,
               &v9),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF59,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v5,
      v8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return v6;
  }
  else
  {
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return 0LL;
  }
}
