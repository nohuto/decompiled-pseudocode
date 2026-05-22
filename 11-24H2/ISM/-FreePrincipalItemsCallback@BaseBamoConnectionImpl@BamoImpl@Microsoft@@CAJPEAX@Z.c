/*
 * XREFs of ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x1800AAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18004AF90 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x180071B10 (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int **v4; // rbx
  unsigned int *v5; // rbp
  unsigned int *i; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[12]);
  v4 = (unsigned int **)(this + 24);
  if ( this[8] )
  {
    v5 = (unsigned int *)this[25];
    for ( i = *v4; i != v5; ++i )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(
        (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
        *i);
  }
  *((_BYTE *)this + 219) = 0;
  if ( this[24] != this[25] )
    this[25] = (struct Microsoft::BamoImpl::ConnectionIndirector *)*v4;
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v2, v3);
  Microsoft::BamoImpl::BamoImplObject::Release(this[12], v7, v8, v9);
  return 0LL;
}
