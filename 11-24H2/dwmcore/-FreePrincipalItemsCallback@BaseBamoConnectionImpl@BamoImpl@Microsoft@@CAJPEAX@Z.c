/*
 * XREFs of ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x18026E890
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801A7CE0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801A7D34 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801A8994 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x18026F734 (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback(
        struct Microsoft::BamoImpl::ConnectionIndirector **a1)
{
  unsigned int *v2; // rsi
  unsigned int *i; // rdi
  struct Microsoft::BamoImpl::ConnectionIndirector *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v9, a1[12]);
  if ( a1[8] )
  {
    v2 = (unsigned int *)a1[25];
    for ( i = (unsigned int *)a1[24]; i != v2; ++i )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(
        (Microsoft::BamoImpl::BaseBamoConnectionImpl *)a1,
        *i);
  }
  *((_BYTE *)a1 + 219) = 0;
  v4 = a1[24];
  if ( v4 != a1[25] )
    a1[25] = v4;
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v9);
  Microsoft::BamoImpl::BamoImplObject::Release(a1[12], v5, v6, v7);
  return 0LL;
}
