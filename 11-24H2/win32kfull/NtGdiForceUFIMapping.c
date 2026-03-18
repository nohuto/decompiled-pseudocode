/*
 * XREFs of NtGdiForceUFIMapping @ 0x1401FA560
 * Callers:
 *     <none>
 * Callees:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiForceUFIMapping(HDC a1, const void *a2)
{
  const void *v2; // rbx
  __int64 v3; // rcx
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF

  v2 = a2;
  if ( !a2 )
    return 0LL;
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v5, a1);
  if ( !v5[0] )
  {
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v5);
    return 0LL;
  }
  v6 = 0LL;
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v6, v2, 8uLL);
  v3 = v5[0];
  *(_QWORD *)(v5[0] + 256LL) = v6;
  *(_DWORD *)(v3 + 252) |= 4u;
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v5);
  return 1LL;
}
