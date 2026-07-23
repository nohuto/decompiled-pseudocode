/*
 * XREFs of ExpSecurePoolFromHandle @ 0x1404F37FC
 * Callers:
 *     ExFreePool2 @ 0x140652800 (ExFreePool2.c)
 *     ExSecurePoolUpdate @ 0x140656C70 (ExSecurePoolUpdate.c)
 *     ExSecurePoolValidate @ 0x140656CB0 (ExSecurePoolValidate.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 * Callees:
 *     ExpPoolContextHeaderFromHandle @ 0x1404F3824 (ExpPoolContextHeaderFromHandle.c)
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
