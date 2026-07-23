/*
 * XREFs of SepMakeLogonSessionsSiblings @ 0x1407938A4
 * Callers:
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x140793C70 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 */

__int64 __fastcall SepMakeLogonSessionsSiblings(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rbp
  struct _ERESOURCE *v13; // r12
  struct _KTHREAD *v14; // rax
  struct _ERESOURCE *v15; // rcx
  struct _KTHREAD *v16; // rax
  unsigned int v17; // esi
  __int64 *i; // rbx
  __int64 v19; // rax
  __int64 v20; // rax

  v2 = 1529154084 * *a1;
  v3 = 1529154084 * *a2;
  CurrentThread = KeGetCurrentThread();
  v7 = SepLogonSessions;
  v8 = v2 >> 28;
  --CurrentThread->KernelApcDisable;
  v9 = v8 & 3;
  v10 = v3 >> 28;
  v11 = v7 + 8 * v8;
  v12 = v10;
  v13 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * v9);
  if ( (unsigned int)v8 >= v10 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&SepRmDbLock + (v10 & 3), 1u);
    v16 = KeGetCurrentThread();
    v15 = v13;
    --v16->KernelApcDisable;
  }
  else
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&SepRmDbLock + v9, 1u);
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v12 & 3));
  }
  ExAcquireResourceExclusiveLite(v15, 1u);
  v17 = 0;
  do
    v11 = *(_QWORD *)v11;
  while ( v11
       && (*(_QWORD *)(v11 + 168) != PsGetCurrentServerSilo()
        || *a1 != *(_DWORD *)(v11 + 8)
        || a1[1] != *(_DWORD *)(v11 + 12)) );
  for ( i = *(__int64 **)(v7 + 8 * v12);
        i && (i[21] != PsGetCurrentServerSilo() || *a2 != *((_DWORD *)i + 2) || a2[1] != *((_DWORD *)i + 3));
        i = (__int64 *)*i )
  {
    ;
  }
  if ( v11 && i )
  {
    v19 = *(_QWORD *)a2;
    *(_DWORD *)(v11 + 40) |= 0x40u;
    *(_QWORD *)(v11 + 176) = v19;
    v20 = *(_QWORD *)a1;
    *((_DWORD *)i + 10) |= 0x40u;
    i[22] = v20;
  }
  else
  {
    v17 = -1073741729;
  }
  ExReleaseResourceLite(v13);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite((PERESOURCE)&SepRmDbLock + (v12 & 3));
  KeLeaveCriticalRegion();
  return v17;
}
