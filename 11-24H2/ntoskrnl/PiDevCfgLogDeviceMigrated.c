/*
 * XREFs of PiDevCfgLogDeviceMigrated @ 0x1406F6C00
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     McTemplateK0zzjzitd_EtwWriteTransfer @ 0x1404ACFF8 (McTemplateK0zzjzitd_EtwWriteTransfer.c)
 */

char __fastcall PiDevCfgLogDeviceMigrated(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  const wchar_t *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax

  result = byte_140EEFF62;
  if ( (byte_140EEFF62 & 0x10) != 0 && (byte_140EEFF62 & 0x40) != 0 && (byte_140EEFF62 & 0x20) != 0 )
  {
    v6 = (const wchar_t *)&dword_140B45A74;
    v7 = a2 + 80;
    if ( a3 < 0 )
    {
      v8 = *(_QWORD *)(a2 + 152);
      if ( (*(_DWORD *)(a2 + 16) & 3) != 0 )
      {
        if ( v8 )
          v6 = *(const wchar_t **)(a2 + 152);
        return McTemplateK0zzjzitd_EtwWriteTransfer(
                 v7,
                 (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceMigrate_Warning,
                 (__int64)v6,
                 *(const wchar_t **)(a1 + 8),
                 *(const wchar_t **)(a2 + 32),
                 v7,
                 v6,
                 *(_QWORD *)(a2 + 184),
                 *(_DWORD *)(a2 + 176),
                 a3);
      }
      else
      {
        if ( v8 )
          v6 = *(const wchar_t **)(a2 + 152);
        return McTemplateK0zzjzitd_EtwWriteTransfer(
                 v7,
                 (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceMigrate_Failure,
                 (__int64)v6,
                 *(const wchar_t **)(a1 + 8),
                 *(const wchar_t **)(a2 + 32),
                 v7,
                 v6,
                 *(_QWORD *)(a2 + 184),
                 *(_DWORD *)(a2 + 176),
                 a3);
      }
    }
    else
    {
      if ( *(_QWORD *)(a2 + 152) )
        v6 = *(const wchar_t **)(a2 + 152);
      return McTemplateK0zzjzitd_EtwWriteTransfer(
               v7,
               (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceMigrate_Success,
               (__int64)v6,
               *(const wchar_t **)(a1 + 8),
               *(const wchar_t **)(a2 + 32),
               v7,
               v6,
               *(_QWORD *)(a2 + 184),
               *(_DWORD *)(a2 + 176),
               a3);
    }
  }
  return result;
}
