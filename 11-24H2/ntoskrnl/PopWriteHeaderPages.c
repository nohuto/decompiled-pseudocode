/*
 * XREFs of PopWriteHeaderPages @ 0x140B60744
 * Callers:
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     tcpxsum @ 0x1406B44D0 (tcpxsum.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteHeaderPages(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  unsigned int *v3; // r15
  void *v4; // rbp
  size_t v7; // r8
  size_t v8; // rbx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  size_t v13; // r8
  int v14; // eax
  int v15; // edx
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // edx
  unsigned int v19; // ebx

  v2 = (_DWORD *)(a1 + 200);
  v3 = (unsigned int *)(a1 + 168);
  v4 = *(void **)(a1 + 160);
  a2[281] ^= ((unsigned __int8)a2[281] ^ (unsigned __int8)(16 * PopHiberResumeXhciHandoffSkip)) & 0x10;
  if ( *(_QWORD *)(a1 + 272) )
  {
    v7 = (unsigned __int64)*v3 << 12;
    *v2 = 1;
    memset_0(v4, 0, v7);
    v8 = (unsigned int)(*(_DWORD *)(a1 + 280) << 12);
    memmove(v4, *(const void **)(a1 + 272), v8);
    a2[279] = tcpxsum(0, (const char *)v4, v8);
    v9 = *(_DWORD *)(a1 + 280);
    a2[280] = v9;
    PopWriteHiberPages(a1, v4, v9, 2LL);
    v10 = tcpxsum(0, (const char *)v4, v8);
    v11 = a2[279];
    v12 = v10;
    if ( v11 != v10 )
    {
      DbgPrint("Checksum for resume context page changed from %lx to %lx\n", v11, v10);
      KeBugCheckEx(0xA0u, 3uLL, (unsigned int)a2[279], v12, 0x22C8uLL);
    }
  }
  v13 = (unsigned __int64)*v3 << 12;
  *v2 = 2;
  memset_0(v4, 0, v13);
  memmove(v4, *(const void **)(a1 + 192), 0x5C0uLL);
  a2[20] = tcpxsum(0, (const char *)v4, 0x5C0u);
  PopWriteHiberPages(a1, v4, 1LL, 1LL);
  v14 = tcpxsum(0, (const char *)v4, 0x5C0u);
  v15 = a2[20];
  v16 = v14;
  if ( v15 != v14 )
  {
    DbgPrint("Checksum for context page changed from %lx to %lx\n", v15, v14);
    KeBugCheckEx(0xA0u, 3uLL, (unsigned int)a2[20], v16, 0x22DEuLL);
  }
  v17 = tcpxsum(0, (const char *)v4, 0x1000u);
  v18 = a2[20];
  v19 = v17;
  if ( v18 != v17 )
  {
    DbgPrint("Checksum for partial context page %lx doesn't match full %lx\n", v18, v17);
    KeBugCheckEx(0xA0u, 4uLL, (unsigned int)a2[20], v19, 0x22E5uLL);
  }
  return 0LL;
}
