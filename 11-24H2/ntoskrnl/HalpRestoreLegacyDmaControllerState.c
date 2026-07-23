/*
 * XREFs of HalpRestoreLegacyDmaControllerState @ 0x140B508A8
 * Callers:
 *     HalpRestoreDmaControllerState @ 0x140B4E0F0 (HalpRestoreDmaControllerState.c)
 * Callees:
 *     HalpIoDelay @ 0x1406A6AC0 (HalpIoDelay.c)
 */

void HalpRestoreLegacyDmaControllerState()
{
  unsigned __int8 v0; // di
  unsigned __int8 *v1; // rbx
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  unsigned __int16 v4; // dx

  __outbyte(0xFu, 0xFu);
  __outbyte(0xDEu, 0xEu);
  HalpIoDelay();
  __outbyte(8u, 0);
  __outbyte(0xD0u, 0);
  HalpIoDelay();
  v0 = 0;
  v1 = (unsigned __int8 *)&unk_140E104A1;
  do
  {
    if ( v1[3] )
    {
      v2 = *v1;
      v3 = *(_QWORD *)(v1 - 17);
      if ( v0 >= 4u )
      {
        __outbyte(v3 + 22, v2);
        v4 = *(_QWORD *)(v1 - 17) + 20;
      }
      else
      {
        __outbyte(v3 + 11, v2);
        v4 = *(_QWORD *)(v1 - 17) + 10;
      }
      __outbyte(v4, v1[2]);
      HalpIoDelay();
    }
    ++v0;
    v1 += 24;
  }
  while ( v0 < 8u );
}
