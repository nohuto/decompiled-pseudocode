/*
 * XREFs of ?SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800370D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180002290 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E7D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x180024458 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SaveAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  signed __int64 v4; // r8
  bool v5; // zf
  signed __int64 v6; // rax
  volatile signed __int64 *v7; // rsi
  signed __int32 v8; // eax
  signed __int64 v9; // rcx
  signed __int64 v10; // rax
  signed __int32 v11; // eax
  char *v12; // rax
  __int64 v13; // r8
  char *v14; // rdi
  char *v15; // rax
  int v16; // edi
  _DWORD v18[6]; // [rsp+30h] [rbp-28h] BYREF
  char v19; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( this )
  {
    v4 = *((_QWORD *)this + 7);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v4 + 1, v4);
        v5 = v4 == v6;
        v4 = v6;
        if ( !v5 )
          continue;
      }
      v7 = (volatile signed __int64 *)this;
      goto LABEL_10;
    }
    do
      v8 = *(_DWORD *)(2 * v4 + 0x10);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v4 + 16), v8 + 1, v8) );
  }
  v7 = (volatile signed __int64 *)this;
  if ( this )
  {
LABEL_10:
    v9 = *((_QWORD *)this + 7);
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v9 + 1, v9);
        v5 = v9 == v10;
        v9 = v10;
        if ( !v5 )
          continue;
      }
      goto LABEL_17;
    }
    do
      v11 = *(_DWORD *)(2 * v9 + 0x10);
    while ( v11 != 0x7FFFFFFF
         && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v9 + 16), v11 + 1, v11) );
  }
LABEL_17:
  v18[2] = 0;
  v18[0] = 3;
  v18[1] = 128;
  v12 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v12;
  if ( v12 )
  {
    *((_QWORD *)v12 + 1) = this;
    v15 = v12 + 16;
    *(_QWORD *)v15 = 0LL;
    if ( v15 != &v19 )
    {
      *(_QWORD *)v15 = this;
      v7 = 0LL;
    }
    *((_DWORD *)v14 + 6) = 0;
    *(_QWORD *)v14 = &off_180049E68;
    `eh vector constructor iterator'(
      v14 + 32,
      8LL,
      1LL,
      (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
    *((_DWORD *)v14 + 6) = 0;
  }
  else
  {
    v14 = 0LL;
  }
  v16 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
          (__int64)v18,
          (__int64 *)a2,
          v13,
          (void (__fastcall ***)(_QWORD, __int64))v14);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v7);
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v16);
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this);
  return (unsigned int)v16;
}
