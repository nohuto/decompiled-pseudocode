/*
 * XREFs of ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x140332898
 * Callers:
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x140335914 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x140201734 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void *__fastcall UMPDOBJ::UMPDAllocUserMem(UMPDOBJ *this, int a2)
{
  size_t Size; // [rsp+20h] [rbp-58h]
  _QWORD v5[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v6; // [rsp+40h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-28h]

  v5[1] = this;
  v5[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  DWORD1(v6) = 117;
  LOBYTE(v6) = 0;
  *(_QWORD *)&v7 = *(_QWORD *)this;
  DWORD2(v7) = a2;
  LODWORD(Size) = 8;
  UMPDOBJ::Thunk(this, &v6, 0x20u, v5, Size);
  UMPDOBJ::ResetHeap(this);
  return (void *)v5[0];
}
