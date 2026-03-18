/*
 * XREFs of inflateReset2 @ 0x1405F507C
 * Callers:
 *     RtlDecompressBufferDeflateInternal @ 0x1405F24D8 (RtlDecompressBufferDeflateInternal.c)
 * Callees:
 *     inflateReset @ 0x1405F504C (inflateReset.c)
 *     inflateStateCheck @ 0x1405F51A8 (inflateStateCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall inflateReset2(__int64 a1, unsigned int a2)
{
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // rdx

  if ( (unsigned int)inflateStateCheck() )
    return 4294967294LL;
  v7 = *(_QWORD *)(v4 + 40);
  if ( v3 >= 0 )
  {
    v8 = (a2 >> 4) + 5;
  }
  else
  {
    if ( v3 < -15 )
      return 4294967294LL;
    v8 = 0;
    a2 = -a2;
  }
  if ( a2 && a2 - 8 > 7 )
    return 4294967294LL;
  v9 = *(_QWORD *)(v7 + 64);
  if ( v9 )
  {
    if ( *(_DWORD *)(v7 + 48) != a2 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 64), v9, v5, v6);
      *(_QWORD *)(v7 + 64) = 0LL;
    }
  }
  *(_DWORD *)(v7 + 16) = v8;
  *(_DWORD *)(v7 + 48) = a2;
  return inflateReset();
}
