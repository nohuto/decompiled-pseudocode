/*
 * XREFs of XilCommand_FreeResources @ 0x14003EA64
 * Callers:
 *     Command_PrepareHardware @ 0x140074580 (Command_PrepareHardware.c)
 *     Command_ReleaseHardware @ 0x140074720 (Command_ReleaseHardware.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1400034F4 (CommonBuffer_ReleaseBuffer.c)
 *     XilRegister_WriteUlong64 @ 0x14000C120 (XilRegister_WriteUlong64.c)
 *     XilCommand_FreeSecureResources @ 0x14003EAC8 (XilCommand_FreeSecureResources.c)
 */

void __fastcall XilCommand_FreeResources(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx

  v1 = a1 + 136;
  if ( *(_BYTE *)(a1 + 136) )
  {
    XilCommand_FreeSecureResources(a1 + 136);
  }
  else
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL);
    XilRegister_WriteUlong64(*(_QWORD *)(v2 + 88), *(_DWORD **)(a1 + 176), 0LL);
    v3 = *(_QWORD *)(v1 + 48);
    if ( v3 )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(v2 + 120), v3);
      *(_QWORD *)(v1 + 48) = 0LL;
    }
  }
}
