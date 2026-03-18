/*
 * XREFs of ?UserSetUserObjectCapability@@YAHPEAXK0H@Z @ 0x1401646C0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMInitializeObjectSecurity @ 0x1401240C4 (HMInitializeObjectSecurity.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x14012485C (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x1401249FC (HMAllocateObjectSecurity.c)
 *     ?RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z @ 0x14019B4A8 (-RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z.c)
 */

int __fastcall UserSetUserObjectCapability(void *a1, unsigned int a2, void *a3, int a4)
{
  __int64 v5; // rdi
  __int64 UserSessionState; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  void *v17; // rcx

  v5 = (unsigned __int16)a1;
  UserSessionState = W32GetUserSessionState(a1);
  v10 = W32GetUserSessionState(v9);
  v11 = *(_QWORD *)(UserSessionState + 19944);
  v12 = (unsigned int)(*(_DWORD *)(v10 + 19952) * v5);
  v14 = *(_QWORD *)(W32GetUserSessionState(v13) + 19888) + 40 * v5;
  if ( !(unsigned __int16)*(_DWORD *)(W32GetUserSessionState(v15) + 16LL * *(unsigned __int8 *)(v12 + v11 + 24) + 42644) )
    return 1;
  if ( !*(_QWORD *)(v14 + 24) )
  {
    if ( a4 || !(unsigned int)HMAllocateObjectSecurity(v14, *(_BYTE *)(v12 + v11 + 24)) )
      return 0;
    if ( !(unsigned int)HMInitializeObjectSecurity(v14, *(_BYTE *)(v12 + v11 + 24)) )
    {
      GreDeleteFastMutex(*(char **)(v14 + 24));
      *(_QWORD *)(v14 + 24) = 0LL;
      return 0;
    }
    *(_BYTE *)(v12 + v11 + 25) |= 4u;
  }
  v17 = *(void **)(v14 + 24);
  if ( a4 )
    return RemoveCapabilityFromDescriptor(v17, a2, a3);
  else
    return AddCapabilityToDescriptor(v17, a2, a3);
}
