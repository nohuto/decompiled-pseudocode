/*
 * XREFs of BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140804E4C
 * Callers:
 *     BiExportBcdObjects @ 0x1408056A4 (BiExportBcdObjects.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BiGetElement @ 0x140A256B8 (BiGetElement.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiAddBootEntryToEfiBootManagerDisplayOrder(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int Element; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rdx
  unsigned int i; // r8d
  __int64 v8; // rcx
  _OWORD *Pool2; // rax
  void *v10; // rbp
  void *v11; // rdx
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  void *Src; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  Src = 0LL;
  v14[0] = 0LL;
  v3 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, v14);
  if ( v3 < 0 )
    goto LABEL_18;
  Element = BiGetElement(v14[0], 603979777LL, &Src, &v15);
  v3 = Element;
  if ( Element == -1073741275 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  if ( Element >= 0 )
  {
    v5 = v15;
LABEL_6:
    v6 = Src;
    for ( i = 0; i < v5 >> 4; ++i )
    {
      v8 = *(_QWORD *)(a2 + 16) - *v6;
      if ( !v8 )
        v8 = *(_QWORD *)(a2 + 24) - v6[1];
      if ( !v8 )
      {
        v3 = 0;
        goto LABEL_16;
      }
      v6 += 2;
    }
    Pool2 = (_OWORD *)ExAllocatePool2(0x102uLL);
    v10 = Pool2;
    if ( Pool2 )
    {
      v11 = Src;
      *Pool2 = *(_OWORD *)(a2 + 16);
      memmove(Pool2 + 1, v11, v5);
      v3 = BcdSetElementDataWithFlags(v14[0], 603979777LL, v12, v10, v5 + 16);
      ExFreePoolWithTag(v10, 0x4B444342u);
    }
    else
    {
      v3 = -1073741801;
    }
  }
LABEL_16:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
LABEL_18:
  if ( v14[0] )
    BcdCloseObject(v14[0]);
  return (unsigned int)v3;
}
