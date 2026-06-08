/*
 * XREFs of EnableCpcResourcePriorityRegisters @ 0x1400067A4
 * Callers:
 *     CpcReinitializeHandler @ 0x140006660 (CpcReinitializeHandler.c)
 *     InitAcpiCpc @ 0x1400266B8 (InitAcpiCpc.c)
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x140001BA0 (WriteGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1400025A4 (ReadGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupportedEx @ 0x140006644 (CpcRegisterIsSupportedEx.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

void __fastcall EnableCpcResourcePriorityRegisters(__int64 a1, unsigned int *a2)
{
  unsigned int i; // ebx
  unsigned int *v5; // rbp
  __int64 v6; // r8
  __int64 GenAddrMaybeHidden; // rax

  if ( _bittest64((const signed __int64 *)(a1 + 280), 0x32u) )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v5 = &a2[26 * i];
      if ( CpcRegisterIsSupportedEx((__int64)(v5 + 10)) )
      {
        GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(a1, (__int64)a2 + v6 + 16);
        WriteGenAddrMaybeHiddenEx(a1, (__int64)(v5 + 10), GenAddrMaybeHidden);
      }
    }
    if ( qword_140015848 )
      qword_140015848();
  }
}
