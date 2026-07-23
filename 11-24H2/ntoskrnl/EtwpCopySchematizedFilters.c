/*
 * XREFs of EtwpCopySchematizedFilters @ 0x14083A308
 * Callers:
 *     EtwpBuildNotificationPacket @ 0x1408321B8 (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x1408376F0 (EtwpCalculateUpdateNotification.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140837F48 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall EtwpCopySchematizedFilters(char *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 result; // rax
  char *v4; // r9
  int v5; // r12d
  unsigned int v6; // ebx
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 v11; // rbp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v5 = a3;
  v6 = 0;
  v7 = (_DWORD *)(a2 + 128);
  v8 = 0LL;
  do
  {
    if ( *v7 )
    {
      result = *(_QWORD *)(a2 + 640);
      v11 = *(_QWORD *)(result + v8 + 88);
      if ( v11 )
      {
        if ( _bittest(&v5, (unsigned __int8)v6) )
        {
          memmove(a1, *(const void **)(result + v8 + 88), *(unsigned int *)(v11 + 16));
          v4 = a1;
          result = (*(_DWORD *)(v11 + 16) + 7) & 0xFFFFFFF8;
          *((_DWORD *)a1 + 5) = result;
          a1 += result;
        }
      }
    }
    ++v6;
    v7 += 8;
    v8 += 104LL;
  }
  while ( v6 < 0x10 );
  if ( v4 )
    *((_DWORD *)v4 + 5) = 0;
  return result;
}
