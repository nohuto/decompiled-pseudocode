/*
 * XREFs of MiDereferenceIoHugeRange @ 0x14066FB68
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x140675880 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiIsPageInIoHugeRangeTransition @ 0x1403CEED0 (MiIsPageInIoHugeRangeTransition.c)
 *     MiLockHugePfnInternal @ 0x1403F9BD8 (MiLockHugePfnInternal.c)
 *     MiHugePfnPartition @ 0x1404D91E4 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 */

__int64 __fastcall MiDereferenceIoHugeRange(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbp
  unsigned int v6; // r8d
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = MiIsPageInIoHugeRangeTransition(a1);
  if ( (_DWORD)result )
  {
    v3 = (a1 >> 18) & 0x3FFFFF;
    v4 = (unsigned __int64 *)(qword_140E2FFC0 + 8LL * (unsigned int)v3);
    v7 = *v4;
    v5 = MiHugePfnPartition(&v7);
    MiLockHugePfnInternal((__int64)v4);
    v6 = ((*v4 >> 15) & 0x1FF) - 1;
    v7 = ((unsigned __int64)v6 << 15) ^ (*v4 ^ ((unsigned __int64)v6 << 15)) & 0xFFFFFFFFFF007FFFuLL;
    *v4 = v7;
    if ( !v6 )
      MiInsertHugeRangeInList(v5, (unsigned int)v3, 18);
    result = qword_140E2FFC8;
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E2FFC8 + 4 * (((((__int64)v4 - qword_140E2FFC0) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v4 - qword_140E2FFC0) >> 3) & 0x1F)));
  }
  return result;
}
