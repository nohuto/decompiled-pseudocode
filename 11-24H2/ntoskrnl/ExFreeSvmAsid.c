/*
 * XREFs of ExFreeSvmAsid @ 0x140491AF4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExpFreeAsid @ 0x140658CEC (ExpFreeAsid.c)
 *     ExpSvmDereferenceDevice @ 0x14065967C (ExpSvmDereferenceDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExFreeSvmAsid(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  _KPROCESS *Process; // rbx
  __int64 result; // rax
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int64 *v10; // r15
  __int64 *v11; // r14
  _QWORD *v12; // r13
  _QWORD *P; // [rsp+50h] [rbp+8h]

  v4 = 0LL;
  v5 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  result = 0xFFFFFFFFLL;
  v8 = Process[3].ActiveGroupPadding[0];
  v9 = HIDWORD(Process[4].Padding[0]);
  if ( v8 )
  {
    v4 = Process[3].ActiveGroupPadding[1];
    --v8;
    if ( !v9 )
      goto LABEL_6;
  }
  else if ( !v9 )
  {
    return result;
  }
  v5 = Process[4].Padding[1];
  --v9;
LABEL_6:
  v10 = (__int64 *)&Process[3].Padding[1];
  while ( 1 )
  {
    v11 = (__int64 *)*v10;
    if ( *(__int64 **)(*v10 + 8) != v10 || (result = *v11, *(__int64 **)(*v11 + 8) != v11) )
      __fastfail(3u);
    *v10 = result;
    *(_QWORD *)(result + 8) = v10;
    if ( v11 == v10 )
      break;
    P = (_QWORD *)v11[2];
    v12 = P + 22;
    if ( v4 )
    {
      guard_dispatch_icall_no_overrides(v4, *v12, a3, a4);
      ExpSvmDereferenceDevice(P);
    }
    if ( v5 )
    {
      guard_dispatch_icall_no_overrides(v5, *v12, a3, a4);
      ExpSvmDereferenceDevice(P);
    }
    ExFreePoolWithTag(v11, 0);
  }
  if ( v8 )
  {
    guard_dispatch_icall_no_overrides(v4, a2, a3, a4);
    Process[3].ActiveGroupPadding[1] = 0LL;
    result = ExpFreeAsid(v8, Process);
  }
  if ( v9 )
  {
    guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
    Process[4].Padding[1] = 0LL;
    return ExpFreeAsid(v9, Process);
  }
  return result;
}
