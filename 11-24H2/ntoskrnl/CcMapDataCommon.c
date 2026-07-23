/*
 * XREFs of CcMapDataCommon @ 0x1409781B0
 * Callers:
 *     CcMapDataForOverwrite @ 0x140451570 (CcMapDataForOverwrite.c)
 * Callees:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 */

char __fastcall CcMapDataCommon(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, _QWORD *a5, __int64 *a6)
{
  __int64 v7; // rcx
  __int64 VirtualAddress; // rax
  char result; // al
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v10[0] = 0LL;
  v11 = 0LL;
  __incgsdword(4 * (a4 & 1) + 35148);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( (a4 & 1) != 0 )
  {
    VirtualAddress = CcGetVirtualAddress(v7, *a2, &v11, &v12, (a4 >> 6) & 1, 0);
    *a6 = VirtualAddress;
LABEL_3:
    *a5 = v11;
    return 1;
  }
  result = CcPinFileData(a1, a2, a3, 1, 0, a4, &v11, a6, v10);
  if ( result )
    goto LABEL_3;
  __incgsdword(0x898Cu);
  return result;
}
