/*
 * XREFs of HsaBuildInterruptRemappingEntry @ 0x1404F8108
 * Callers:
 *     HsaBuildDeviceTableEntry @ 0x14043EC24 (HsaBuildDeviceTableEntry.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405712EC (HsaUpdateRemappingTableInDeviceTableEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaBuildInterruptRemappingEntry(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)(a3 + 16) = 0LL;
  if ( *(_DWORD *)(a1 + 176) )
  {
    *(_QWORD *)(a3 + 16) = 0x2000000000000001LL;
    _BitScanForward(&v3, *(_DWORD *)(a2 + 20));
    v4 = (2LL * (v3 & 0xF)) | 0x2000000000000001LL;
    *(_QWORD *)(a3 + 16) = v4;
    result = v4 | *(_QWORD *)a2 & 0xFFFFFFFFFFFC0LL | 0x400000000000000LL;
  }
  else
  {
    result = 0x1000000000000020LL;
  }
  *(_QWORD *)(a3 + 16) = result;
  return result;
}
