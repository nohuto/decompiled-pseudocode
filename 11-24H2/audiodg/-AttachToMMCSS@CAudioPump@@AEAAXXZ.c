/*
 * XREFs of ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140021538
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAKPEAPEAX@Z @ 0x14004624C (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAKPEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@AEAPEBG@Z @ 0x140054CE8 (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMm.c)
 *     ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@H@Z @ 0x140055170 (-GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAudioPump::AttachToMMCSS(CAudioPump *this)
{
  int RTThreadManagerInstance; // eax
  wil::details::in1diag3 *v3; // rcx
  struct CRTThreadManager *v4; // rbx
  char *v5; // rsi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CRTThreadManager *v8; // [rsp+30h] [rbp+8h] BYREF
  const WCHAR *v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  RTThreadManagerInstance = CRTThreadManager::GetRTThreadManagerInstance(&v8, 0);
  v3 = retaddr;
  if ( RTThreadManagerInstance < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x56E,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)RTThreadManagerInstance);
  v4 = v8;
  if ( v8 && *((_DWORD *)v8 + 7) )
  {
    *((_DWORD *)this + 61) = *((_DWORD *)v8 + 8);
    *((_DWORD *)this + 60) = *((_DWORD *)v4 + 7);
  }
  else
  {
    v9 = L"Audio";
    v5 = (char *)this + 256;
    v6 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,unsigned short const * &>(
                (char *)this + 256,
                &v9) >= 0 )
    {
      v3 = *(wil::details::in1diag3 **)v5;
      *((_DWORD *)this + 60) = *(_DWORD *)(*(_QWORD *)v5 + 16LL);
      *((_DWORD *)this + 61) = *((_DWORD *)v3 + 5);
    }
  }
  SetEngineThreadPriority(v3, (char *)this + 244, (char *)this + 232);
  if ( v4 )
    (*(void (__fastcall **)(struct CRTThreadManager *))(*(_QWORD *)v4 + 16LL))(v4);
}
