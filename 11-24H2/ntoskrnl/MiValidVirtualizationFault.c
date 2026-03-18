/*
 * XREFs of MiValidVirtualizationFault @ 0x1404359DC
 * Callers:
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiGetVirtualFaultPageInfo @ 0x140435B70 (MiGetVirtualFaultPageInfo.c)
 *     MiFillVirtualFaultInfo @ 0x140435BA4 (MiFillVirtualFaultInfo.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiSetFaultPacketDirectives @ 0x1404374AC (MiSetFaultPacketDirectives.c)
 *     MiPerformSafePdeWrite @ 0x140488444 (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiValidVirtualizationFault(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 VirtualFaultPageInfo; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  int v10; // ecx
  unsigned int v11; // ebx
  int v13; // eax
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+58h] BYREF

  VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a2, *a1, a3, a4);
  v8 = MI_READ_PTE_LOCK_FREE(a3);
  v10 = *(_DWORD *)(a2 + 56);
  v15 = v8;
  if ( (v10 & 1) != 0 && (v8 & 0x42) == 0 )
    return 0LL;
  v11 = 1;
  if ( (v10 & 0x20) != 0 )
  {
    v16 = 0LL;
    v14 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (*(_QWORD *)(v14 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v14 + 8) > 0 )
    {
      v13 = MiCopyOnWrite(
              (__int64)(a3 << 25) >> 16,
              (volatile signed __int64 *)a3,
              0xFFFFFFFFFFFFFFFFuLL,
              0,
              (__int128 *)&v16);
      if ( v13 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v13, v16);
        return 0LL;
      }
      v15 = MI_READ_PTE_LOCK_FREE(a3);
      v14 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    v11 = MiCompleteSecureProcessFault(&v14, &v15, a2, v9);
    v8 = v15;
  }
  if ( (v8 & 0x20) == 0 )
  {
    MiPerformSafePdeWrite(a1[7], a3, v8, 1LL);
    v8 = MI_READ_PTE_LOCK_FREE(a3);
  }
  if ( v11 )
    MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v8 >> 12) & 0xFFFFFFFFFFLL);
  return v11;
}
