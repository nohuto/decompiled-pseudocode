/*
 * XREFs of XmPopaOp @ 0x1405738F0
 * Callers:
 *     <none>
 * Callees:
 *     XmPopOp @ 0x140460AB0 (XmPopOp.c)
 *     XmSetDestinationValue @ 0x140461A3C (XmSetDestinationValue.c)
 */

__int64 __fastcall XmPopaOp(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int16 *v3; // rdx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 8;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v5 = *(_DWORD *)(a1 + 40);
  do
  {
    if ( --v2 == 4 )
      v3 = (unsigned __int16 *)&v5;
    else
      v3 = (unsigned __int16 *)(a1 + 4 * (v2 + 6LL));
    XmSetDestinationValue(a1, v3);
    result = XmPopOp(a1);
  }
  while ( v2 );
  return result;
}
