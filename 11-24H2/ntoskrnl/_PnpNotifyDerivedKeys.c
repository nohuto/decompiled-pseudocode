/*
 * XREFs of _PnpNotifyDerivedKeys @ 0x140A0D3F0
 * Callers:
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14081CA78 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 *     _PnpUpdateInterfacesCallback @ 0x14081CB60 (_PnpUpdateInterfacesCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpNotifyDerivedKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 i; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a6 )
  {
    v11 = a6;
    v12 = a5 + 8;
    do
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)v12; i = (unsigned int)(i + 1) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v12 - 8) + 8 * i);
        result = *(unsigned int *)(v14 + 16);
        if ( *(_DWORD *)(a4 + 16) == (_DWORD)result )
        {
          v15 = *(_QWORD *)a4 - *(_QWORD *)v14;
          if ( *(_QWORD *)a4 == *(_QWORD *)v14 )
            v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v14 + 8);
          if ( !v15 )
          {
            *(_QWORD *)(a7 + 16) = *(_QWORD *)(v12 + 8);
            result = guard_dispatch_icall_no_overrides(a1, a2);
            break;
          }
        }
      }
      v12 += 24LL;
      --v11;
    }
    while ( v11 );
  }
  return result;
}
