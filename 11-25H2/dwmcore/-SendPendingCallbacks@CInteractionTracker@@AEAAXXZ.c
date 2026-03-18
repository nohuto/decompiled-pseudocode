/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18003B870
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x18003B1F0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18003E2B8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1800F4CD0 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  char *v4; // rdi
  bool v5; // si
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  char v9; // al
  char v10; // r9
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  unsigned int i; // edx
  __int64 v15; // rsi
  unsigned int ChannelCallbackId; // eax
  __int64 v17; // xmm0_8
  int v18; // ecx
  double v19; // xmm0_8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+40h] [rbp-38h]
  int v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-28h] BYREF
  int v26; // [rsp+58h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-18h] BYREF
  __int64 v28; // [rsp+68h] [rbp-10h]

  v1 = *((_QWORD *)this + 7);
  if ( v1 && *(_DWORD *)(v1 + 108) && *((_DWORD *)this + 18) && (*((_BYTE *)this + 192) & 1) != 0 )
  {
    v4 = (char *)this + 480;
    v5 = *((_DWORD *)this + 126)
      && !*(_DWORD *)(*((_QWORD *)this + 60) + 24LL * (unsigned int)(*((_DWORD *)this + 126) - 1));
    CInteractionTracker::SendPendingStateChangeCallbacks(this, v5);
    v7 = *((unsigned __int8 *)this + 540);
    if ( (v7 & 6) != 0 )
    {
      v8 = *((_DWORD *)this + 24);
      LOBYTE(v7) = (v7 & 4) != 0;
      v25 = *((_QWORD *)this + 11);
      v26 = v8;
      v9 = CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v25, v6, v7);
      *((_BYTE *)this + 540) &= 0xF9u;
      v10 = v9;
      if ( !v5 )
        return;
      v11 = *(_QWORD *)v4;
      v12 = *((_DWORD *)this + 24);
      v13 = 3LL * (unsigned int)(*((_DWORD *)v4 + 6) - 1);
      *(_QWORD *)(v11 + 8 * v13 + 4) = *((_QWORD *)this + 11);
      *(_DWORD *)(v11 + 8 * v13 + 12) = v12;
      *(_DWORD *)(*(_QWORD *)v4 + 24LL * (unsigned int)(*((_DWORD *)v4 + 6) - 1) + 16) = *((_DWORD *)this + 36);
    }
    else
    {
      v10 = 0;
      if ( !v5 )
        return;
    }
    if ( *((char *)this + 540) >= 0 && !v10 )
      CInteractionTracker::SendPendingStateChangeCallbacks(this, 0);
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
           8LL);
    if ( v3 )
    {
      for ( i = 0; i < *((_DWORD *)this + 126); ++i )
      {
        v15 = 3LL * i;
        if ( !*(_DWORD *)(*((_QWORD *)this + 60) + 24LL * i) )
        {
          ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
          v17 = *((_QWORD *)this + 11);
          v18 = *((_DWORD *)this + 24);
          v27 = ChannelCallbackId;
          v28 = *((unsigned int *)this + 18);
          v23 = *((_DWORD *)this + 49);
          v25 = v17;
          v19 = *((float *)this + 36);
          v26 = v18;
          CoreUICallSend(v3, &v27, 2LL, 8LL, 0, &unk_180336E64, (unsigned int)&v25, *(_QWORD *)&v19, v23);
          v20 = CNotificationResource::GetChannelCallbackId(this);
          v28 = *((unsigned int *)this + 18);
          v21 = *((_QWORD *)this + 60);
          v27 = v20;
          LODWORD(v22) = *(unsigned __int8 *)(v21 + 8 * v15 + 20);
          CoreUICallSend(
            v3,
            &v27,
            2LL,
            8LL,
            3,
            &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_R2zrAyFwjWqsppRzeRelrl6I2ZE,
            *((_DWORD *)this + 49),
            v22,
            v24);
          break;
        }
      }
    }
    *((_DWORD *)this + 126) = 0;
  }
}
