/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C0216F64
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C5BAC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0087C20 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     IsModalMenuStarted @ 0x1C01C6208 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02173E0 (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  char v19; // [rsp+90h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, 0LL);
  v18 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v17 = 0LL;
  if ( *(char *)(v4 + 20) < 0 || *(char *)(v4 + 19) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    goto LABEL_17;
  v6 = *(_QWORD **)(v5 + 608);
  v7 = v6 ? *v6 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v16, v7);
  if ( !*(_QWORD *)v16[0] )
    goto LABEL_17;
  if ( !*(_QWORD *)(*(_QWORD *)v16[0] + 8LL) )
    goto LABEL_17;
  v8 = xxxMNFindWindowFromPoint(v16, &v19, a2);
  v9 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v9 + 20) < 0 || *(char *)(v9 + 19) < 0 || v8 )
    goto LABEL_17;
  v10 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 608LL);
  if ( v10 )
    v10 = (_QWORD *)*v10;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v16, (__int64)v10);
  if ( *(_QWORD *)v16[0] && *(_QWORD *)(*(_QWORD *)v16[0] + 8LL) )
  {
    ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL), &v17);
    v11 = *(unsigned __int64 **)(*(_QWORD *)v16[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v11, 0x1Fu, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v13, v12, v14);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
    return 1LL;
  }
  else
  {
LABEL_17:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
    return 0LL;
  }
}
