/*
 * XREFs of PspApplyIFEOPerfOptions @ 0x140776AA8
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PspSetProcessPriorityClass @ 0x1408EB3D4 (PspSetProcessPriorityClass.c)
 */

__int64 __fastcall PspApplyIFEOPerfOptions(__int64 a1, unsigned int *a2, KPROCESSOR_MODE a3, __int64 a4)
{
  unsigned int *v5; // rbx
  unsigned int v7; // edi
  unsigned __int32 v8; // eax
  unsigned int v9; // edi
  unsigned int DefaultPagePriority; // eax
  unsigned int v11; // r8d
  unsigned __int32 v12; // eax
  int v13; // r8d
  __int64 result; // rax

  v5 = a2;
  if ( (*a2 & 1) != 0 )
  {
    v7 = a2[2];
    if ( v7 < 4 && (v7 <= 2 || (SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a3) & 1) != 0) )
    {
      v8 = *(_DWORD *)(a1 + 500);
      v9 = v7 << 27;
      do
      {
        a2 = (unsigned int *)v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 500), v9 | v8 & 0xC7FFFFFF, v8);
      }
      while ( v8 != (_DWORD)a2 );
    }
  }
  if ( (*v5 & 2) != 0 )
  {
    DefaultPagePriority = MmGetDefaultPagePriority();
    if ( v11 < DefaultPagePriority )
    {
      v12 = *(_DWORD *)(a1 + 496);
      v13 = v11 << 12;
      do
      {
        a2 = (unsigned int *)v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 496), v13 | v12 & 0xFFFF8FFF, v12);
      }
      while ( v12 != (_DWORD)a2 );
    }
  }
  result = *v5;
  if ( (result & 4) != 0 && v5[4] <= 0xFF )
  {
    LOBYTE(a2) = *((_BYTE *)v5 + 16);
    LOBYTE(a4) = a3;
    return PspSetProcessPriorityClass(a1, a2, 0LL, a4);
  }
  return result;
}
