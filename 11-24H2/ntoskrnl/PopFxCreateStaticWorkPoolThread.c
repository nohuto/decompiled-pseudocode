/*
 * XREFs of PopFxCreateStaticWorkPoolThread @ 0x14074BE50
 * Callers:
 *     PopFxInitializeWorkPool @ 0x14074C390 (PopFxInitializeWorkPool.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall PopFxCreateStaticWorkPoolThread(__int64 a1)
{
  int v1; // ebx
  _QWORD v3[3]; // [rsp+50h] [rbp-30h] BYREF
  int v4; // [rsp+68h] [rbp-18h]
  int v5; // [rsp+6Ch] [rbp-14h]
  __int128 v6; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  v5 = 0;
  Handle = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[0] = 48LL;
  v4 = 512;
  v6 = 0LL;
  v1 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, v3, 0LL, 0LL, PopFxStaticWorkPoolThread, a1, 0LL, 0LL);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v1;
}
