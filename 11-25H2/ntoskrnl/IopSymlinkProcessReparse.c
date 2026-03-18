/*
 * XREFs of IopSymlinkProcessReparse @ 0x140862168
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x14044FBB0 (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140478170 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopFindMatchingComponentsLengthR @ 0x140709144 (IopFindMatchingComponentsLengthR.c)
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x1408625D4 (IopSymlinkRememberJunction.c)
 */

int __fastcall IopSymlinkProcessReparse(PIRP Irp, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR Information; // rax
  __int64 v7; // rdx
  struct _ECP_LIST *UserBuffer; // rcx
  __int64 MostRecentlyUsedName; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  Information = Irp->IoStatus.Information;
  if ( Information - 2684354563u <= 0x16 && (v7 = 4194817LL, _bittest64(&v7, Information - 2684354563u)) )
  {
    if ( !a4 )
      LODWORD(Information) = IopGraftName(Irp);
  }
  else if ( Information > 2 )
  {
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
    v12 = 0LL;
    LODWORD(Information) = IopSymlinkGetECP(UserBuffer, (PVOID *)&v12);
    if ( (Information & 0x80000000) != 0LL
      || (MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName(v12),
          MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(
                                        (unsigned __int16 *)(a2 + 88),
                                        (unsigned __int16 *)(MostRecentlyUsedName + 16)),
          LODWORD(Information) = IopSymlinkRememberJunction(MatchingComponentsLengthR, a2, Irp, v12),
          (Information & 0x80000000) != 0LL) )
    {
      Irp->IoStatus.Status = Information;
    }
  }
  return Information;
}
