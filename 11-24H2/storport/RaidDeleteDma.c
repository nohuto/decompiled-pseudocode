/*
 * XREFs of RaidDeleteDma @ 0x140183EF4
 * Callers:
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidDeleteDma(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  void (*v4)(void); // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        v4 = *(void (**)(void))(v3 + 8);
        if ( v4 )
        {
          v4();
          *(_OWORD *)a1 = 0LL;
          *((_OWORD *)a1 + 1) = 0LL;
        }
      }
    }
  }
}
