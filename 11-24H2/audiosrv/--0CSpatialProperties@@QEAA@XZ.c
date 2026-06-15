/*
 * XREFs of ??0CSpatialProperties@@QEAA@XZ @ 0x18009F29C
 * Callers:
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18008BA78 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

CSpatialProperties *__fastcall CSpatialProperties::CSpatialProperties(CSpatialProperties *this)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 7678) = 0;
  *((_QWORD *)this + 962) = 0LL;
  *((GUID *)this + 480) = GUID_00000000_0000_0000_0000_000000000000;
  memset_0((char *)this + 96, 0, 0x48uLL);
  memset_0((char *)this + 172, 0, 0x1D52uLL);
  *(_OWORD *)((char *)this + 7704) = 0LL;
  *(_OWORD *)((char *)this + 7720) = 0LL;
  *((_QWORD *)this + 967) = 0LL;
  return this;
}
