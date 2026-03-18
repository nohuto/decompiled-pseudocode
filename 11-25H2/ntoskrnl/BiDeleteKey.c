/*
 * XREFs of BiDeleteKey @ 0x140A27140
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140A24A18 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 * Callees:
 *     CmSiCloseSection @ 0x14049F444 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1404A6620 (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x1404C1BD4 (BiZwDeleteKey.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x140A2720C (BiEnumerateSubKeys.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
