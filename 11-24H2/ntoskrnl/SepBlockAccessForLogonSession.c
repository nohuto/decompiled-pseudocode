/*
 * XREFs of SepBlockAccessForLogonSession @ 0x140ABBB60
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140793B70 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
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
