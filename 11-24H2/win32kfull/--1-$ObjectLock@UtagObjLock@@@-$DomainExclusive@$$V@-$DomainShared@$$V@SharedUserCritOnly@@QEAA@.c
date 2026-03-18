/*
 * XREFs of ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x140085600
 * Callers:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     _BuildPropList @ 0x140085418 (_BuildPropList.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(
        __int64 a1)
{
  tagObjLock *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) && *(_BYTE *)(a1 + 32) )
  {
    v2 = *(tagObjLock **)(a1 + 16);
    if ( v2 )
      tagObjLock::UnLockExclusive(v2);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
