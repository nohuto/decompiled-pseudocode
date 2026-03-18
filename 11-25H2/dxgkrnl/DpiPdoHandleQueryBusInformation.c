/*
 * XREFs of DpiPdoHandleQueryBusInformation @ 0x14024E3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoHandleQueryBusInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 Pool2; // rax

  v5 = 0;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1953656900LL, a4);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 15LL;
    *(_QWORD *)(a2 + 56) = Pool2;
    *(GUID *)Pool2 = GUID_BUS_TYPE_DISPLAY;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
