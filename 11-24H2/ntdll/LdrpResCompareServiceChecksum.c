/*
 * XREFs of LdrpResCompareServiceChecksum @ 0x18007951C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180079BD0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x1800795B0 (LdrResGetRCConfig.c)
 */

bool __fastcall LdrpResCompareServiceChecksum(int a1, int a2, int a3, int a4)
{
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  if ( (int)LdrResGetRCConfig(a1, a2, (unsigned int)&v9, 4096, 1) < 0
    || (int)LdrResGetRCConfig(a3, a4, (unsigned int)&v8, 4096, 0) < 0 )
  {
    return 0;
  }
  v6 = *(_QWORD *)(v9 + 28) - *(_QWORD *)(v8 + 28);
  if ( !v6 )
    v6 = *(_QWORD *)(v9 + 36) - *(_QWORD *)(v8 + 36);
  return v6 == 0;
}
