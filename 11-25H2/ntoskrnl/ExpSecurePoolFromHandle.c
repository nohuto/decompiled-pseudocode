/*
 * XREFs of ExpSecurePoolFromHandle @ 0x1404F5968
 * Callers:
 *     ExFreePool2 @ 0x1406481E0 (ExFreePool2.c)
 *     ExSecurePoolUpdate @ 0x14064C610 (ExSecurePoolUpdate.c)
 *     ExSecurePoolValidate @ 0x14064C670 (ExSecurePoolValidate.c)
 *     ExAllocatePool3 @ 0x140B64430 (ExAllocatePool3.c)
 * Callees:
 *     ExpPoolContextHeaderFromHandle @ 0x1404F5990 (ExpPoolContextHeaderFromHandle.c)
 */

__int64 __fastcall ExpSecurePoolFromHandle(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = ExpPoolContextHeaderFromHandle(a1, 0LL);
  if ( v1 && *(_DWORD *)(v1 + 4) == 2 )
    return v1;
  return v2;
}
