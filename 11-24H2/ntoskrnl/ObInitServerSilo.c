/*
 * XREFs of ObInitServerSilo @ 0x140740F4C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x1403E3CE0 (PsGetPermanentSiloContext.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 */

int __fastcall ObInitServerSilo(PVOID Object)
{
  __int64 *ServerSiloGlobals; // rax
  __int64 v3; // rdx
  __int64 *v4; // r14
  _QWORD *v5; // rcx
  int result; // eax
  HANDLE v7; // rbx
  int v8; // r15d
  __int64 v9; // rbx
  PVOID v10; // rcx
  _DWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v12; // [rsp+48h] [rbp-28h]
  __int64 *v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]
  __int128 v16; // [rsp+60h] [rbp-10h]
  PVOID v17; // [rsp+A8h] [rbp+38h] BYREF
  PVOID Objecta; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  v17 = 0LL;
  v15 = 0;
  Handle = 0LL;
  Objecta = 0LL;
  v11[1] = 0;
  ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals((__int64)Object);
  v3 = 37LL;
  v4 = ServerSiloGlobals;
  ServerSiloGlobals[15] = 0LL;
  v5 = ServerSiloGlobals + 16;
  ServerSiloGlobals[90] = 0LL;
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 2;
    --v3;
  }
  while ( v3 );
  if ( PsIsHostSilo((__int64)Object) )
    return 0;
  result = PsGetPermanentSiloContext((__int64)Object, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Objecta);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Objecta, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v7 = Handle;
      v13 = &ObpGlobalDirectoryName;
      v11[0] = 48;
      v12 = Handle;
      v14 = 576;
      v16 = 0LL;
      v8 = ObReferenceObjectByNameEx((unsigned int)v11, 0, 2, (_DWORD)ObpDirectoryObjectType, 0, 0LL, (__int64)&v17);
      ZwClose(v7);
      if ( v8 < 0 )
        return v8;
      v9 = *((_QWORD *)v17 + 38);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      *v4 = (v9 + 15) & -(__int64)(v9 != 0);
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      v10 = v17;
      *(_QWORD *)(v9 + 16) = Object;
      ObfDereferenceObject(v10);
      return 0;
    }
  }
  return result;
}
