/*
 * XREFs of IopRetestConfiguration @ 0x14071F59C
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x14071FD98 (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpLookupArbitersNewResources @ 0x140AA9024 (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopRetestConfiguration(int a1, int a2, _QWORD **a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v8; // r8
  __int64 v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a3;
  v10 = 0LL;
  v11 = 0LL;
  result = 0LL;
  while ( 1 )
  {
    v8 = v3;
    if ( v3 == a3 )
      break;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v8 + 17) )
    {
      v9 = *(v8 - 8);
      DWORD2(v10) = 0;
      *(_QWORD *)&v11 = 0LL;
      PnpLookupArbitersNewResources(a1, a2, *(v8 - 7), *((_BYTE *)v8 - 72), (__int64)&v11, (__int64)&v10 + 8);
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 8), 1LL);
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
