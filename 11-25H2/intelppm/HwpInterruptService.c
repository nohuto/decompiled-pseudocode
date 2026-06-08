/*
 * XREFs of HwpInterruptService @ 0x140005010
 * Callers:
 *     <none>
 * Callees:
 *     CpcNativeInterruptOccurred @ 0x1400055C0 (CpcNativeInterruptOccurred.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

char __fastcall HwpInterruptService(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  char v5; // r10
  unsigned __int64 v6; // rax
  char v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+40h] [rbp+18h]

  if ( *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 5) )
  {
    v6 = __readmsr(0x777u);
    v5 = v6;
    LODWORD(v6) = v6 & 0xFFFFFFFE;
    v7 = v5 & 1;
    v9 = v6;
    if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    {
      a3 = (unsigned int)v6 >> 3;
      LOBYTE(a3) = (v6 & 8) != 0;
      LODWORD(v9) = v6 & 0xFFFFFFF7;
    }
    else
    {
      LOBYTE(a3) = 0;
    }
    v8 = HIDWORD(v9);
    __writemsr(0x777u, v9);
    if ( v7 || (_BYTE)a3 )
    {
      LODWORD(v6) = KeGetPcr()->Prcb.Number;
      LOBYTE(v8) = v7;
      CpcNativeInterruptOccurred(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v6), v8, a3);
    }
  }
  if ( HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    v3 = __readmsr(0x1B1u);
    if ( (v3 & 0x4000000) != 0 )
    {
      if ( qword_140019AE0 )
        qword_140019AE0(433LL);
    }
  }
  return 1;
}
