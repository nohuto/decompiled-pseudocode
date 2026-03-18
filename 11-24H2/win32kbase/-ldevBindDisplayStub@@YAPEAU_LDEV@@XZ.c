/*
 * XREFs of ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x140101E28
 * Callers:
 *     ldevLoadDriver @ 0x140101130 (ldevLoadDriver.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z @ 0x140101744 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z.c)
 */

struct _LDEV *__fastcall ldevBindDisplayStub(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  struct tagDRVENABLEDATA v7; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  for ( i = *(_QWORD *)(v1 + 1728); i; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 40) & 8) != 0 )
    {
      ++*(_DWORD *)(i + 36);
      return (struct _LDEV *)i;
    }
  }
  v3 = PALLOCMEM(912LL, 0x76646C47u);
  i = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 40) |= 0xAu;
    *(_DWORD *)(v3 + 68) = 0;
    *(_QWORD *)(v3 + 904) = v3 + 72;
    *(_DWORD *)(v3 + 32) = 1;
    *(_DWORD *)(v3 + 36) = 1;
    v7.pdrvfn = (DRVFN *)&unk_14024C200;
    v7.iDriverVersion = 196864;
    v7.c = 16;
    if ( (unsigned int)ldevFillTable((struct _LDEV *)v3, &v7) )
    {
      v4 = *(_QWORD *)(v1 + 1728);
      if ( v4 )
        *(_QWORD *)(v4 + 8) = i;
      v5 = *(_QWORD *)(v1 + 1728);
      *(_QWORD *)(i + 8) = 0LL;
      *(_QWORD *)i = v5;
      *(_QWORD *)(v1 + 1728) = i;
    }
    else
    {
      GreDeleteFastMutex((char *)i);
      return 0LL;
    }
  }
  return (struct _LDEV *)i;
}
