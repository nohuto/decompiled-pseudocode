/*
 * XREFs of ExInitializeNls @ 0x140AC1714
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772C80 (PspInitializeServerSiloDeferred.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1406A7990 (ZwCreateDirectoryObject.c)
 *     RtlpInitCodePageTables @ 0x14077EA64 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x14077EC0C (RtlpInitUppercaseTables.c)
 *     RtlpQueryNlsSystemCodePages @ 0x14077ECAC (RtlpQueryNlsSystemCodePages.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS ExInitializeNls()
{
  unsigned __int16 v0; // bx
  NTSTATUS result; // eax
  _QWORD *Pool2; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v4; // rdx
  unsigned __int16 v5; // dx
  ULONG Value; // [rsp+30h] [rbp+8h] BYREF
  ULONG v7; // [rsp+38h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v0 = -535;
  Value = 65001;
  v7 = 65001;
  result = ZwCreateDirectoryObject(&Handle, 0xF000Fu, (POBJECT_ATTRIBUTES)&NlsDirectoryAttributes);
  if ( result >= 0 )
  {
    ZwClose(Handle);
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentServerSiloGlobals[64].Flink = v4;
      if ( (int)RtlpQueryNlsSystemCodePages(&Value, &v7) >= 0 )
      {
        v0 = Value;
        v5 = v7;
      }
      else
      {
        v5 = -535;
      }
      RtlpInitCodePageTables(v0, v5);
      RtlpInitUppercaseTables();
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
