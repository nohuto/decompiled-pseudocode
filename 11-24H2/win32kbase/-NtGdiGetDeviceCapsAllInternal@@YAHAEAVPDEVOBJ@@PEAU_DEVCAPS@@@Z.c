/*
 * XREFs of ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1400E7360
 * Callers:
 *     NtGdiGetDeviceCapsAll @ 0x1400E71E0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x14011F35C (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAllInternal(struct PDEVOBJ *this, struct _DEVCAPS *a2)
{
  struct _DEVCAPS *v2; // rdi
  _BYTE Src[144]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (struct _DEVCAPS *)MmUserProbeAddress;
  *(_BYTE *)a2 = *(_BYTE *)a2;
  *((_BYTE *)a2 + 143) = *((_BYTE *)a2 + 143);
  memset(Src, 0, sizeof(Src));
  vGetDeviceCaps(this, (struct _DEVCAPS *)Src);
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (struct _DEVCAPS *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v2, Src, 0x90uLL);
  return 1LL;
}
