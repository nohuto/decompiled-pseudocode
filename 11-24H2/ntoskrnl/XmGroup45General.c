/*
 * XREFs of XmGroup45General @ 0x140460FD0
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x140461774 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x140461A10 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x140461A3C (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x140461CF8 (XmSetSourceValue.c)
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 *     XmGetOffsetAddress @ 0x140574D24 (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmGroup45General(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  __int64 OffsetAddress; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  XmSetDataType();
  result = XmEvaluateAddressSpecifier(a1, &v8);
  v3 = result;
  if ( result )
  {
    v4 = v8;
    if ( *(_BYTE *)(a1 + 81) == 18 )
    {
      v4 = v8 & 1;
      v8 = v4;
    }
    *(_DWORD *)(a1 + 124) += v4;
    if ( *(_DWORD *)(a1 + 124) == 36 )
    {
      XmSetSourceValue(a1, v3);
    }
    else
    {
      XmSetDestinationValue(a1, v3);
      if ( ((v8 - 3) & 0xFFFFFFFD) == 0 )
      {
        if ( *(_BYTE *)(a1 + 142) )
          longjmp((_JBTYPE *)(a1 + 160), 11);
        v5 = *(_DWORD *)(a1 + 120);
        v6 = *(_DWORD *)(a1 + 128) + 1;
        *(_DWORD *)(a1 + 120) = 1;
        OffsetAddress = XmGetOffsetAddress(a1, (unsigned int)(v5 + v6));
        XmSetSourceValue(a1, OffsetAddress);
        *(_WORD *)(a1 + 82) = *(_WORD *)(a1 + 108);
        *(_DWORD *)(a1 + 120) = v5;
      }
    }
    return 1LL;
  }
  return result;
}
