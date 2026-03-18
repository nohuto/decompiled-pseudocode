/*
 * XREFs of IopRetestConfiguration @ 0x140721A0C
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x140722208 (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpLookupArbitersNewResources @ 0x140AADFA4 (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopRetestConfiguration(int a1, int a2, _QWORD **a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r9
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a3;
  v11 = 0LL;
  v12 = 0LL;
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
      DWORD2(v11) = 0;
      *(_QWORD *)&v12 = 0LL;
      *(_QWORD *)&v11 = v8 - 6;
      PnpLookupArbitersNewResources(a1, a2, *(v8 - 7), *((_BYTE *)v8 - 72), (__int64)&v12, (__int64)&v11 + 8);
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 8), 1LL, &v11, v10);
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
