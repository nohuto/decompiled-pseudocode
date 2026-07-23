/*
 * XREFs of LdrpMakePermanentImageCommit @ 0x180033288
 * Callers:
 *     LdrpLocateMrdata @ 0x180033BC0 (LdrpLocateMrdata.c)
 *     LdrpCfgProcessLoadConfig @ 0x180034480 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpMakePermanentImageCommit(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 *v3; // rcx
  unsigned __int64 i; // r8
  __int64 result; // rax

  v2 = a1;
  v3 = (__int64 *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  for ( i = (a2 + (unsigned __int64)(v2 & 0xFFF) + 4095) >> 12; i; --i )
  {
    result = *v3;
    *v3 = *v3;
    v3 += 512;
  }
  return result;
}
