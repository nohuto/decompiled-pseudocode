/*
 * XREFs of SepBlockAccessForLogonSession @ 0x140AB6B80
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140793C10 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 */

__int64 __fastcall SepBlockAccessForLogonSession(_DWORD *a1)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v5; // rbp
  unsigned int v6; // edi

  v2 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v3 = SepLogonSessions + 8 * v2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v2 & 3));
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
      break;
    if ( *(_QWORD *)(v3 + 168) == PsGetCurrentServerSilo()
      && *a1 == *(_DWORD *)(v3 + 8)
      && a1[1] == *(_DWORD *)(v3 + 12) )
    {
      *(_DWORD *)(v3 + 40) |= 0x20u;
      goto LABEL_8;
    }
  }
  v6 = -1073741729;
LABEL_8:
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return v6;
}
