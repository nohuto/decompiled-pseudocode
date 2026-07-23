/*
 * XREFs of HalpConnectThermalInterrupt @ 0x140553810
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x140373298 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x140373B58 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptGetIdentifiers @ 0x1404B5B80 (HalpInterruptGetIdentifiers.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpInterruptSetIdtEntry @ 0x140558090 (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpConnectThermalInterrupt(ULONG_PTR BugCheckParameter4)
{
  unsigned int Number; // ecx
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // r8d
  int v6; // r9d
  KPCR *Pcr; // rsi
  ULONG_PTR v8; // r10
  int v9; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+34h] [rbp-3Ch]
  int v11; // [rsp+38h] [rbp-38h]
  int v12; // [rsp+3Ch] [rbp-34h]
  int v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  int v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+54h] [rbp-1Ch]
  int v19; // [rsp+5Ch] [rbp-14h]
  int v20; // [rsp+60h] [rbp-10h]
  int Priority; // [rsp+64h] [rbp-Ch]
  int v22; // [rsp+98h] [rbp+28h] BYREF
  int v23; // [rsp+A0h] [rbp+30h] BYREF
  int v24; // [rsp+A4h] [rbp+34h]

  v10 = 0;
  v16 = 0;
  v18 = 0LL;
  v19 = 0;
  Number = KeGetPcr()->Prcb.Number;
  v22 = 0;
  result = HalpInterruptGetIdentifiers(Number, &v22, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = HalpInterruptController;
    v23 = *(_DWORD *)(HalpInterruptController + 256);
    v24 = -2;
    if ( *(_DWORD *)(HalpInterruptController + 240) == 2 && HalpInterruptFindLines(&v23) )
    {
      Pcr = KeGetPcr();
      if ( !BYTE1(Pcr->HalReserved[5]) )
      {
        if ( HalpInterruptThermalServiceRoutine )
        {
          if ( HalpInterruptThermalServiceRoutine != BugCheckParameter4 )
          {
            HalpInterruptSetProblemEx(0LL, 36, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xD6Cu);
            KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v8, BugCheckParameter4);
          }
        }
        else
        {
          HalpInterruptThermalServiceRoutine = BugCheckParameter4;
        }
        LOBYTE(v5) = 12;
        HalpInterruptSetIdtEntry(205, (unsigned int)HalpInterruptThermalService, v5, v6, -1LL);
        BYTE1(Pcr->HalReserved[5]) = 1;
        goto LABEL_8;
      }
      if ( HalpInterruptThermalServiceRoutine == BugCheckParameter4 )
      {
LABEL_8:
        v10 = 0;
        v16 = 0;
        v18 = 0LL;
        v19 = 0;
        v13 = -1;
        v17 = v22;
        v9 = 1;
        v11 = 1;
        v12 = 16;
        v14 = 1;
        v15 = 4;
        v20 = 205;
        Priority = HalpInterruptGetPriority(v4, 0xCDu);
        return HalpInterruptSetLineStateInternal(v4, (__int64)&v23, (__int64)&v9);
      }
      HalpInterruptSetProblemEx(0LL, 36, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xD89u);
      return 3221226021LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
