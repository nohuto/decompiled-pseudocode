/*
 * XREFs of HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x14025AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400BA59C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1400FD81C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FDDF8 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016DFBC (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019494C (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140200EE0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

_BOOL8 __fastcall HDEV_DeleteRfontsAndUnloadDeviceFonts(_DWORD *a1, __int64 a2)
{
  int v2; // edi
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  __int64 v9; // rdx
  struct PFF *v10; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  struct PFF **v14; // [rsp+60h] [rbp+10h] BYREF
  _DWORD *v15; // [rsp+68h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  v15 = a1;
  memset(v13, 0, sizeof(v13));
  PushThreadGuardedObject(v13, a2, vUnreferencePdevWorker);
  while ( 1 )
  {
    v4 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v15);
    Flink = v4->Flink;
    if ( v4->Flink == v4 )
      break;
    v14 = (struct PFF **)&Flink[-42];
    v12[0] = Flink[-34].Flink;
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v14, a1, (struct PFFOBJ *)v12, v2);
    v14 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
  }
  PopThreadGuardedObject(v13);
  if ( !a1[887] )
    return 1LL;
  SessionState = W32GetSessionState(v7, v6);
  GreAcquireSemaphore<17,>(*(_QWORD *)(SessionState + 96) + 4872LL);
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v12, v9);
  v14 = 0LL;
  v10 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v12, (unsigned __int64)a1, &v14);
  return PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v12, v10, v14, 0);
}
