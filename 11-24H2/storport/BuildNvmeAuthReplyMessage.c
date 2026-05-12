/*
 * XREFs of BuildNvmeAuthReplyMessage @ 0x140118FDC
 * Callers:
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400F86D8 (NvmeFabricControllerQueueSendAuthReply.c)
 * Callees:
 *     DhGetKeyLength @ 0x1400DD608 (DhGetKeyLength.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall BuildNvmeAuthReplyMessage(__int64 a1, __int64 a2, const void *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  char v8; // dl
  unsigned __int8 v9; // dl
  __int64 v10; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 96);
  memset_0((void *)(v4 + 1577), 0, 0xFFFuLL);
  *(_WORD *)(v4 + 1576) = 513;
  *(_WORD *)(v4 + 1580) = **(_WORD **)(a1 + 96);
  v8 = 0;
  switch ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 3LL) )
  {
    case 1:
      v8 = 32;
      break;
    case 2:
      v8 = 48;
      break;
    case 3:
      v8 = 64;
      break;
  }
  *(_BYTE *)(v4 + 1582) = v8;
  *(_BYTE *)(v4 + 1584) = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 5LL) & 1;
  *(_WORD *)(v4 + 1586) = DhGetKeyLength(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
  *(_DWORD *)(v4 + 1588) = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 12LL);
  memmove((void *)(v4 + 1592), a3, v9);
  memmove(
    (void *)(*(unsigned __int8 *)(v4 + 1582) + v4 + 1592),
    (const void *)(*(_QWORD *)(a1 + 96) + 1320LL),
    *(unsigned __int8 *)(v4 + 1582));
  v10 = *(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(v10 + 4) )
    memmove(
      (void *)(v4 + 1592 + 2LL * *(unsigned __int8 *)(v4 + 1582)),
      (const void *)(*(_QWORD *)(v10 + 32) + 8LL + 2LL * *(unsigned __int16 *)(v4 + 1586)),
      *(unsigned __int16 *)(v4 + 1586));
  result = *(unsigned __int16 *)(v4 + 1586);
  *a4 = result + 2 * (*(unsigned __int8 *)(v4 + 1582) + 8);
  return result;
}
