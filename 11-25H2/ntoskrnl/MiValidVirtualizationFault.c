/*
 * XREFs of MiValidVirtualizationFault @ 0x1403F2F20
 * Callers:
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiGetVirtualFaultPageInfo @ 0x1403F30B4 (MiGetVirtualFaultPageInfo.c)
 *     MiFillVirtualFaultInfo @ 0x1403F30E8 (MiFillVirtualFaultInfo.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiSetFaultPacketDirectives @ 0x1403F4984 (MiSetFaultPacketDirectives.c)
 *     MiPerformSafePdeWrite @ 0x1404885D8 (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiValidVirtualizationFault(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 VirtualFaultPageInfo; // r15
  unsigned __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // ebx
  int v11; // eax
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v13; // [rsp+78h] [rbp+48h] BYREF
  __int64 v14; // [rsp+88h] [rbp+58h] BYREF

  VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a2, *a1);
  v7 = MI_READ_PTE_LOCK_FREE(a3);
  v8 = *(_DWORD *)(a2 + 56);
  v13 = v7;
  if ( (v8 & 1) != 0 && (v7 & 0x42) == 0 )
    return 0LL;
  v9 = 1;
  if ( (v8 & 0x20) != 0 )
  {
    v14 = 0LL;
    v12 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (*(_QWORD *)(v12 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v12 + 8) > 0 )
    {
      v11 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, (volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL, 0, &v14);
      if ( v11 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v11, v14);
        return 0LL;
      }
      v13 = MI_READ_PTE_LOCK_FREE(a3);
      v12 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    v9 = MiCompleteSecureProcessFault(&v12, &v13);
    v7 = v13;
  }
  if ( (v7 & 0x20) == 0 )
  {
    MiPerformSafePdeWrite(a1[7], a3, v7, 1LL);
    v7 = MI_READ_PTE_LOCK_FREE(a3);
  }
  if ( v9 )
    MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v7 >> 12) & 0xFFFFFFFFFFLL);
  return v9;
}
