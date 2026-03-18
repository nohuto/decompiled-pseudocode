/*
 * XREFs of PopBcdCopyLoaderObjectSettings @ 0x1407632B4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     PopBcdReadElement @ 0x140A72168 (PopBcdReadElement.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdCopyLoaderObjectSettings(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  unsigned int v4; // edi
  unsigned int v6; // r14d
  int v7; // eax
  __int64 v8; // r8
  int v9; // ebx
  PVOID v10; // rcx
  _DWORD v12[4]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0;
  v2 = v12;
  P = 0LL;
  v4 = 0;
  v12[0] = 369098768;
  v12[1] = 369098825;
  while ( 1 )
  {
    v6 = *v2;
    v7 = PopBcdReadElement(a1, *v2, &P, &v13);
    v9 = v7;
    if ( v7 >= 0 )
    {
      v9 = BcdSetElementDataWithFlags(a2, v6, v8, P, v13);
      ExFreePoolWithTag(P, 0);
      v10 = 0LL;
      P = 0LL;
      if ( v9 < 0 )
        return (unsigned int)v9;
      goto LABEL_9;
    }
    if ( v7 != -1073741275 )
      break;
    v9 = BiDeleteElement(a2, v6);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741275 )
      break;
    v10 = P;
LABEL_9:
    ++v4;
    ++v2;
    if ( v4 >= 2 )
    {
      v9 = 0;
      goto LABEL_12;
    }
  }
  v10 = P;
LABEL_12:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v9;
}
