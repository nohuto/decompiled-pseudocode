/*
 * XREFs of KsepCacheLookup @ 0x14095B438
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x14073E384 (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x14073FD4C (KseLookupHardwareId.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KseQueryDeviceDataList @ 0x14095A9E0 (KseQueryDeviceDataList.c)
 *     KsepDbCacheQueryDevice @ 0x14095B370 (KsepDbCacheQueryDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall KsepCacheLookup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v9; // r8
  _QWORD *i; // rsi
  _QWORD *v11; // rdi
  _QWORD *result; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx

  v6 = guard_dispatch_icall_no_overrides(a2, a2, a3, a4);
  v8 = v6 % *(_DWORD *)(a1 + 12);
  v9 = 2LL * v8;
  for ( i = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL * v8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v6 % *(_DWORD *)(a1 + 12))) )
    {
      ++*(_DWORD *)(a1 + 52);
      return 0LL;
    }
    v11 = i - 1;
    if ( v6 == *((_DWORD *)i - 2) )
    {
      if ( (unsigned int)guard_dispatch_icall_no_overrides(a2, i - 1, v9, v7) )
        break;
    }
  }
  v13 = v11 + 3;
  v14 = v11[3];
  if ( *(_QWORD **)(v14 + 8) != v11 + 3
    || (v15 = (_QWORD *)v11[4], (_QWORD *)*v15 != v13)
    || (*v15 = v14, *(_QWORD *)(v14 + 8) = v15, v16 = *(_QWORD **)(a1 + 40), *v16 != a1 + 32) )
  {
    __fastfail(3u);
  }
  *v13 = a1 + 32;
  v11[4] = v16;
  *v16 = v13;
  *(_QWORD *)(a1 + 40) = v13;
  result = i - 1;
  ++*(_DWORD *)(a1 + 48);
  return result;
}
