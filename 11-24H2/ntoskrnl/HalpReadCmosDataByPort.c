/*
 * XREFs of HalpReadCmosDataByPort @ 0x140419AC0
 * Callers:
 *     HalpReadStdCmosData @ 0x140419AA0 (HalpReadStdCmosData.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpReadCmosDataByPort(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r8d
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al

  v6 = a3 + a5;
  v7 = a3;
  HalpAcquireCmosSpinLock();
  v10 = 0LL;
  while ( v7 < v6 )
  {
    v13 = v7++;
    __outbyte(0x70u, v13);
    v8 = 113LL;
    v14 = __inbyte(0x71u);
    *(_BYTE *)(v10 + a4) = v14;
    v10 = (unsigned int)(v10 + 1);
  }
  HalpReleaseCmosSpinLock(v9, v8, v10);
  return v11;
}
