/*
 * XREFs of _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1408B0B98
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1408AEE34 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x1408B0E28 (_PnpRaiseNtPlugPlayInterfacePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B6F54 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpInterfaceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 i; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx

  result = guard_dispatch_icall_no_overrides(a1, a2);
  v8 = &qword_140001820;
  v9 = 2LL;
  do
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v8; i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(*(v8 - 1) + 8 * i);
      result = *(unsigned int *)(v11 + 16);
      if ( *(_DWORD *)(a5 + 16) == (_DWORD)result )
      {
        v12 = *(_QWORD *)a5 - *(_QWORD *)v11;
        if ( *(_QWORD *)a5 == *(_QWORD *)v11 )
          v12 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v11 + 8);
        if ( !v12 )
        {
          result = guard_dispatch_icall_no_overrides(a1, a2);
          break;
        }
      }
    }
    v8 += 3;
    --v9;
  }
  while ( v9 );
  return result;
}
