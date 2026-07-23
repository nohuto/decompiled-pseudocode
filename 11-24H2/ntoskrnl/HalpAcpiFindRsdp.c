/*
 * XREFs of HalpAcpiFindRsdp @ 0x140C0F868
 * Callers:
 *     HalpAcpiTableCacheInit @ 0x140C699DC (HalpAcpiTableCacheInit.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     HalpAcpiAllocateMemory @ 0x14053A9C0 (HalpAcpiAllocateMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     strcmp @ 0x1406C1300 (strcmp.c)
 *     KeFindConfigurationNextEntry @ 0x140C2B410 (KeFindConfigurationNextEntry.c)
 */

__int64 __fastcall HalpAcpiFindRsdp(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 ConfigurationNextEntry; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // r14d
  void *Memory; // rax
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v2 = HalpAcpiMultiNode;
  v3 = 0;
  v14 = 0LL;
  if ( HalpAcpiMultiNode )
    goto LABEL_10;
  v6 = *(_QWORD *)(a1 + 176);
  v15 = 0LL;
  v7 = &v15;
  while ( 1 )
  {
    ConfigurationNextEntry = KeFindConfigurationNextEntry(v6, 3, 12, 0, (__int64)v7);
    v9 = ConfigurationNextEntry;
    if ( !ConfigurationNextEntry )
    {
      DbgPrint("**** HalpAcpiFindRsdp: Could not find RSDP\n");
      return (unsigned int)-1073741275;
    }
    if ( !strcmp(*(const char **)(ConfigurationNextEntry + 56), "ACPI BIOS") )
      break;
    v6 = *(_QWORD *)(a1 + 176);
    v7 = &v14;
    v14 = v9;
  }
  v10 = *(_QWORD *)(v9 + 64);
  v11 = 24 * *(_DWORD *)(v10 + 36) + 16;
  Memory = (void *)HalpAcpiAllocateMemory(a1, v11);
  HalpAcpiMultiNode = (__int64)Memory;
  v2 = (__int64)Memory;
  if ( Memory )
  {
    memmove(Memory, (const void *)(v10 + 28), v11);
LABEL_10:
    *a2 = v2;
    return v3;
  }
  return (unsigned int)-1073741670;
}
