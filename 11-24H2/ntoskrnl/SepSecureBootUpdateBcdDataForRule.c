/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x140794164
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140793E34 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14079430C (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementData @ 0x1409BF8B0 (BcdGetElementData.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, __int64 a2, _BYTE *a3)
{
  _WORD *v3; // rdi
  int v7; // ebp
  void *v8; // rsi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 *v12; // r13
  int ElementData; // eax
  __int64 v14; // r8
  __int64 Pool2; // rax
  _WORD *v16; // r9
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v3 = (_WORD *)(qword_140E67B30 + *(unsigned int *)(a1 + 8));
  v19 = 0LL;
  *a3 = 0;
  v7 = 8;
  v8 = 0LL;
  v9 = 0;
  if ( (*(_BYTE *)v3 & 0x1F) != 8 )
  {
    v11 = *(unsigned int *)(a1 + 4);
    v18 = 8;
    v12 = &v19;
    ElementData = BcdGetElementData(a2, v11, &v19, &v18);
    v9 = ElementData;
    if ( ElementData == -1073741789 || ElementData == -2147483643 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v8 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v12 = (__int64 *)Pool2;
      v9 = BcdGetElementData(a2, *(unsigned int *)(a1 + 4), Pool2, &v18);
      if ( v9 < 0 )
      {
LABEL_28:
        ExFreePoolWithTag(v8, 0x62536553u);
        return (unsigned int)v9;
      }
    }
    if ( v9 < 0 || (v9 = SepSecureBootValidateBcdDataAgainstBcdRule(a1, v12, v18), v9 < 0) )
    {
      if ( (*v3 & 0x1F) != 0 )
      {
        if ( (*v3 & 0x1F) == 1 )
        {
          v16 = v3 + 1;
          v7 = 1;
        }
        else
        {
          if ( (*v3 & 0x1F) != 5 && (*v3 & 0x1F) != 6 && (*v3 & 0x1F) != 7 )
          {
            if ( (*v3 & 0x1F) == 8 )
              v9 = -1073741275;
            else
              v9 = -1069350909;
            goto LABEL_27;
          }
          v16 = v3 + 1;
        }
      }
      else
      {
        v7 = (unsigned __int16)v3[1];
        v16 = v3 + 2;
      }
      v9 = BcdSetElementDataWithFlags(a2, *(unsigned int *)(a1 + 4), v14, v16, v7);
      if ( v9 >= 0 )
        *a3 = 1;
    }
LABEL_27:
    if ( !v8 )
      return (unsigned int)v9;
    goto LABEL_28;
  }
  if ( !v3[1] )
  {
    v10 = BiDeleteElement(a2, *(unsigned int *)(a1 + 4));
    v9 = v10;
    if ( v10 == -1073741275 )
    {
      return 0;
    }
    else if ( v10 >= 0 )
    {
      *a3 = 1;
    }
  }
  return (unsigned int)v9;
}
