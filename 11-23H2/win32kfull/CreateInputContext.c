/*
 * XREFs of CreateInputContext @ 0x1C00759D0
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00E3750 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserCreateInputContext @ 0x1C01CD760 (NtUserCreateInputContext.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z @ 0x1C01B6D5C (--4-$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z.c)
 */

_QWORD *__fastcall CreateInputContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PERESOURCE *v5; // rax
  __int64 v6; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v6 + 488) & 0x2000000) != 0 )
    return 0LL;
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  v9 = v6 + 792;
  if ( a1 )
  {
    if ( !*(_QWORD *)v9 )
      return 0LL;
  }
  v10 = *(_QWORD *)(v6 + 456);
  if ( !v10 )
    return 0LL;
  LOBYTE(v8) = 17;
  v11 = HMAllocObject(v6, v10, v8);
  v12 = (_QWORD *)v11;
  if ( !v11 )
    return 0LL;
  if ( a1 )
  {
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(v11 + 56, *(_QWORD *)(*(_QWORD *)v9 + 56LL));
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(*(_QWORD *)v9 + 56LL, v12);
  }
  else
  {
    v14[0] = v6 + 792;
    v14[1] = v11;
    HMAssignmentLock(v14, 0LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 480) + 256LL) = v12[6];
    *(_QWORD *)(v12[5] + 16LL) = 0LL;
    v12[7] = 0LL;
  }
  *(_QWORD *)(v12[5] + 24LL) = a1;
  return v12;
}
