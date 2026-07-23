/*
 * XREFs of HalpWriteRtcStdPCAT @ 0x140419840
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpWriteRtcStdPCAT(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned int v12; // r8d
  unsigned __int8 v14; // al

  v4 = a1 + a3;
  v5 = a1;
  HalpAcquireCmosSpinLock();
  v7 = 0LL;
  do
  {
    __outbyte(0x70u, 0xAu);
    v8 = __inbyte(0x71u);
  }
  while ( v8 < 0 );
  __outbyte(0x70u, 0xBu);
  v9 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  v10 = v9 | 0x80;
  while ( 1 )
  {
    __outbyte(0x71u, v10);
    if ( v5 >= v4 )
      break;
    v14 = v5++;
    __outbyte(0x70u, v14);
    v10 = *(_BYTE *)(v7 + a2);
    v7 = (unsigned int)(v7 + 1);
  }
  __outbyte(0x70u, 0xBu);
  v11 = __inbyte(0x71u);
  LOBYTE(v6) = v11 & 0x7F;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v11 & 0x7F);
  HalpReleaseCmosSpinLock(v6, 113LL, v7);
  return v12;
}
