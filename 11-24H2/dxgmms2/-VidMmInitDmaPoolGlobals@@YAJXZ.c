/*
 * XREFs of ?VidMmInitDmaPoolGlobals@@YAJXZ @ 0x14009757C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x14011058C (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 */

__int64 VidMmInitDmaPoolGlobals(void)
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r9
  struct _ERESOURCE *v2; // rax
  __int64 v3; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // rcx

  qword_140081938 = (__int64)&qword_140081930;
  qword_140081930 = (__int64)&qword_140081930;
  dword_140081A20 = dword_140081428;
  dword_140081A1C = dword_14008142C;
  qword_1400819F8 = (unsigned int)dword_140081430;
  qword_1400819C8 = (unsigned int)dword_140081434;
  qword_140081998 = (unsigned int)dword_140081434;
  v0 = (unsigned int)dword_140081430 / 0x64uLL;
  qword_1400819F0 = 95 * v0;
  qword_1400819E8 = 85 * v0;
  qword_1400819E0 = 75 * v0;
  v1 = (unsigned int)dword_140081434 / 0x64uLL;
  qword_1400819C0 = 95 * v1;
  qword_140081990 = 95 * v1;
  qword_1400819B8 = 85 * v1;
  qword_140081988 = 85 * v1;
  qword_1400819B0 = 75 * v1;
  qword_140081980 = 75 * v1;
  v2 = (struct _ERESOURCE *)operator new(104LL, 0x39326956u, 64LL);
  Resource = v2;
  if ( v2 )
  {
    v5 = ExInitializeResourceLite(v2);
    if ( v5 >= 0 )
    {
      dword_140081A18 = dword_140081438;
      return 0LL;
    }
    else
    {
      operator delete(Resource);
      Resource = 0LL;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2018;
      DxgkLogInternalTriageEvent(v6, 0x40000LL);
      return (unsigned int)v5;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2009;
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225495LL;
  }
}
