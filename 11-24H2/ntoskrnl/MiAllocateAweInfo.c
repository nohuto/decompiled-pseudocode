/*
 * XREFs of MiAllocateAweInfo @ 0x1407F8928
 * Callers:
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9CD0 (MiCreateProcessDefaultAweInfo.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x140266FBC (MiGetAweInfoPartition.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExInitializeAutoExpandPushLock @ 0x140438B70 (ExInitializeAutoExpandPushLock.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9B80 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfo @ 0x1407F9E08 (MiDeleteAweInfo.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiAllocateAweInfo(__int64 a1, int a2, char a3, KPROCESSOR_MODE a4, __int64 *a5)
{
  char v7; // bp
  int AweInfoBitMap; // edi
  __int64 Pool; // rax
  __int64 v11; // rbx
  int v12; // eax

  v7 = a2;
  *a5 = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741585;
  Pool = MiAllocatePool(0x48uLL, 0x80uLL, 2000776525);
  v11 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  if ( (a3 & 2) != 0 )
  {
    *(_QWORD *)(Pool + 16) = 512LL;
  }
  else if ( (a3 & 4) != 0 )
  {
    *(_QWORD *)(Pool + 16) = 0x40000LL;
  }
  else
  {
    *(_QWORD *)(Pool + 16) = (a3 & 1) != 0 ? 16LL : 1LL;
  }
  if ( (a3 & 0x40) != 0 )
    *(_DWORD *)(Pool + 8) |= 8u;
  *(_QWORD *)Pool = 399680LL;
  if ( (v7 & 1) != 0 )
    *(_DWORD *)(Pool + 8) |= 1u;
  v12 = *(_DWORD *)(Pool + 8);
  if ( (v12 & 8) == 0 )
    *(_DWORD *)(v11 + 8) = v12 | 0x10;
  if ( (a3 & 0x20) != 0 )
    *(_DWORD *)(v11 + 52) = 0;
  else
    *(_DWORD *)(v11 + 52) = ((a3 & 0x10) != 0) + 1;
  *(_QWORD *)(v11 + 40) = a1;
  if ( (a3 & 8) != 0 )
  {
    if ( (*(_DWORD *)(MiGetAweInfoPartition(v11) + 4) & 0x20) == 0 )
    {
      AweInfoBitMap = -1073741637;
LABEL_22:
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v11);
      return (unsigned int)AweInfoBitMap;
    }
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, a4) )
    {
      AweInfoBitMap = -1073741727;
      goto LABEL_22;
    }
    *(_DWORD *)(v11 + 8) |= 4u;
  }
  AweInfoBitMap = MiCreateAweInfoBitMap(v11);
  if ( AweInfoBitMap < 0 )
    goto LABEL_22;
  ExInitializeAutoExpandPushLock((_QWORD *)(v11 + 64), 1);
  *(_DWORD *)(v11 + 8) |= 2u;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 92) |= 0x20000u;
    *(_QWORD *)(a1 + 8) = v11;
  }
  *a5 = v11;
  return (unsigned int)AweInfoBitMap;
}
