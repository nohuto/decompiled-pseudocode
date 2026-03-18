/*
 * XREFs of ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C0117EDC
 * Callers:
 *     PhkFirstGlobalValid @ 0x1C003C7B4 (PhkFirstGlobalValid.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C003CC84 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     PhkFirstValid @ 0x1C003CE54 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C003CEB4 (PhkNextValid.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0117C14 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C0117E60 (GetJournallingQueue.c)
 *     xxxLoadHmodIndex @ 0x1C0122AD0 (xxxLoadHmodIndex.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C003F9B0 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

void __fastcall LockRefactorStagingAssertAny(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  PERESOURCE *v5; // rax

  if ( !gbInDestroyHandleTableObjects )
  {
    v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(this, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*v5) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive(this) && !tagDomLock::IsLockedShared(this)) )
    {
      __int2c();
    }
  }
}
