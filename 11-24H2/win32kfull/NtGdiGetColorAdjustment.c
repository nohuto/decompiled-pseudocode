/*
 * XREFs of NtGdiGetColorAdjustment @ 0x1401FF960
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetColorAdjustment(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[14]; // [rsp+20h] [rbp-98h] BYREF
  __int128 Src; // [rsp+90h] [rbp-28h] BYREF
  __int64 v7; // [rsp+A0h] [rbp-18h]

  Src = 0LL;
  v7 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    Src = *(_OWORD *)(v5[0] + 176LL);
    v7 = *(_QWORD *)(v5[0] + 192LL);
    WORD1(Src) = BYTE2(Src) & 3;
    v3 = 1;
  }
  else
  {
    EngSetLastError(6u);
    v3 = 0;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 0x18uLL);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
