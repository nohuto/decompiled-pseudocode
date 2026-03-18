/*
 * XREFs of _PnpNotifyDerivedKeys @ 0x140A14510
 * Callers:
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14081C338 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 *     _PnpUpdateInterfacesCallback @ 0x14081C420 (_PnpUpdateInterfacesCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpNotifyDerivedKeys(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 i; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a6 )
  {
    v12 = a6;
    v13 = a5 + 8;
    do
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)v13; i = (unsigned int)(i + 1) )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v13 - 8) + 8 * i);
        result = *(unsigned int *)(v15 + 16);
        if ( *(_DWORD *)(a4 + 16) == (_DWORD)result )
        {
          v16 = *(_QWORD *)a4 - *(_QWORD *)v15;
          if ( *(_QWORD *)a4 == *(_QWORD *)v15 )
            v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v15 + 8);
          if ( !v16 )
          {
            *(_QWORD *)(a7 + 16) = *(_QWORD *)(v13 + 8);
            result = guard_dispatch_icall_no_overrides(a1, a2, a3, 4LL);
            break;
          }
        }
      }
      v13 += 24LL;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
