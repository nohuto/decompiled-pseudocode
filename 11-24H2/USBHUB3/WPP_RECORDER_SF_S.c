/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140035CD0
 * Callers:
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x14003539C (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     TUNNEL_EvtInterfaceChange @ 0x140090F90 (TUNNEL_EvtInterfaceChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  __int64 v6; // rdi
  const wchar_t *v7; // rbx
  unsigned __int64 v10; // r11
  __int64 v11; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  const wchar_t *v16; // rcx
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-48h]

  v6 = -1LL;
  v7 = a6;
  v10 = (unsigned __int64)a3 >> 16;
  v11 = 10LL;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 2u )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v16,
      v15,
      0LL);
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v11 = 2 * v6 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v7 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, 2LL, a3, a5, v19, v7, v11, 0LL);
}
