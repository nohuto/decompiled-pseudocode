/*
 * XREFs of ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1401E4408
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1400FEE08 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  const UNICODE_STRING *v9; // rbx
  unsigned int i; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 20104LL);
  if ( !v4 )
    return 0LL;
  v5 = (unsigned int)(v4 - 1);
  v6 = (unsigned int)v5;
  if ( v2 - (int)v5 < 8 )
    return 0LL;
  v7 = *(_QWORD *)&a1[v5];
  if ( v7 == 0x4800590053004DLL )
  {
    v9 = &String2;
  }
  else
  {
    if ( v7 != 0x53004D00490053LL )
      return 0LL;
    v9 = (const UNICODE_STRING *)&unk_14034CF88;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, &a1[v6 + 4]);
  for ( i = 0; i < 3; ++i )
  {
    if ( RtlEqualUnicodeString(&DestinationString, v9, 0) )
      return 1LL;
    ++v9;
  }
  return 0LL;
}
