/*
 * XREFs of ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00A0B20
 * Callers:
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C00A0AF4 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C015F0C0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     memcmp @ 0x1C00D67F0 (memcmp.c)
 */

__int64 __fastcall RGNOBJ::bEqual(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v2 = *(_QWORD *)a2;
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 52LL) == *(_DWORD *)(v2 + 52) )
    return memcmp(
             *(const void **)(*(_QWORD *)this + 32LL),
             *(const void **)(v2 + 32),
             (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 40LL) - *(_DWORD *)(*(_QWORD *)this + 32LL))) == 0;
  return v3;
}
