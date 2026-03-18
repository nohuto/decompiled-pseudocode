/*
 * XREFs of Register_D0Entry @ 0x14002FB34
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_D0Entry(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rbp
  unsigned int *v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int Ulong; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  unsigned int *v17; // rbx
  int v18; // eax
  unsigned int *v19; // rbx
  int v20; // eax

  v1 = a1 + 8;
  v3 = a1 + 24;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 752LL) & 2) != 0 )
  {
    v11 = *(_QWORD *)v3;
    Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)v3 + 32912LL));
    XilRegister_WriteUlong(a1, (_DWORD *)(v11 + 32912), Ulong & 0xFFFFEFFF);
    v4 = a1 + 8;
  }
  else
  {
    v4 = a1 + 8;
  }
  v5 = v1;
  if ( (*(_BYTE *)(*(_QWORD *)v1 + 752LL) & 1) != 0 )
  {
    v13 = *(_QWORD *)v3;
    v14 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)v3 + 32988LL));
    XilRegister_WriteUlong(a1, (_DWORD *)(v13 + 32988), v14 & 0xFFFFFF7D);
    v5 = v4;
  }
  v6 = v3;
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)v1 + 736LL), 0x2Eu) )
  {
    v15 = *(_QWORD *)v3;
    v16 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)v3 + 32916LL));
    XilRegister_WriteUlong(a1, (_DWORD *)(v15 + 32916), v16 | 0x200000);
    v1 = v5;
    v6 = a1 + 24;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v1 + 752LL) & 4) != 0 )
  {
    v17 = (unsigned int *)(*(_QWORD *)v3 + 16500LL);
    v18 = XilRegister_ReadUlong(a1, v17);
    XilRegister_WriteUlong(a1, v17, v18 | 0x8000);
    v3 = v6;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v1 + 752LL) & 8) != 0 )
  {
    v19 = (unsigned int *)(*(_QWORD *)v3 + 16500LL);
    v20 = XilRegister_ReadUlong(a1, v19);
    XilRegister_WriteUlong(a1, v19, v20 & 0xFF7FFFFF);
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)v1 + 736LL), 0x38u) )
  {
    v8 = (unsigned int *)(*(_QWORD *)v3 + 32932LL);
    v9 = XilRegister_ReadUlong(a1, v8);
    XilRegister_WriteUlong(a1, v8, v9 | 0x10000000);
    KeStallExecutionProcessor(0x32u);
    v10 = XilRegister_ReadUlong(a1, v8);
    XilRegister_WriteUlong(a1, v8, v10 & 0xEFFFFFFF);
  }
  return 0LL;
}
