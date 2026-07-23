/*
 * XREFs of PopBcdCopyLoaderObjectSettings @ 0x1407537F4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1407538EC (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     PopBcdReadElement @ 0x140A25794 (PopBcdReadElement.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdCopyLoaderObjectSettings(HANDLE BcdObjectHandle, HANDLE a2)
{
  ULONG *v2; // rsi
  unsigned int v4; // edi
  ULONG v6; // r14d
  int Element; // eax
  BCD_FLAGS v8; // r8d
  unsigned int v9; // ebx
  _DWORD v11[4]; // [rsp+30h] [rbp-10h] BYREF

  v2 = v11;
  v4 = 0;
  v11[0] = 369098768;
  v11[1] = 369098825;
  do
  {
    v6 = *v2;
    Element = PopBcdReadElement(BcdObjectHandle, *v2);
    v9 = Element;
    if ( Element < 0 )
    {
      if ( Element != -1073741275 )
        return v9;
      v9 = BiDeleteElement(a2, v6);
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741275 )
        return v9;
    }
    else
    {
      v9 = BcdSetElementDataWithFlags(a2, v6, v8, 0LL, 0);
      ExFreePoolWithTag(0LL, 0);
      if ( (v9 & 0x80000000) != 0 )
        return v9;
    }
    ++v4;
    ++v2;
  }
  while ( v4 < 2 );
  return 0;
}
