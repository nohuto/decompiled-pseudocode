/*
 * XREFs of NtDCompositionCreateBufferCollection @ 0x140222DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x140016284 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140017D80 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x14010EAC0 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     ?ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14022461C (-ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtDCompositionCreateBufferCollection(unsigned int a1, void *a2, void *a3, _QWORD *a4)
{
  int v8; // edi
  __int64 v9; // rcx
  char *v10; // r12
  __int64 v12; // [rsp+28h] [rbp-2D0h]
  HANDLE Handle; // [rsp+50h] [rbp-2A8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-2A0h] BYREF
  HANDLE v15; // [rsp+60h] [rbp-298h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-290h] BYREF
  _DWORD v17[2]; // [rsp+70h] [rbp-288h] BYREF
  __int64 v18; // [rsp+78h] [rbp-280h]
  __int64 v19; // [rsp+80h] [rbp-278h]
  int v20; // [rsp+88h] [rbp-270h]
  int v21; // [rsp+8Ch] [rbp-26Ch]
  PVOID v22; // [rsp+90h] [rbp-268h]
  __int64 v23; // [rsp+98h] [rbp-260h]
  _QWORD v24[4]; // [rsp+A0h] [rbp-258h] BYREF
  _BYTE v25[512]; // [rsp+C0h] [rbp-238h] BYREF

  LODWORD(Handle) = a1;
  Object = a3;
  v8 = 0;
  memset(v25, 0, sizeof(v25));
  Buffer = 0LL;
  if ( a1 )
  {
    if ( a1 <= 0x40 && a2 )
      RtlCopyFromUser(v25, a2, 8LL * a1);
    else
      v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    v8 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (struct _ACL **)&Buffer);
    if ( v8 >= 0 )
    {
      v17[1] = 0;
      v21 = 0;
      Handle = 0LL;
      v17[0] = 48;
      v18 = 0LL;
      v20 = 512;
      v19 = 0LL;
      v10 = (char *)Buffer;
      v22 = Buffer;
      v23 = 0LL;
      v24[0] = v25;
      v24[1] = a1;
      v24[2] = a3;
      LODWORD(v12) = 64;
      v8 = CompositionObject::Create(
             v9,
             (__int64)v17,
             3u,
             0LL,
             6,
             v12,
             (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::BufferCollectionObject::ObjectInit,
             (__int64)v24,
             &Handle);
      if ( v8 >= 0 )
      {
        Object = 0LL;
        v8 = DirectComposition::BufferCollectionObject::ResolveHandle(
               Handle,
               3u,
               0,
               (struct DirectComposition::BufferCollectionObject **)&Object);
        ObCloseHandle(Handle, 0);
        if ( v8 >= 0 )
        {
          v15 = 0LL;
          v8 = CompositionObject::CreateHandle((CompositionObject *)Object, 3u, 0, 0, &v15);
          ObfDereferenceObject(Object);
          if ( v8 >= 0 )
          {
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              a4 = (_QWORD *)MmUserProbeAddress;
            *a4 = v15;
          }
        }
      }
      GreDeleteFastMutex(v10);
    }
  }
  return (unsigned int)v8;
}
