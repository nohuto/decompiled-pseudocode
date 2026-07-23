/*
 * XREFs of ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140370B7C
 * Callers:
 *     KeSetIdealProcessorThreadEx @ 0x140370A64 (KeSetIdealProcessorThreadEx.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A092C (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 * Callees:
 *     KiCheckPrcbAffinityEx @ 0x140370D80 (KiCheckPrcbAffinityEx.c)
 *     KiQueueTebUpdateApc @ 0x1403A05FC (KiQueueTebUpdateApc.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403A0DB0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 */

__int64 __fastcall KiSetIdealProcessorThread(struct _KTHREAD *a1, unsigned int a2, char a3, unsigned int *a4, char a5)
{
  unsigned int v5; // edi
  char v9; // r12
  unsigned int UserIdealProcessor; // eax
  _KAFFINITY_EX *UserAffinity; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r10
  int v16; // ecx
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v5 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v9 = 0;
  v20 = 0LL;
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
  if ( (*(_DWORD *)(v14 + v15) & 8) != 0 && !a3 )
  {
    a1->UserIdealProcessor = a2;
    a1->UserAffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
LABEL_11:
    LOBYTE(v13) = a5;
    KiQueueTebUpdateApc(a1, v13);
    return v5;
  }
  KiAcquireThreadStateLockForWrite(
    (_DWORD)a1,
    (unsigned int)&v19,
    (unsigned int)&v18,
    (unsigned int)&v21,
    (__int64)&v20);
  a1->IdealProcessor = a2;
  a1->AffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
  if ( !a3 )
  {
    a1->UserIdealProcessor = a2;
    v9 = 1;
    a1->UserAffinityPrimaryGroup = *(unsigned __int8 *)(v12 + 208);
  }
  KiUpdateSharedReadyQueueAffinityThread(v12, a1);
  KiReleaseThreadStateLock(v16, v19, (unsigned int)&v18, v21, (__int64)&v20);
  if ( v9 )
    goto LABEL_11;
  return v5;
}
