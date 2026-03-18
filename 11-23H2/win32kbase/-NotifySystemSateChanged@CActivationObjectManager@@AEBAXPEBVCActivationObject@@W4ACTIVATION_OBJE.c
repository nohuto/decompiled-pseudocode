/*
 * XREFs of ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C0068A30
 * Callers:
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C000D8A0 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0066108 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C0068364 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     ?BringISMUptodate@CActivationObjectManager@@QEBAXXZ @ 0x1C00C2C38 (-BringISMUptodate@CActivationObjectManager@@QEBAXXZ.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C012EAE8 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C012ECD8 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C012EE4C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01EF55C (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 */

__int64 __fastcall CActivationObjectManager::NotifySystemSateChanged(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int v7; // eax
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 v11; // rcx
  __int128 v12; // [rsp+28h] [rbp-29h]
  __int128 v13; // [rsp+38h] [rbp-19h]
  __int64 ThreadId; // [rsp+48h] [rbp-9h]
  _OWORD v15[2]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  __int128 v18; // [rsp+84h] [rbp+33h]
  __int64 v19; // [rsp+94h] [rbp+43h]
  unsigned int v20; // [rsp+9Ch] [rbp+4Bh]

  if ( a3 == 2 )
  {
    v11 = *(_QWORD *)(a2 + 72);
    goto LABEL_6;
  }
  if ( a3 == 3 )
  {
    v11 = 0LL;
LABEL_6:
    IVForegroundSync::ivSendForegroundUpdate(v11, *a4);
  }
  *(_QWORD *)&v12 = *(_QWORD *)(a2 + 40);
  *((_QWORD *)&v12 + 1) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)&v13 = *(_QWORD *)(a2 + 48);
  DWORD2(v13) = *(_DWORD *)(a2 + 56);
  HIDWORD(v13) = (unsigned int)PsGetProcessId(*(PEPROCESS *)(a2 + 24)) & 0xFFFFFFFC;
  ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)(a2 + 32));
  v7 = a4[6];
  v15[0] = v12;
  v16 = ThreadId;
  v8 = *(_OWORD *)a4;
  v15[1] = v13;
  v9 = *((_QWORD *)a4 + 2);
  v18 = v8;
  v17 = a3;
  v19 = v9;
  v20 = v7;
  return SendMessageTo(10LL, v15, 72LL);
}
