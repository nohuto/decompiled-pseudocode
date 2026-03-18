/*
 * XREFs of CcUnpinData @ 0x1409A6A30
 * Callers:
 *     CcUnpinDataForThread @ 0x140706D10 (CcUnpinDataForThread.c)
 *     CcUnpinData @ 0x1409A6A30 (CcUnpinData.c)
 *     CcPinMappedData @ 0x1409B7760 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x140A3EE70 (CcPreparePinWrite.c)
 *     CcPinRead @ 0x140AC3180 (CcPinRead.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     CcUnpinData @ 0x1409A6A30 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  PVOID v1; // rbx
  char v2; // dl
  void *v3; // rax
  char *i; // rdi

  v1 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    CcUnpinFileDataEx((char *)Bcb, v2, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v2 = 0;
    goto LABEL_3;
  }
  v3 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v3; i += 8 )
  {
    CcUnpinData(v3);
    v3 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v1, 0);
}
