/*
 * XREFs of ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x1403B4344
 * Callers:
 *     KeSetIdealProcessorThreadEx @ 0x1403B422C (KeSetIdealProcessorThreadEx.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A5B9C (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 * Callees:
 *     KiQueueTebUpdateApc @ 0x1403B1DEC (KiQueueTebUpdateApc.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403B1E60 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403B25A0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     KiCheckPrcbAffinityEx @ 0x1403B44C0 (KiCheckPrcbAffinityEx.c)
 */

__int64 __fastcall KiSetIdealProcessorThread(struct _KTHREAD *a1, unsigned int a2, char a3, unsigned int *a4, char a5)
{
  unsigned int v5; // edi
  char v9; // r12
  unsigned int UserIdealProcessor; // eax
  _KAFFINITY_EX *UserAffinity; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  volatile __int64 *v20; // [rsp+98h] [rbp+48h] BYREF

  v5 = 0;
  v18 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v9 = 0;
  v19 = 0LL;
  if ( !a3 && (a1->MiscFlags & 8) != 0 )
  {
    UserAffinity = a1->UserAffinity;
    UserIdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    UserIdealProcessor = a1->IdealProcessor;
    UserAffinity = a1->Affinity;
  }
  if ( a4 )
    *a4 = UserIdealProcessor;
  v12 = KiProcessorBlock[a2];
  if ( !(unsigned __int8)KiCheckPrcbAffinityEx(UserAffinity, v12) )
    return (unsigned int)-1073741823;
  if ( (*(_DWORD *)(v13 + v14) & 8) != 0 && !a3 )
  {
    a1->UserIdealProcessor = a2;
    a1->UserAffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
LABEL_11:
    KiQueueTebUpdateApc((__int64)a1, a5);
    return v5;
  }
  KiAcquireThreadStateLockForWrite((__int64)a1, &v18, &v17, &v20, (volatile signed __int64 **)&v19);
  a1->IdealProcessor = a2;
  a1->AffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
  if ( !a3 )
  {
    a1->UserIdealProcessor = a2;
    v9 = 1;
    a1->UserAffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
  }
  KiUpdateSharedReadyQueueAffinityThread(v12, (__int64)a1);
  KiReleaseThreadStateLock(v15, v18, &v17, v20, (volatile signed __int64 **)&v19);
  if ( v9 )
    goto LABEL_11;
  return v5;
}
