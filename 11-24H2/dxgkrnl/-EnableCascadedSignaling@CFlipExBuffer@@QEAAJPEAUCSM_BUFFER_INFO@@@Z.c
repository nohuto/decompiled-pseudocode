/*
 * XREFs of ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400610A4
 * Callers:
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14001ECA8 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x14001A800 (DxgkGetSessionTokenManager.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14001F788 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x140021AE0 (-GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x140063F08 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipExBuffer::EnableCascadedSignaling(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  int SessionTokenManager; // eax
  __int64 v5; // rsi
  int v6; // ebx
  void (__fastcall ***v7)(_QWORD); // r11
  void (__fastcall ***v8)(_QWORD); // rbx
  int InfoInternal; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 *v12; // rcx
  __int64 v13; // r8
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  void (__fastcall ***v18)(_QWORD); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v21; // [rsp+58h] [rbp-A8h] BYREF

  if ( !*((_QWORD *)this + 86) )
  {
    v19 = 0LL;
    v18 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v19);
    v5 = v19;
    v6 = SessionTokenManager;
    if ( SessionTokenManager >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v19 + 160LL))(
             v19,
             *((_QWORD *)this + 47),
             &v18);
      if ( v6 >= 0 )
      {
        v7 = v18;
        v8 = v18;
        if ( v18 )
        {
          (**v18)(v18);
          v7 = v18;
        }
        *((_QWORD *)this + 86) = v8;
        v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), char *, char *, char *, char *, char *))(*v7)[4])(
               v7,
               (char *)this + 656,
               (char *)this + 664,
               (char *)this + 672,
               (char *)this + 680,
               (char *)this + 668);
      }
    }
    ReleaseInterface<IAdapter>(&v18);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( v6 < 0 )
      goto LABEL_16;
  }
  InfoInternal = CFlipExBuffer::GetInfoInternal(this, a2);
  *((_QWORD *)a2 + 145) = 0LL;
  v6 = InfoInternal;
  *((_QWORD *)a2 + 147) = *((_QWORD *)this + 82);
  if ( InfoInternal < 0 )
    goto LABEL_16;
  v11 = *(_QWORD *)this;
  LODWORD(v18) = 31;
  LOBYTE(v10) = 1;
  v6 = (*(__int64 (__fastcall **)(CFlipExBuffer *, __int64, void (__fastcall ****)(_QWORD), _BYTE *))(v11 + 80))(
         this,
         v10,
         &v18,
         v20);
  if ( v6 >= 0 )
  {
    if ( (_DWORD)v18 )
    {
      v12 = (__int128 *)&v21;
      v13 = (unsigned int)v18;
      v14 = (_OWORD *)((char *)a2 + 168);
      do
      {
        v15 = *v12;
        v16 = v12[1];
        v12 = (__int128 *)((char *)v12 + 40);
        *v14 = v15;
        v14[1] = v16;
        v14 += 2;
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
LABEL_16:
    CFlipExBuffer::DisableCascadedSignaling(this);
  }
  return (unsigned int)v6;
}
