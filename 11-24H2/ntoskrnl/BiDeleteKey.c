/*
 * XREFs of BiDeleteKey @ 0x1409BFC74
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     BcdDeleteObject @ 0x1409C2520 (BcdDeleteObject.c)
 * Callees:
 *     CmSiCloseSection @ 0x14049E2AC (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1404A6FD0 (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x1404C0234 (BiZwDeleteKey.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x1409BFD40 (BiEnumerateSubKeys.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  const WCHAR **v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF
  void *v9; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v9 = 0LL;
  v1 = BiSanitizeHandle(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, &v7) >= 0 && v7 )
  {
    v5 = (const WCHAR **)P;
    v6 = v7;
    do
    {
      if ( (int)BiOpenKey((__int64)v2, *v5, 0xF003Fu, &v9) >= 0 && (int)BiDeleteKey(v9) < 0 )
        BiCloseKey(v9);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = BiZwDeleteKey(v2);
  if ( v3 >= 0 )
    CmSiCloseSection(v2);
  return (unsigned int)v3;
}
