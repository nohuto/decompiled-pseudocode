/*
 * XREFs of IvtGetDomainId @ 0x14056BBE8
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x14056AEA0 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14056B300 (IvtConfigureAts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetDomainId(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( !*(_BYTE *)(a1 + 320) )
    return (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32)
                                                    + 8LL * (unsigned int)(2 * (**(_DWORD **)(a2 + 56) >> 8)))
                                        + 16LL * (unsigned __int8)**(_DWORD **)(a2 + 56)
                                        + 8) >> 8);
  v2 = *(_QWORD *)(a2 + 64);
  v3 = 0x10000LL;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 32) )
    {
      v4 = *(_QWORD *)(v2 + 64);
      if ( (*(_QWORD *)v4 & 1) != 0 )
      {
        v5 = *(_QWORD *)v4 & 0x1C0LL;
        if ( v5 == 256 || ((v5 - 64) & 0xFFFFFFFFFFFFFFBFuLL) == 0 )
          return (unsigned __int16)*(_DWORD *)(v4 + 8);
      }
    }
  }
  return v3;
}
