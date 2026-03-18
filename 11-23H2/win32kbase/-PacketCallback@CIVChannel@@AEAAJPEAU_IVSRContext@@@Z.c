/*
 * XREFs of ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F3940
 * Callers:
 *     ?sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1C01F3CB0 (-sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x1C01F3A18 (-Receive@CIVChannel@@AEAAJXZ.c)
 */

__int64 __fastcall CIVChannel::PacketCallback(CIVChannel *this, struct _IVSRContext *a2)
{
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  const void *v6; // rbp
  unsigned __int64 v7; // r15
  void *v8; // rax
  const void *v9; // rsi

  if ( !isChildPartition() )
    KeBugCheck(0x164u);
  v4 = *((_DWORD *)a2 + 40);
  v5 = *((_DWORD *)a2 + 44);
  v6 = (const void *)*((_QWORD *)a2 + 13);
  if ( !v4 )
  {
    v7 = *((_QWORD *)a2 + 14);
    v8 = (void *)Win32AllocPoolZInit(v7, 0x6E705649u);
    v9 = v8;
    if ( !v8 )
      return CIVChannel::Receive(this);
    memmove(v8, v6, v7);
    v6 = v9;
  }
  if ( !(*((unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *, _QWORD))this + 3))(
          *(_QWORD *)this,
          v5,
          v4,
          v6,
          *((_QWORD *)a2 + 19)) )
    return 0LL;
  return CIVChannel::Receive(this);
}
