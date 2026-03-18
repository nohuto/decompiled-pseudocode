/*
 * XREFs of MiPageHasRelocations @ 0x140946FF0
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x1404D2ADC (MiWalkEntireImagePageNeedsProcessing.c)
 *     MiRevertRelocatedImagePfn @ 0x140946F00 (MiRevertRelocatedImagePfn.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB4254 (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiPageHasRelocations(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // r11
  char v4; // r10
  unsigned int v5; // r9d
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 v13; // rax

  v3 = *a1;
  v4 = a3;
  v5 = a2;
  if ( (a3 & 1) != 0 && a2 < *((_DWORD *)a1 + 14) )
  {
    while ( a2 == v5 )
    {
      if ( *(_QWORD *)(v3 + 8LL * a2) )
        return 1LL;
      v7 = a1[11];
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 8LL * a2 + 64) )
          return 1LL;
      }
      v8 = a1[12];
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 32);
        if ( a2 >= v9 )
        {
          v10 = *(_DWORD *)(v8 + 36);
          if ( a2 <= v10 )
          {
            v11 = v10 - v9 + 1;
            v12 = *(_QWORD *)(v8 + 24);
            if ( !v12 && v11 || (v13 = a2 - v9, v13 >= v11) )
            {
              guard_dispatch_icall_no_overrides(a1);
              __debugbreak();
            }
            if ( *(_QWORD *)(v12 + 8 * v13) )
              return 1LL;
          }
        }
      }
      if ( (v4 & 2) != 0 && (unsigned int)PdcCreateWatchdogAroundClientCall() )
        return 1LL;
      ++a2;
    }
  }
  return 0LL;
}
