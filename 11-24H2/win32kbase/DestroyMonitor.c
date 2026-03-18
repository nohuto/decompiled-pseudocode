/*
 * XREFs of DestroyMonitor @ 0x1400638E0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x14000B680 (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400415C0 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMMarkObjectDestroy @ 0x140041E50 (HMMarkObjectDestroy.c)
 *     _HMPheFromObjectWorker @ 0x140062A10 (_HMPheFromObjectWorker.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     RIMOnDestroyMonitor @ 0x140063AA8 (RIMOnDestroyMonitor.c)
 *     ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x140063B1C (ApiSetEditionHandleMoveSizeDataOnDestroyMonitor.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z @ 0x140150A9C (--4-$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x14019FA88 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 */

__int64 __fastcall DestroyMonitor(int *a1)
{
  struct _HANDLEENTRY *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 UserSessionState; // rax
  __int64 i; // rcx
  int *v8; // rax
  __int64 v9; // rcx
  int *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  char *v17; // rcx
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF
  char v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0;
  v2 = (struct _HANDLEENTRY *)HMPheFromObjectWorker(a1);
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v19, v2);
  RIMOnDestroyMonitor((struct tagMONITOR *)a1);
  if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3) + 57008) + 112LL)
    && (v4 = *(_QWORD *)(W32GetUserSessionState(v4) + 57008), *(int **)(v4 + 112) == a1) )
  {
    v5 = *((_QWORD *)a1 + 7);
    UserSessionState = W32GetUserSessionState(v4);
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
      *(_QWORD *)(UserSessionState + 57008) + 112LL,
      v5);
  }
  else
  {
    i = *(_QWORD *)(W32GetUserSessionState(v4) + 57008);
    if ( *(_QWORD *)(i + 112) )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(i) + 57008) + 112LL) + 56LL; ; i = (__int64)(v8 + 14) )
      {
        v8 = *(int **)i;
        if ( !*(_QWORD *)i )
          break;
        if ( v8 == a1 )
        {
          tagMONITOR::SharedMixedObjectPointerFieldpMonitorNext<tagMONITOR>::operator=(i, *((_QWORD *)a1 + 7));
          break;
        }
      }
    }
  }
  v9 = *(_QWORD *)(W32GetUserSessionState(i) + 57008);
  if ( a1 == *(int **)(v9 + 104) )
  {
    v10 = *(int **)(W32GetUserSessionState(v9) + 57008);
    v11 = *((_QWORD *)v10 + 14);
    if ( !v11 )
    {
      v12 = W32GetUserSessionState(v10);
      v10 = *(int **)(v12 + 71464);
      if ( v10 != a1 )
        v11 = *(_QWORD *)(v12 + 71464);
    }
    v13 = W32GetUserSessionState(v10);
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (_QWORD *)(*(_QWORD *)(v13 + 57008) + 104LL),
      v11);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  _InterlockedOr(v18, 0);
  ApiSetEditionHandleMoveSizeDataOnDestroyMonitor(a1);
  result = HMMarkObjectDestroy((struct _HEAD *)a1);
  if ( (_DWORD)result )
  {
    v16 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( v16 )
    {
      --*v16;
      v17 = (char *)*((_QWORD *)a1 + 16);
      if ( !*(_DWORD *)v17 )
        GreDeleteFastMutex(v17);
      *((_QWORD *)a1 + 16) = 0LL;
    }
    result = HMFreeObject((unsigned int *)a1);
  }
  if ( v19 )
  {
    result = W32GetUserSessionState(v15);
    *(_QWORD *)(result + 19824) = 0LL;
  }
  return result;
}
