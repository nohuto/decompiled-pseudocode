/*
 * XREFs of MiExtendPageFilesIfNecessary @ 0x140463FA8
 * Callers:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x140464038 (MiIssuePageExtendRequest.c)
 */

unsigned __int64 __fastcall MiExtendPageFilesIfNecessary(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  bool v6; // cc
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  result = *(_QWORD *)(a1 + 16864);
  if ( a2 >= result )
  {
    v6 = a2 <= a3;
    if ( a2 < a3 )
    {
      result = a3 - a2;
      if ( a3 - a2 >= 0x400000 )
        return result;
      v6 = a2 <= a3;
    }
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 16840);
      if ( a3 < v7 && a2 < v7 )
      {
        v8 = a3 / 0xA;
        if ( a3 / 0xA > 0x40000 )
          v8 = 0x40000LL;
        v9 = v7 - a3;
        v10 = v8 - a2;
        if ( v10 + a3 <= v9 )
          v9 = v10 + a3;
        return MiIssuePageExtendRequest(a1, v9, 2LL, 0LL);
      }
    }
  }
  return result;
}
