/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x140772C14
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140772E54 (PspDeleteSilo.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpDeleteSiloState @ 0x140653DC4 (ExpDeleteSiloState.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObCleanupSiloState @ 0x140740DC8 (ObCleanupSiloState.c)
 *     EtwCleanupSiloState @ 0x1407A63FC (EtwCleanupSiloState.c)
 *     ExpWnfDeleteScopeInstances @ 0x1407C67A8 (ExpWnfDeleteScopeInstances.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *P)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rcx
  void *v6; // rcx
  ULONG_PTR v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  struct _KEVENT *v12; // rcx
  void *v13; // rcx

  v2 = (void *)*((_QWORD *)P + 120);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6B676244u);
    *((_QWORD *)P + 120) = 0LL;
  }
  ObCleanupSiloState((volatile __int64 *)P);
  v3 = P + 784;
  if ( *((_QWORD *)P + 99) || *((_QWORD *)P + 101) || *v3 )
    KeBugCheckEx(0x29u, (ULONG_PTR)v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x66CuLL, 0LL);
  if ( *((_QWORD *)P + 110) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*((_QWORD *)P + 110), 2LL);
    ExpWnfDeleteScopeInstances(*((_QWORD *)P + 110), 0LL);
    ExFreePoolWithTag(*((PVOID *)P + 110), 0x20666E57u);
    KeLeaveCriticalRegion();
  }
  if ( *((_QWORD *)P + 111) )
    ZwClose(*((HANDLE *)P + 111));
  if ( *((_QWORD *)P + 112) )
    ZwClose(*((HANDLE *)P + 112));
  v5 = (void *)*((_QWORD *)P + 104);
  if ( v5 )
  {
    EtwCleanupSiloState(v5);
    *((_QWORD *)P + 104) = 0LL;
  }
  if ( *((_QWORD *)P + 157) )
  {
    RtlFreeAnsiString((PUNICODE_STRING)P + 78);
    *((_QWORD *)P + 157) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 125);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)P + 125) = 0LL;
  }
  v7 = *((_QWORD *)P + 126);
  if ( v7 )
  {
    MiRemoveFromSystemSpace(v7, 1);
    *((_QWORD *)P + 126) = 0LL;
  }
  v8 = (void *)*((_QWORD *)P + 124);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x6C537350u);
    *((_QWORD *)P + 124) = 0LL;
  }
  if ( *((_QWORD *)P + 162) )
  {
    MiRemoveFromSystemSpace(*((_QWORD *)P + 161), 1);
    v9 = (void *)*((_QWORD *)P + 162);
    *((_QWORD *)P + 161) = 0LL;
    ObfDereferenceObject(v9);
    *((_QWORD *)P + 162) = 0LL;
  }
  v10 = (void *)*((_QWORD *)P + 109);
  if ( v10 )
  {
    ExpDeleteSiloState(v10);
    *((_QWORD *)P + 109) = 0LL;
  }
  v11 = (void *)*((_QWORD *)P + 152);
  if ( v11 )
  {
    ZwClose(v11);
    *((_QWORD *)P + 152) = 0LL;
  }
  v12 = (struct _KEVENT *)*((_QWORD *)P + 160);
  if ( v12 )
  {
    KeSetEvent(v12, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 160), 0x65446953u);
    *((_QWORD *)P + 160) = 0LL;
  }
  v13 = (void *)*((_QWORD *)P + 153);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  ExFreePoolWithTag(P, 0x476C6953u);
}
