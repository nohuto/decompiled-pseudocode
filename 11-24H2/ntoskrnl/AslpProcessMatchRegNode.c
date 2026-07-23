/*
 * XREFs of AslpProcessMatchRegNode @ 0x14080BDB8
 * Callers:
 *     AslRegWildcardFindNext @ 0x14080B660 (AslRegWildcardFindNext.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     AslRegistryEnumKey @ 0x140809160 (AslRegistryEnumKey.c)
 *     AslRegistryGetKey @ 0x140809214 (AslRegistryGetKey.c)
 *     AslRegistryOpenSubKey @ 0x140809690 (AslRegistryOpenSubKey.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslpProcessMatchRegNode(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  __int64 v5; // rcx
  int Key; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  wchar_t *Buffer; // r14
  void *v13; // rbp
  __int16 *v14; // rax
  __int16 v15; // bx
  int v16; // eax
  __int64 v17; // rax
  const WCHAR *v18; // rdx
  void *v19; // rcx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-18h] BYREF

  Destination = 0LL;
  if ( *(_QWORD *)(a1 + 8) == a2 )
  {
    v3 = (_QWORD *)(a1 + 32);
    v4 = *(void **)(a1 + 32);
    if ( v4 )
    {
      ZwClose(v4);
      *v3 = 0LL;
      Key = -2147483622;
    }
    else
    {
      Key = AslRegistryGetKey(v3, *(const WCHAR **)(a1 + 24), 0x20019u, 1);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    Destination.MaximumLength = 2 * (v8 + 261);
    v9 = (wchar_t *)AslAlloc(261LL, Destination.MaximumLength);
    v11 = *(_QWORD *)(a1 + 8);
    Buffer = v9;
    Destination.Buffer = v9;
    v13 = *(void **)(v11 + 32);
    while ( 1 )
    {
      *Buffer = 0;
      Key = AslRegistryEnumKey(Buffer, v10, v13, *(_DWORD *)(a1 + 40));
      if ( Key < 0 )
        break;
      v14 = *(__int16 **)(a1 + 24);
      ++*(_DWORD *)(a1 + 40);
      v15 = *v14;
      *v14 = 0;
      v16 = AslStringPatternMatchExW(*(_QWORD *)(a1 + 16), Buffer);
      **(_WORD **)(a1 + 24) = v15;
      if ( v16 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( Buffer[v17] );
        v18 = *(const WCHAR **)(a1 + 24);
        Destination.Length = 2 * v17;
        RtlAppendUnicodeToString(&Destination, v18);
        v19 = *(void **)(a1 + 32);
        if ( v19 )
        {
          ZwClose(v19);
          *(_QWORD *)(a1 + 32) = 0LL;
        }
        Buffer = Destination.Buffer;
        Key = AslRegistryOpenSubKey((PHANDLE)(a1 + 32), v13, Destination.Buffer);
        if ( Key >= 0 )
          goto LABEL_18;
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
LABEL_18:
  AslFree(v5);
  return (unsigned int)Key;
}
