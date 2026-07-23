/*
 * XREFs of IopStartNextPacketByKeyEx @ 0x14038B044
 * Callers:
 *     IoStartNextPacket @ 0x14038B000 (IoStartNextPacket.c)
 *     IoStartNextPacketByKey @ 0x140593BD0 (IoStartNextPacketByKey.c)
 * Callees:
 *     IopStartNextPacket @ 0x14038AE78 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x14038CA6C (IopStartNextPacketByKey.c)
 */

__int64 __fastcall IopStartNextPacketByKeyEx(__int64 a1, unsigned int a2, int a3)
{
  signed __int32 v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax

  do
  {
    v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL), 1u);
    v6 = *(_QWORD *)(a1 + 312);
    v7 = *(_DWORD *)(v6 + 64);
    if ( v5 + 1 > 1 )
    {
      *(_DWORD *)(v6 + 64) = a3 | v7;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = a2;
    }
    else
    {
      *(_DWORD *)(v6 + 64) = v7 & 0xFFFFFF1F;
      v8 = (unsigned __int8)a3 & 0x80;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = 0;
      if ( (a3 & 0x40) != 0 )
      {
        IopStartNextPacketByKey(a1, v8, a2);
      }
      else if ( (a3 & 0x20) != 0 )
      {
        IopStartNextPacket(a1, v8);
      }
    }
    result = (unsigned int)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL),
                             0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      break;
    result = *(_QWORD *)(a1 + 312);
    a2 = *(_DWORD *)(result + 60);
    a3 = *(_DWORD *)(result + 64) & 0xE0;
  }
  while ( (*(_BYTE *)(result + 64) & 0x60) != 0 );
  return result;
}
