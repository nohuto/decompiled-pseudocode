/*
 * XREFs of ?GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x140072F10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400594C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetMeteringData(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_METER_DATA *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // r14
  size_t v6; // rax
  __int64 v7; // rbp
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  int v10; // ebx
  signed __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  v13 = *(_OWORD *)((char *)this - 136);
  EtwEventActivityIdControl(4LL, &v13);
  v6 = 4 * v4;
  v7 = (unsigned int)v4;
  if ( !is_mul_ok(v4, 4uLL) )
    v6 = -1LL;
  v8 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 10) + 32LL))(
            *((_QWORD *)this + 10),
            (unsigned int)v4,
            v8);
    if ( v10 >= 0 && (_DWORD)v4 )
    {
      v11 = v9 - (_BYTE *)a2;
      do
      {
        *(_DWORD *)a2 = *(_DWORD *)((char *)a2 + v11);
        a2 = (struct AUDIO_METER_DATA *)((char *)a2 + 4);
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    v10 = -2147024882;
  }
  operator delete(v9);
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_73715f9ee22d38db1d35d5de395f8c05_Traceguids,
        v10);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetMeteringData", 399, v10);
  }
  EtwEventActivityIdControl(4LL, &v13);
  return (unsigned int)v10;
}
