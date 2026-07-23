/*
 * XREFs of IopSymlinkRememberJunction @ 0x1408ACA10
 * Callers:
 *     IopSymlinkProcessReparse @ 0x140A2F13C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140A2F1E8 (IopGraftName.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     IopSymlinkGetECP @ 0x140446838 (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140474550 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopGetRelatedFileName @ 0x14070FD10 (IopGetRelatedFileName.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408AB168 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkUpdateECP @ 0x1408ABA8C (IopSymlinkUpdateECP.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1408ACB14 (IopSymlinkGetRelatedMountPoint.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkRememberJunction(unsigned __int16 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int RelatedFileName; // esi
  unsigned __int16 *RelatedMountPoint; // rax
  __int64 v10; // r9
  _WORD *MostRecentlyUsedName; // rbx
  _WORD *v12; // r9
  __int16 v13; // dx
  __int64 Pool2; // rax
  __int64 v15; // rdi
  unsigned __int16 v16; // bx
  const void *v17; // rdx
  unsigned __int16 v19; // r8
  __int16 v20; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v21; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-10h] BYREF

  RelatedFileName = 0;
  RelatedMountPoint = (unsigned __int16 *)IopSymlinkGetRelatedMountPoint(a4, a1);
  MostRecentlyUsedName = RelatedMountPoint;
  if ( RelatedMountPoint )
  {
    *RelatedMountPoint = a1;
    IopSymlinkFreeRelatedMountPointChain((__int64)RelatedMountPoint);
  }
  else
  {
    MostRecentlyUsedName = (_WORD *)IopSymlinkGetMostRecentlyUsedName(v10);
    v21 = MostRecentlyUsedName;
    MostRecentlyUsedName[1] |= 1u;
    *MostRecentlyUsedName = v13;
    if ( v12 == MostRecentlyUsedName )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        v19 = v12[8] + 2;
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.Buffer = 0LL;
        v20 = 0;
        RelatedFileName = IopGetRelatedFileName(a2, (__int64)&Destination, v19, &v20);
        if ( RelatedFileName >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, a4 + 1);
          RelatedFileName = IopSymlinkUpdateECP((PIRP)a3, a4, a1, &Destination, v20, a4->MaximumLength);
          ExFreePoolWithTag(Destination.Buffer, 0);
          if ( RelatedFileName < 0 )
            return (unsigned int)RelatedFileName;
          IopSymlinkGetECP(*(struct _ECP_LIST **)(a3 + 112), (PVOID *)&v21);
          MostRecentlyUsedName = v21;
        }
      }
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL, *(unsigned __int16 *)(a2 + 88) + 32LL, 0x69536F49u);
  *((_QWORD *)MostRecentlyUsedName + 1) = Pool2;
  v15 = Pool2;
  if ( Pool2 )
  {
    v16 = *(_WORD *)(a2 + 88);
    v17 = *(const void **)(a2 + 96);
    *(_QWORD *)Pool2 = 0LL;
    *(_WORD *)(Pool2 + 16) = 0;
    *(_WORD *)(Pool2 + 18) = v16;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    memmove((void *)(Pool2 + 32), v17, v16);
    *(_WORD *)(v15 + 16) += v16;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)RelatedFileName;
}
