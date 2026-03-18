/*
 * XREFs of DCompositionCreateSynchronizationObject @ 0x1402228F0
 * Callers:
 *     NtDCompositionCreateSynchronizationObject @ 0x1402230B0 (NtDCompositionCreateSynchronizationObject.c)
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x140016284 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140017D80 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400D1A6C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DCompositionCreateSynchronizationObject(PVOID *a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  char *v4; // rdi
  __int64 v6; // [rsp+28h] [rbp-58h]
  _DWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  PVOID v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Buffer; // [rsp+B0h] [rbp+30h] BYREF

  Buffer = 0LL;
  v3 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (struct _ACL **)&Buffer);
  if ( v3 >= 0 )
  {
    v4 = (char *)Buffer;
    v7[1] = 0;
    v11 = 0;
    Handle = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v13 = 0LL;
    LODWORD(v6) = 40;
    v7[0] = 48;
    v10 = 512;
    v12 = Buffer;
    v3 = CompositionObject::Create(
           v2,
           (__int64)v7,
           1u,
           0LL,
           3,
           v6,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::SynchronizationObject::ObjectInit,
           0LL,
           &Handle);
    if ( v3 >= 0 )
    {
      Buffer = 0LL;
      v3 = DirectComposition::SynchronizationObject::ResolveHandle(
             Handle,
             3LL,
             0LL,
             (struct DirectComposition::SynchronizationObject **)&Buffer);
      if ( v3 >= 0 )
        *a1 = Buffer;
      ObCloseHandle(Handle, 0);
    }
    GreDeleteFastMutex(v4);
  }
  return (unsigned int)v3;
}
