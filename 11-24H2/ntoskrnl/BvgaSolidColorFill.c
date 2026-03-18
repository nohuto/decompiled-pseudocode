/*
 * XREFs of BvgaSolidColorFill @ 0x140590970
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x1405904A0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x140590790 (BvgaReleaseLock.c)
 *     HeadlessDispatch @ 0x140653C90 (HeadlessDispatch.c)
 */

__int64 __fastcall BvgaSolidColorFill(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( !BvgaDisplayState )
  {
    BvgaAcquireLock();
    if ( BvgaBootDriverInstalled )
      VidSolidColorFill(a1, a2, a3, a4, a5);
    v10[0] = 37;
    BvgaTerminalBkgdColor = 40;
    v10[1] = 40;
    HeadlessDispatch(9LL, v10, 8LL);
    HeadlessDispatch(4LL, 0LL, 0LL);
    return BvgaReleaseLock();
  }
  return result;
}
