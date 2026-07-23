/*
 * XREFs of PopBcdCopyLoaderObjectSettings @ 0x140762C84
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140762D7C (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     PopBcdReadElement @ 0x140A6B548 (PopBcdReadElement.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
