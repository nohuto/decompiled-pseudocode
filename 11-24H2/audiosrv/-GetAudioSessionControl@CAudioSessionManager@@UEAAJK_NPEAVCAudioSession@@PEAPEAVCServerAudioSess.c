/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180047510
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800477F0 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x18004788C (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_qS @ 0x1800C3528 (WPP_SF_qS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        char a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  struct CServerAudioSessionControl *v8; // rbx
  _QWORD *v9; // rcx
  CServerAudioSessionControl *v10; // rax
  __int64 v11; // r8
  CServerAudioSessionControl *v12; // rdi
  int v13; // esi
  struct CServerAudioSessionControl *v14; // rax

  v8 = 0LL;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids, a2);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != &WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
      {
        WPP_SF_S(v9[2], 14LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids, 0LL);
        v9 = WPP_GLOBAL_Control;
      }
      if ( v9 != &WPP_GLOBAL_Control && (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
        WPP_SF_S(v9[2], 11LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids, 0LL);
    }
  }
  v10 = (CServerAudioSessionControl *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
    v12 = CServerAudioSessionControl::CServerAudioSessionControl(v10);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v13 = -2147024882;
    goto LABEL_26;
  }
  LOBYTE(v11) = a3;
  v13 = (*(__int64 (__fastcall **)(CServerAudioSessionControl *, _QWORD, __int64, struct CAudioSession *))(*(_QWORD *)v12 + 256LL))(
          v12,
          a2,
          v11,
          a4);
  if ( v13 < 0 )
  {
LABEL_26:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 431, v13);
    goto LABEL_14;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12,
      (unsigned int)&WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
      (_DWORD)v12,
      0LL);
  }
  CServerAudioSessionControl::AddClientReference(v12);
  v8 = v12;
LABEL_14:
  if ( v12 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
        (unsigned int)v13);
    }
    *a5 = 0LL;
    if ( v13 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 483, v13);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16,
        (unsigned int)&WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
        (_DWORD)v8,
        0LL);
    }
    v14 = v8;
    v8 = 0LL;
    *a5 = v14;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v13;
}
