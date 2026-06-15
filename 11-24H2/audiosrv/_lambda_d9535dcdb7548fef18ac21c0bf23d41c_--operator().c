/*
 * XREFs of _lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator() @ 0x1800C5FB8
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180012D30 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()(__int64 a1)
{
  int v2; // edi
  __int64 v3; // r14
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( **(int **)a1 > 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(v3 + **(_QWORD **)(a1 + 8));
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v4);
      ++v2;
      v3 += 8LL;
    }
    while ( v2 < **(_DWORD **)a1 );
  }
  operator delete(**(void ***)(a1 + 8));
}
