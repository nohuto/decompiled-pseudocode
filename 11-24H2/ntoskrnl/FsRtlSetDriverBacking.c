/*
 * XREFs of FsRtlSetDriverBacking @ 0x14070D080
 * Callers:
 *     IoRegisterFileSystem @ 0x1407142F0 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407144C0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmReleaseLoadLockShared @ 0x1402C75F0 (MmReleaseLoadLockShared.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E7BB4 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall FsRtlSetDriverBacking(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  ULONG_PTR v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
    {
      v7 = 0;
      v4 = MiLockLoadedDataTableEntryIfNecessary(v3, &v7);
      if ( !v4 )
        KeBugCheckEx(0x1Au, 0x101FuLL, v3, 0LL, 0LL);
      v5 = MiBackSystemImageWithPagefile(v4, v7);
      if ( v7 )
        MmReleaseLoadLockShared(0LL);
      return v5;
    }
    else
    {
      return (unsigned int)-1073741213;
    }
  }
  return v2;
}
