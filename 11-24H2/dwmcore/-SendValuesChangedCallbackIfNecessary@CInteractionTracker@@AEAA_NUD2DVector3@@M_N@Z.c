/*
 * XREFs of ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x180154F58
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x180014440 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x180156810 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801550B0 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::SendValuesChangedCallbackIfNecessary(__int64 a1, __int64 *a2, float a3)
{
  char v3; // si
  __int64 v6; // rcx
  char v7; // r9
  unsigned int ChannelCallbackId; // eax
  __int64 v9; // xmm0_8
  __int64 v10; // r10
  int v11; // eax
  unsigned __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+50h] [rbp-58h] BYREF
  int v16; // [rsp+58h] [rbp-50h]
  _QWORD v17[2]; // [rsp+60h] [rbp-48h] BYREF

  v3 = 1;
  if ( !CInteractionTracker::ShouldNotify((CInteractionTracker *)a1, 1u) )
    return 0;
  if ( v7 )
    goto LABEL_14;
  v13 = *(_QWORD *)(v6 + 512) - *a2;
  if ( !v13 )
    v13 = *(unsigned int *)(a1 + 520) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v13 && *(float *)(a1 + 524) == a3 )
    return 0;
LABEL_14:
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6392LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6392LL),
         8LL) )
  {
    ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
    v9 = *a2;
    v16 = *((_DWORD *)a2 + 2);
    v17[1] = *(unsigned int *)(a1 + 72);
    v14 = *(_DWORD *)(a1 + 196);
    v15 = v9;
    v17[0] = ChannelCallbackId;
    CoreUICallSend(v10, v17, 2LL, 8LL, 0, &unk_18032BF24, (unsigned int)&v15, a3, v14);
  }
  v11 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(a1 + 512) = *a2;
  *(_DWORD *)(a1 + 520) = v11;
  *(float *)(a1 + 524) = a3;
  return v3;
}
