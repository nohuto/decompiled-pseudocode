/*
 * XREFs of UsbhCalculateInterfaceBandwidth @ 0x1C0029CB8
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002D820 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhCalculateInterfaceBandwidth(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  _DWORD *i; // r15
  unsigned int v8; // r12d
  int v9; // ebp
  _DWORD *v10; // rax

  v5 = 0;
  v6 = 0;
  for ( i = PdoExt(a2); v6 < *(_DWORD *)(a3 + 16); ++v6 )
  {
    v8 = i[292];
    v9 = 0;
    v10 = FdoExt(a1);
    if ( *((_QWORD *)v10 + 551) )
      v9 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))v10 + 551))(
             *((_QWORD *)v10 + 529),
             a3 + 24 * (v6 + 1LL),
             v8);
    v5 += v9;
  }
  return v5 / 0x3E8;
}
