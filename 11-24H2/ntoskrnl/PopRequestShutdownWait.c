/*
 * XREFs of PopRequestShutdownWait @ 0x140A52D84
 * Callers:
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 *     PoRequestShutdownEvent @ 0x140A52D40 (PoRequestShutdownEvent.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopRequestShutdownWait(PVOID Object)
{
  __int64 Pool2; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx

  Pool2 = ExAllocatePool2(0x100uLL);
  v3 = 0;
  v4 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = Object;
  ObfReferenceObjectWithTag(Object, 0x64536F50u);
  ExAcquireFastMutex(&PopShutdownListMutex);
  if ( PopShutdownListAvailable )
  {
    *v4 = PopShutdownThreadList;
    PopShutdownThreadList = v4;
  }
  else
  {
    ObfDereferenceObjectWithTag(Object, 0x64536F50u);
    ExFreePoolWithTag(v4, 0);
    v3 = -1073741823;
  }
  KeReleaseGuardedMutex(&PopShutdownListMutex);
  return v3;
}
