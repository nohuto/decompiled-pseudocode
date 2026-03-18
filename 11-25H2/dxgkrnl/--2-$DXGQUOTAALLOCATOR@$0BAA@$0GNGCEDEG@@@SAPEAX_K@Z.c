/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAPEAX_K@Z @ 0x140058398
 * Callers:
 *     ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x14005832C (-Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGQUOTAALLOCATOR<256,1835156294>::operator new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExAllocatePool2(257LL, 48LL, 1835156294LL, a4);
}
