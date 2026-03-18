/*
 * XREFs of ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@@QEAA@XZ @ 0x1401BE4A8
 * Callers:
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401BE4D8 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 */

void __fastcall DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      RIMUnlockExclusive(v2);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
