/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x140723D70
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A6B71C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PiIrpQueryRemoveDevice @ 0x140733E34 (PiIrpQueryRemoveDevice.c)
 *     PipClearDevNodeUserFlags @ 0x14098E9D4 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PipSetDevNodeUserFlags @ 0x140AC3794 (PipSetDevNodeUserFlags.c)
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
