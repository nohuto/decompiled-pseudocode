/*
 * XREFs of USBParseMIDIElement @ 0x1400383B0
 * Callers:
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAA4 (USBParseConvertMIDIJacksAndElements.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     BusApiBuildMIDIFunctionUnit @ 0x14003454C (BusApiBuildMIDIFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1400381B4 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  unsigned int v11; // ebx
  int v12; // r15d
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  int v15; // edx
  int UnitString; // esi
  int v17; // ebp
  int *Pool2; // rax
  __int64 v19; // r9
  int *v20; // r14
  unsigned int v21; // ecx
  __int64 v22; // rdx
  const WCHAR *v24; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+48h] [rbp-40h]

  v5 = a2;
  v6 = *a3;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  if ( (unsigned __int8)v6 < 5u
    || (v8 = a3[4], v9 = *a3, v6 < (unsigned __int64)(2 * v8 + 5))
    || (v10 = (unsigned __int64)&a3[2 * v8 + 5], a2 = v7 + *(unsigned __int16 *)(v7 + 2), v10 > a2) )
  {
    LODWORD(v24) = 53865905;
    goto LABEL_17;
  }
  v11 = 0;
  v24 = 0LL;
  v12 = 0;
  if ( v6 < (unsigned __int64)(2 * v8 + 9)
    || (v13 = *(unsigned __int8 *)(v10 + 3), v14 = v13 + 2 * (v8 + 5), v9 < v14)
    || (unsigned __int64)&a3[v14] > a2 )
  {
    LODWORD(v24) = 53864217;
LABEL_17:
    HIDWORD(v24) = 1;
    v25 = -1073741438;
    RtlLogUnexpectedCodepath(&v24, a2);
    return 3221225858LL;
  }
  v15 = *(unsigned __int8 *)(v10 + 3);
  if ( (_BYTE)v13 )
  {
    do
    {
      v12 = *(unsigned __int8 *)((unsigned int)(v15 * v13 - 1) + v10 + 4) | (v12 << 8);
      --v15;
    }
    while ( v15 );
  }
  UnitString = USBParseGetUnitString(a1, a3, &v24);
  if ( UnitString >= 0 )
  {
    UnitString = -1073741670;
    v17 = *(unsigned __int8 *)(v5 + 2) << 8;
    Pool2 = (int *)ExAllocatePool2(256LL, 4LL * a3[4], 1096972357LL);
    v20 = Pool2;
    if ( Pool2 )
    {
      LOBYTE(v21) = a3[4];
      if ( (_BYTE)v21 )
      {
        do
        {
          v22 = v11++;
          Pool2[v22] = v17 | a3[2 * v22 + 5];
          v21 = a3[4];
        }
        while ( v11 < v21 );
      }
      UnitString = BusApiBuildMIDIFunctionUnit(
                     a1,
                     v17 | (unsigned int)a3[3],
                     (unsigned __int8)v21,
                     v19,
                     (unsigned __int8)v21,
                     Pool2,
                     v24,
                     v12);
      ExFreePool(v20);
    }
  }
  return (unsigned int)UnitString;
}
