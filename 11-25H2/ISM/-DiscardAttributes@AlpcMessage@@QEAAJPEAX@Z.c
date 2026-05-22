/*
 * XREFs of ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x18010CBF0
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006E9B0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcMessage::DiscardAttributes(AlpcMessage *this, void *a2)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax

  if ( (*((_DWORD *)this + 93) & 0x40000000) == 0 )
    return 0LL;
  v3 = NtAlpcDeleteSectionView(a2, 0LL, *((_QWORD *)this + 49));
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 93) &= ~0x40000000u;
    return 0LL;
  }
  v4 = v3 | 0x10000000;
  result = 2147549183LL;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
