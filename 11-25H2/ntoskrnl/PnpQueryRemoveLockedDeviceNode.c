/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x140717C70
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A68CA8 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PiIrpQueryRemoveDevice @ 0x140727B9C (PiIrpQueryRemoveDevice.c)
 *     PipClearDevNodeUserFlags @ 0x14082F904 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, _DWORD *a2, UNICODE_STRING *a3)
{
  struct _DEVICE_OBJECT *v6; // rbp
  int v7; // esi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x305:
    case 0x306:
    case 0x308:
    case 0x309:
    case 0x30A:
      PipSetDevNodeUserFlags(a1, 512LL);
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v7 = PiIrpQueryRemoveDevice(v6);
      if ( v7 < 0 )
      {
        IopRemoveDevice(v6);
        *a2 = 6;
        RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(a1 + 40));
      }
      else
      {
        PipSetDevNodeState(a1, 786);
      }
      PipClearDevNodeUserFlags(a1, 512LL);
      result = (unsigned int)v7;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
