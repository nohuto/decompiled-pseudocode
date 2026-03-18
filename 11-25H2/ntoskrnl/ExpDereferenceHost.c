/*
 * XREFs of ExpDereferenceHost @ 0x1407B1210
 * Callers:
 *     ExRegisterExtension @ 0x1407B0CA0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407B0F4C (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x1407B10F0 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
