/*
 * XREFs of ExFreeSvmAsid @ 0x14048C994
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExpFreeAsid @ 0x14065738C (ExpFreeAsid.c)
 *     ExpSvmDereferenceDevice @ 0x140657D1C (ExpSvmDereferenceDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExFreeSvmAsid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  _KPROCESS *Process; // rbx
  __int64 result; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 *v8; // r15
  __int64 *v9; // r14
  _QWORD *v10; // r13
  _QWORD *P; // [rsp+50h] [rbp+8h]

  v2 = 0LL;
  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  result = 0xFFFFFFFFLL;
  v6 = Process[3].ActiveGroupPadding[0];
  v7 = HIDWORD(Process[4].Padding[0]);
  if ( v6 )
  {
    v2 = Process[3].ActiveGroupPadding[1];
    --v6;
    if ( !v7 )
      goto LABEL_6;
  }
  else if ( !v7 )
  {
    return result;
  }
  v3 = Process[4].Padding[1];
  --v7;
LABEL_6:
  v8 = (__int64 *)&Process[3].Padding[1];
  while ( 1 )
  {
    v9 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 || (result = *v9, *(__int64 **)(*v9 + 8) != v9) )
      __fastfail(3u);
    *v8 = result;
    *(_QWORD *)(result + 8) = v8;
    if ( v9 == v8 )
      break;
    P = (_QWORD *)v9[2];
    v10 = P + 22;
    if ( v2 )
    {
      guard_dispatch_icall_no_overrides(v2, *v10);
      ExpSvmDereferenceDevice(P);
    }
    if ( v3 )
    {
      guard_dispatch_icall_no_overrides(v3, *v10);
      ExpSvmDereferenceDevice(P);
    }
    ExFreePoolWithTag(v9, 0);
  }
  if ( v6 )
  {
    guard_dispatch_icall_no_overrides(v2, a2);
    Process[3].ActiveGroupPadding[1] = 0LL;
    result = ExpFreeAsid(v6, Process);
  }
  if ( v7 )
  {
    guard_dispatch_icall_no_overrides(v3, a2);
    Process[4].Padding[1] = 0LL;
    return ExpFreeAsid(v7, Process);
  }
  return result;
}
