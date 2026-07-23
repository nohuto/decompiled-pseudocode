/*
 * XREFs of HalpWriteCmosDataByPort @ 0x1404190E0
 * Callers:
 *     HalpWriteStdCmosData @ 0x1404190C0 (HalpWriteStdCmosData.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpWriteCmosDataByPort(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  unsigned int v12; // r8d

  v6 = a3 + a5;
  v7 = a3;
  HalpAcquireCmosSpinLock();
  v10 = 0LL;
  while ( v7 < v6 )
  {
    v11 = v7++;
    __outbyte(0x70u, v11);
    v8 = 113LL;
    __outbyte(0x71u, *(_BYTE *)(v10 + a4));
    v10 = (unsigned int)(v10 + 1);
  }
  HalpReleaseCmosSpinLock(v9, v8, v10);
  return v12;
}
