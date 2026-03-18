/*
 * XREFs of ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00A05D0
 * Callers:
 *     NtUserSetProp @ 0x1C003BD70 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     _BuildPropList @ 0x1C003C22C (_BuildPropList.c)
 *     NtUserGetProp @ 0x1C0064200 (NtUserGetProp.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
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
