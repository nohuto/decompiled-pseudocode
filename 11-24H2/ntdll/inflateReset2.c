/*
 * XREFs of inflateReset2 @ 0x180150B00
 * Callers:
 *     RtlDecompressBufferDeflateInternal @ 0x18014B348 (RtlDecompressBufferDeflateInternal.c)
 * Callees:
 *     inflateReset @ 0x180150ACC (inflateReset.c)
 *     inflateStateCheck @ 0x180150C2C (inflateStateCheck.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall inflateReset2(__int64 a1, unsigned int a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // edi

  if ( (unsigned int)inflateStateCheck() )
    return 4294967294LL;
  v6 = *(_QWORD *)(v5 + 40);
  if ( v4 >= 0 )
  {
    v7 = (a2 >> 4) + 5;
  }
  else
  {
    if ( v4 < -15 )
      return 4294967294LL;
    v7 = 0;
    a2 = -a2;
  }
  if ( a2 && a2 - 8 > 7 )
    return 4294967294LL;
  if ( *(_QWORD *)(v6 + 64) )
  {
    if ( *(_DWORD *)(v6 + 48) != a2 )
    {
      (*(void (__fastcall **)(_QWORD))(a1 + 56))(*(_QWORD *)(v5 + 64));
      *(_QWORD *)(v6 + 64) = 0LL;
    }
  }
  *(_DWORD *)(v6 + 16) = v7;
  *(_DWORD *)(v6 + 48) = a2;
  return inflateReset();
}
