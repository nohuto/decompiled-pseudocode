/*
 * XREFs of Simulator_NotifyNode @ 0x14006B334
 * Callers:
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 * Callees:
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Simulator_NotifyNode(__int64 a1)
{
  int NameSpaceObject; // eax
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16), 0LL, (__int64)&v6, 0);
  v3 = v6;
  v4 = NameSpaceObject;
  if ( NameSpaceObject >= 0 )
  {
    if ( ghNotify )
      v4 = ghNotify(2LL, *(unsigned int *)(a1 + 24), v6 + 120, qword_140088E68, 0LL, *(_QWORD *)(a1 + 16));
    else
      v4 = -1073741224;
  }
  DereferenceObjectEx(v3);
  return v4;
}
