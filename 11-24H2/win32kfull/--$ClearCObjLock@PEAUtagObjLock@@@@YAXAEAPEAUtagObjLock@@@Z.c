/*
 * XREFs of ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x140271B78
 * Callers:
 *     ??0?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@0@Z @ 0x140102A34 (--0-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@AEAUtagObjLock@@00@Z @ 0x140102C40 (--0-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearCObjLock<tagObjLock *>(_QWORD *a1)
{
  *a1 = 0LL;
}
