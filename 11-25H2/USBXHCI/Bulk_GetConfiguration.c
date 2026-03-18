/*
 * XREFs of Bulk_GetConfiguration @ 0x14008212C
 * Callers:
 *     TR_Create @ 0x14008313C (TR_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x140034338 (Controller_IsSecureDevice.c)
 */

__int64 __fastcall Bulk_GetConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  char IsSecureDevice; // al
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rcx
  __int64 result; // rax

  *(_DWORD *)(a3 + 12) = 3;
  *(_QWORD *)(a3 + 32) = BulkFunctionTable;
  *(_DWORD *)(a3 + 20) = 512;
  *(_DWORD *)(a3 + 16) = 424;
  IsSecureDevice = Controller_IsSecureDevice(a1);
  *(_DWORD *)(v4 + 24) = IsSecureDevice == 0 ? v5 : 0;
  result = *(_QWORD *)(v6 + 736);
  if ( (result & 8) != 0 )
    *(_DWORD *)(v4 + 4) = 114688;
  return result;
}
