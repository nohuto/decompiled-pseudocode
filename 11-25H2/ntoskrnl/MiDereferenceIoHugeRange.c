/*
 * XREFs of MiDereferenceIoHugeRange @ 0x140664048
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14020DE6C (MiLockHugePfnInternal.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x140392060 (MiIsPageInIoHugeRangeTransition.c)
 *     MiHugePfnPartition @ 0x1404DA234 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
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
    v4 = (unsigned __int64 *)(qword_140E2FD80 + 8LL * (unsigned int)v3);
    v7 = *v4;
    v5 = MiHugePfnPartition(&v7);
    MiLockHugePfnInternal((__int64)v4);
    v6 = ((*v4 >> 15) & 0x1FF) - 1;
    v7 = ((unsigned __int64)v6 << 15) ^ (*v4 ^ ((unsigned __int64)v6 << 15)) & 0xFFFFFFFFFF007FFFuLL;
    *v4 = v7;
    if ( !v6 )
      MiInsertHugeRangeInList(v5, (unsigned int)v3, 18);
    result = qword_140E2FD88;
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E2FD88 + 4 * (((((__int64)v4 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v4 - qword_140E2FD80) >> 3) & 0x1F)));
  }
  return result;
}
