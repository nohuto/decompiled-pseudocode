/*
 * XREFs of Register_SetClearSSICPortUnused @ 0x14001CA30
 * Callers:
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_SetClearSSICPortUnused(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned int *v5; // rbx
  int Ulong; // eax
  int v7; // eax
  unsigned int v8; // r8d
  int v9; // eax
  int v10; // eax

  result = *(_QWORD *)(a1 + 8);
  if ( _bittest64((const signed __int64 *)(result + 736), 0x39u) )
  {
    v5 = (unsigned int *)(*(_QWORD *)(a1 + 24) + 34876LL);
    Ulong = XilRegister_ReadUlong(a1, v5);
    XilRegister_WriteUlong(a1, v5, Ulong & 0xBFFFFFFF);
    v7 = XilRegister_ReadUlong(a1, v5);
    v8 = v7 | 0x80000000;
    v9 = v7 & 0x7FFFFFFF;
    if ( !a2 )
      v8 = v9;
    XilRegister_WriteUlong(a1, v5, v8);
    v10 = XilRegister_ReadUlong(a1, v5);
    return XilRegister_WriteUlong(a1, v5, v10 | 0x40000000u);
  }
  return result;
}
