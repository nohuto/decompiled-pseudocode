/*
 * XREFs of HalpConnectThermalInterrupt @ 0x140555ED0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptGetPriority @ 0x1403BA8C8 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptGetIdentifiers @ 0x1404BACE0 (HalpInterruptGetIdentifiers.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpConnectThermalInterrupt(ULONG_PTR BugCheckParameter4)
{
  unsigned int Number; // ecx
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // r8d
  int v6; // r9d
  KPCR *Pcr; // rsi
  __int64 v8; // r9
  ULONG_PTR v9; // r10
  int v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+34h] [rbp-3Ch]
  int v12; // [rsp+38h] [rbp-38h]
  int v13; // [rsp+3Ch] [rbp-34h]
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  int v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+60h] [rbp-10h]
  int Priority; // [rsp+64h] [rbp-Ch]
  int v23; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+30h] BYREF
  int v25; // [rsp+A4h] [rbp+34h]

  v11 = 0;
  v17 = 0;
  v19 = 0LL;
  v20 = 0;
  Number = KeGetPcr()->Prcb.Number;
  v23 = 0;
  result = HalpInterruptGetIdentifiers(Number, &v23, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = HalpInterruptController;
    v24 = *(_DWORD *)(HalpInterruptController + 256);
    v25 = -2;
    if ( *(_DWORD *)(HalpInterruptController + 240) == 2 && HalpInterruptFindLines(&v24) )
    {
      Pcr = KeGetPcr();
      if ( !BYTE1(Pcr->HalReserved[5]) )
      {
        if ( HalpInterruptThermalServiceRoutine )
        {
          if ( HalpInterruptThermalServiceRoutine != BugCheckParameter4 )
          {
            HalpInterruptSetProblemEx(0LL, 36, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xD6Cu);
            KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v9, BugCheckParameter4);
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
        v11 = 0;
        v17 = 0;
        v19 = 0LL;
        v20 = 0;
        v14 = -1;
        v18 = v23;
        v10 = 1;
        v12 = 1;
        v13 = 16;
        v15 = 1;
        v16 = 4;
        v21 = 205;
        Priority = HalpInterruptGetPriority(v4, 0xCDu);
        return HalpInterruptSetLineStateInternal(v4, (__int64)&v24, (__int64)&v10, v8);
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
