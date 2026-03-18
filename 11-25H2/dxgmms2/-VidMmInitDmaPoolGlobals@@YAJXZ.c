/*
 * XREFs of ?VidMmInitDmaPoolGlobals@@YAJXZ @ 0x14009744C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140109488 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 */

__int64 VidMmInitDmaPoolGlobals(void)
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r9
  struct _ERESOURCE *v2; // rax
  __int64 v3; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // rcx

  qword_1400818B8 = (__int64)&qword_1400818B0;
  qword_1400818B0 = (__int64)&qword_1400818B0;
  dword_140081998 = dword_140081408;
  dword_140081994 = dword_14008140C;
  qword_140081970 = (unsigned int)dword_140081410;
  qword_140081940 = (unsigned int)dword_140081414;
  qword_140081910 = (unsigned int)dword_140081414;
  v0 = (unsigned int)dword_140081410 / 0x64uLL;
  qword_140081968 = 95 * v0;
  qword_140081960 = 85 * v0;
  qword_140081958 = 75 * v0;
  v1 = (unsigned int)dword_140081414 / 0x64uLL;
  qword_140081938 = 95 * v1;
  qword_140081908 = 95 * v1;
  qword_140081930 = 85 * v1;
  qword_140081900 = 85 * v1;
  qword_140081928 = 75 * v1;
  qword_1400818F8 = 75 * v1;
  v2 = (struct _ERESOURCE *)operator new(104LL, 0x39326956u, 64LL);
  Resource = v2;
  if ( v2 )
  {
    v5 = ExInitializeResourceLite(v2);
    if ( v5 >= 0 )
    {
      dword_140081990 = dword_140081418;
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
