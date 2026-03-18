/*
 * XREFs of ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140123F20
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMInitializeObjectSecurity @ 0x1401240C4 (HMInitializeObjectSecurity.c)
 *     HMInitializeSecurityDescriptor @ 0x140124158 (HMInitializeSecurityDescriptor.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x14012485C (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x1401249FC (HMAllocateObjectSecurity.c)
 *     ?RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z @ 0x14019B4A8 (-RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z.c)
 */

__int64 __fastcall UserSetWindowMessageCapability(HWND a1, int a2, void *a3, int a4)
{
  __int64 v5; // rdi
  unsigned int v8; // esi
  __int64 UserSessionState; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  struct _RTL_AVL_TABLE *v18; // rbx
  PVOID v19; // rax
  __int64 v21; // rdx
  _OWORD Buffer[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+40h] [rbp-38h]

  v5 = (unsigned __int16)a1;
  v8 = 0;
  UserSessionState = W32GetUserSessionState(a1);
  v11 = W32GetUserSessionState(v10);
  v12 = *(_QWORD *)(UserSessionState + 19944);
  v13 = (unsigned int)(*(_DWORD *)(v11 + 19952) * v5);
  v15 = *(_QWORD *)(W32GetUserSessionState(v14) + 19888);
  memset(Buffer, 0, sizeof(Buffer));
  v17 = v15 + 40 * v5;
  v24 = 0LL;
  if ( !*(_QWORD *)(v17 + 24) )
  {
    if ( a4 )
      return 0LL;
    LOBYTE(v16) = *(_BYTE *)(v13 + v12 + 24);
    if ( !(unsigned int)HMAllocateObjectSecurity(v15 + 40 * v5, v16) )
      return 0LL;
    LOBYTE(v21) = *(_BYTE *)(v13 + v12 + 24);
    if ( !(unsigned int)HMInitializeObjectSecurity(v17, v21) )
    {
      GreDeleteFastMutex(*(char **)(v17 + 24));
      *(_QWORD *)(v17 + 24) = 0LL;
      return 0LL;
    }
  }
  v18 = (struct _RTL_AVL_TABLE *)(*(_QWORD *)(v17 + 24) + 40LL);
  DWORD2(v24) = a2;
  v19 = RtlLookupElementGenericTableAvl(v18, Buffer);
  if ( a4 )
  {
    if ( !v19 )
      return v8;
    return (unsigned int)RemoveCapabilityFromDescriptor(v19, 0x10001u, a3);
  }
  if ( v19 )
    return (unsigned int)AddCapabilityToDescriptor(v19, 0x10001u, a3);
  if ( (unsigned int)HMInitializeSecurityDescriptor(Buffer, &WinMsgCapGenericMapping) )
  {
    v8 = AddCapabilityToDescriptor(Buffer, 0x10001u, a3);
    if ( v8 )
      RtlInsertElementGenericTableAvl(v18, Buffer, 0x30u, 0LL);
    return v8;
  }
  return 0LL;
}
