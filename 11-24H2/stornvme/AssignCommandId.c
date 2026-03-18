/*
 * XREFs of AssignCommandId @ 0x14000B2A0
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x14000AD90 (ProcessCommandInSpecificQueue.c)
 *     ProcessMultipleCommandsInSpecificQueue @ 0x14002CE94 (ProcessMultipleCommandsInSpecificQueue.c)
 * Callees:
 *     Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline @ 0x1400176D8 (Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall AssignCommandId(__int64 a1, unsigned __int16 a2, _WORD *a3, unsigned __int16 *a4)
{
  unsigned __int16 v7; // bx
  _WORD *v8; // rdi
  unsigned __int16 v9; // bp
  unsigned __int16 *v10; // r14
  _QWORD *v11; // r15
  _WORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r10d
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // cx
  __int16 v20; // bx
  unsigned __int16 v21; // ax
  bool v22; // zf

  if ( a2 )
  {
    v7 = *(_WORD *)(a1 + 326);
    v9 = *(_WORD *)(a1 + 328);
    v13 = 208LL * a2;
    v14 = *(_QWORD *)(a1 + 936);
    v8 = (_WORD *)(v13 + v14 - 156);
    v10 = (unsigned __int16 *)(v13 + v14 - 152);
    v11 = (_QWORD *)(v13 + v14 - 176);
    v12 = (_WORD *)(v13 + v14 - 154);
  }
  else
  {
    v7 = *(_WORD *)(a1 + 324);
    v8 = (_WORD *)(a1 + 388);
    v9 = v7;
    v10 = (unsigned __int16 *)(a1 + 392);
    v11 = (_QWORD *)(a1 + 368);
    v12 = (_WORD *)(a1 + 390);
  }
  Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline();
  v15 = (unsigned __int16)*v8;
  if ( (unsigned __int16)*v12 == v15 + 1 || !*v12 && v15 == v7 - 1 )
    return 0;
  *v8 = v15 + 1;
  if ( (_WORD)v15 + 1 == v7 )
    *v8 = 0;
  v16 = *v10;
  if ( *v10 < v9 )
  {
    while ( 1 )
    {
      v17 = v16 + 1;
      if ( !*(_QWORD *)(32LL * v16 + *v11 + 16) )
        break;
      ++v16;
      if ( v17 >= v9 )
        goto LABEL_12;
    }
    v21 = v16;
    v22 = v17 == v9;
    *v10 = v17;
    goto LABEL_19;
  }
LABEL_12:
  v18 = 0;
  if ( !*v10 )
  {
LABEL_15:
    if ( *v8 )
      v20 = *v8 - 1;
    else
      v20 = v7 - 1;
    *v8 = v20;
    return 0;
  }
  while ( 1 )
  {
    v19 = v18 + 1;
    if ( !*(_QWORD *)(32LL * v18 + *v11 + 16) )
      break;
    ++v18;
    if ( v19 >= *v10 )
      goto LABEL_15;
  }
  v21 = v18;
  v22 = v19 == v9;
  *v10 = v19;
LABEL_19:
  if ( v22 )
    *v10 = 0;
  *a3 = v15;
  *a4 = v21;
  return 1;
}
