/*
 * XREFs of SeTokenSetNoChildProcessRestricted @ 0x1404B4294
 * Callers:
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A971CC (PspSetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 */

void __fastcall SeTokenSetNoChildProcessRestricted(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v12, 0);
  v7 = *(_DWORD *)(a1 + 200);
  if ( !a3 )
  {
    v9 = v7 | 0x80000;
    v10 = v7 | 0x180000;
    v11 = v9 & 0xFFEFFFFF;
    if ( !a2 )
      v10 = v11;
    v8 = v10 & 0xFFDFFFFF;
    goto LABEL_7;
  }
  if ( (v7 & 0x80000) == 0 )
  {
    v8 = v7 | 0x200000;
LABEL_7:
    *(_DWORD *)(a1 + 200) = v8;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v12, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
}
