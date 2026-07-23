/*
 * XREFs of VrpHandleIoctlModifyFlags @ 0x14082A14C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14092B3C0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x1403E3CE0 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x140407170 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpUnlockJobContextExclusive @ 0x14092BC6C (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14092C1A4 (VrpLockJobContextExclusive.c)
 */

__int64 __fastcall VrpHandleIoctlModifyFlags(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int JobSilo; // edi
  int v8; // eax
  PVOID v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  PVOID Object; // [rsp+68h] [rbp+28h] BYREF

  Object = 0LL;
  a5 = 0LL;
  a6 = 0LL;
  if ( a2 < 0x10 || (*(_DWORD *)(a1 + 12) & *(_DWORD *)(a1 + 8)) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
    v9 = Object;
    JobSilo = v8;
    if ( v8 >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        JobSilo = PsGetPermanentSiloContext(a6, VrpSiloContextSlot, (unsigned __int64 *)&a5);
        if ( JobSilo >= 0 )
        {
          v10 = a5;
          VrpLockJobContextExclusive(a5);
          v11 = a5;
          *(_DWORD *)(a5 + 80) = ~*(_DWORD *)(a1 + 12) & (*(_DWORD *)(a1 + 8) | *(_DWORD *)(v10 + 80));
          VrpUnlockJobContextExclusive(v11);
          v9 = Object;
        }
      }
    }
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
