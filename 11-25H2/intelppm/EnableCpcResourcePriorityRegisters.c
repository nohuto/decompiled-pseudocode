/*
 * XREFs of EnableCpcResourcePriorityRegisters @ 0x140008FC4
 * Callers:
 *     CpcReinitializeHandler @ 0x140008E50 (CpcReinitializeHandler.c)
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 * Callees:
 *     ReadGenAddrMaybeHiddenEx @ 0x140002014 (ReadGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupportedEx @ 0x140006010 (CpcRegisterIsSupportedEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x140008B8C (WriteGenAddrMaybeHiddenEx.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

void __fastcall EnableCpcResourcePriorityRegisters(__int64 a1, unsigned int *a2)
{
  unsigned int i; // ebx
  char *v5; // rbp
  __int64 v6; // r8
  __int64 GenAddrMaybeHidden; // rax

  if ( _bittest64((const signed __int64 *)(a1 + 280), 0x32u) )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v5 = (char *)&a2[26 * i];
      if ( CpcRegisterIsSupportedEx((__int64)(v5 + 40)) )
      {
        GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(a1, (__int64)a2 + v6 + 16);
        WriteGenAddrMaybeHiddenEx(a1, v5 + 40, GenAddrMaybeHidden);
      }
    }
    if ( qword_1400193F8 )
      qword_1400193F8();
  }
}
