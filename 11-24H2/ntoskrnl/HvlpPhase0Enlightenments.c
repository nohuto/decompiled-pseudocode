/*
 * XREFs of HvlpPhase0Enlightenments @ 0x140589208
 * Callers:
 *     HvlRestoreEnlightenment @ 0x14058040C (HvlRestoreEnlightenment.c)
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404CCED0 (HvlpSetRegister64.c)
 *     HvlpAllocateEarlyPages @ 0x14058942C (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x140589554 (HvlpMapEarlyPages.c)
 */

__int64 __fastcall HvlpPhase0Enlightenments(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v1 = 0LL;
  v6 = 0LL;
  if ( (HvlEnlightenments & 0x100) == 0 )
    return 0LL;
  HvlpGetRegister64(589847, &v7);
  v4 = v7 | 1;
  if ( (HvlpFlags & 2) != 0 )
  {
    v6 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v1 = (void *)HvlpMapEarlyPages(v7 & 0xFFFFFFFFFFFFF000uLL, v3, 4LL);
    if ( v1 )
    {
LABEL_5:
      HvlpSetRegister64(589847, v4);
      if ( v1 )
        HvlpReferenceTscPage = v1;
      return 0LL;
    }
  }
  else
  {
    if ( !a1 )
    {
      v4 = v4 & 0xFFF | MmGetPhysicalAddress(HvlpReferenceTscPage).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_5;
    }
    v1 = (void *)HvlpAllocateEarlyPages(a1, 1LL, &v6, 4LL);
    if ( v1 )
    {
      v4 = v6 & 0xFFFFFFFFFFFFF000uLL | v4 & 0xFFF;
      goto LABEL_5;
    }
  }
  return 3221225626LL;
}
