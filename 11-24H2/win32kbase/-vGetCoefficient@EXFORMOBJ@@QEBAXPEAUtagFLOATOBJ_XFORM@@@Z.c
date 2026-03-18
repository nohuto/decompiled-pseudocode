/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEBAXPEAUtagFLOATOBJ_XFORM@@@Z @ 0x140125760
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EXFORMOBJ::vGetCoefficient(EXFORMOBJ *this, struct tagFLOATOBJ_XFORM *a2)
{
  int v4; // r8d
  _OWORD *v5; // rcx
  int v6; // eax
  __int128 v7; // xmm3
  __int128 v8; // xmm3
  FLOATOBJ v9; // xmm0_4
  __int64 i; // rcx
  FLOATOBJ v11; // [rsp+20h] [rbp-30h]
  __int128 v12; // [rsp+20h] [rbp-30h]
  FLOATOBJ v13; // [rsp+28h] [rbp-28h]
  FLOATOBJ v14; // [rsp+2Ch] [rbp-24h]

  v4 = *(_DWORD *)(*(_QWORD *)this + 32LL) & 0x38;
  if ( ((v4 - 8) & 0xFFFFFFE7) != 0 || v4 == 24 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v5 = *(_OWORD **)this;
  v6 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  if ( (v6 & 8) != 0 )
  {
    v7 = v5[1];
    v11 = COERCE_FLOAT(*v5) * 0.0625;
    v13 = COERCE_FLOAT(*((_QWORD *)v5 + 1)) * 0.0625;
    v14 = COERCE_FLOAT(HIDWORD(*v5)) * 0.0625;
    a2->eM12 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v5)) * 0.0625;
    a2->eM11 = v11;
    a2->eM21 = v13;
    a2->eM22 = v14;
    a2->eDx = *(float *)&v7 * 0.0625;
    a2->eDy = *((float *)&v7 + 1) * 0.0625;
  }
  else if ( (v6 & 0x10) != 0 )
  {
    v8 = v5[1];
    v12 = *v5;
    *(float *)&v12 = COERCE_FLOAT(*v5) * 16.0;
    v9 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v5)) * 16.0;
    *((float *)&v12 + 2) = COERCE_FLOAT(*((_QWORD *)v5 + 1)) * 16.0;
    LODWORD(a2->eDx) = v8;
    a2->eM12 = v9;
    LODWORD(a2->eM11) = v12;
    a2->eM21 = *((FLOATOBJ *)&v12 + 2);
    a2->eDy = *((FLOATOBJ *)&v8 + 1);
    a2->eM22 = *((float *)&v12 + 3) * 16.0;
  }
  else
  {
    for ( i = 0LL; i < 24; i += 4LL )
      *(FLOATOBJ *)((char *)&a2->eM11 + i) = *(FLOATOBJ *)(i + *(_QWORD *)this);
  }
}
